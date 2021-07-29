#include <Arduino.h>
#include <FastLED.h>

#if FASTLED_VERSION < 3001000
#error "Requires FastLED 3.1 or later; check github for latest code."
#endif

#define DATA_PIN    3 // Pin, an dem die LEDs angeschlossen sind
#define LED_TYPE    WS2812  // LED Typ angeben
#define COLOR_ORDER GRB
#define NUM_LEDS    12  // So viele LEDs hat der Streifen
CRGB leds[NUM_LEDS];  // Array von FastLED Pixel RGB-Werten

#define BRIGHTNESS          96   
#define FRAMES_PER_SECOND  120  

// Damit der Code funktioniert, müssen die später aufgerufenen Muster noch vor der setup() Funktion deklariert werden
void rainbow();
void rainbowWithGlitter(); 
void addGlitter( fract8 chanceOfGlitter);
void confetti(); 
void sinelon();
void bpm();
void juggle();
void nextPattern();


void setup() {  // Diese Funktion wird bei Programmstart einmal aufgerufen
  delay(3000); // 3 Sekunden Verzögerung
  
  // FastLED sagen, wie die Konfiguration des LED-Rings ist
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  //FastLED.addLeds<LED_TYPE,DATA_PIN,CLK_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);

}


// Liste der durchlaufenden Muster. Jedes Muster wird weiter unten definiert. 
typedef void (*SimplePatternList[])();
SimplePatternList gPatterns = { rainbow, rainbowWithGlitter, confetti, sinelon, juggle, bpm };

uint8_t gCurrentPatternNumber = 0; // Index Nummer des aktuellen Musters 
uint8_t gHue = 0; // Wechselnde "Grundfarbe", von vielen Mustern benutzt 
  
void loop()
{
  // Das aktuelle Muster einmal aufrufen und das "leds" Array updaten 
  gPatterns[gCurrentPatternNumber]();


  FastLED.show();  // Funktion anwenden
  
  FastLED.delay(1000/FRAMES_PER_SECOND); // Verlangsamung der Animation

  // Regelmäßige Aktualisierungen
  EVERY_N_MILLISECONDS( 20 ) { gHue++; } // langsam die "Grundfarbe" durch die Farben des Regenbogens führen
  EVERY_N_SECONDS( 10 ) { nextPattern(); } // In regelmäßigen Abständen das Muster wechseln
}

#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

void nextPattern()
{
  // Zur aktuellen Musternummer eine Ziffer hinzufügen und am Ende umbrechen  and wrap around at the end
  gCurrentPatternNumber = (gCurrentPatternNumber + 1) % ARRAY_SIZE( gPatterns);
}

// Die einzelnen Muster
void rainbow() 
{
  // FastLEDs eingebauter Regenbogengenerator
  fill_rainbow( leds, NUM_LEDS, gHue, 7);
}

void rainbowWithGlitter() 
{
  // FastLEDs eingebauter Regenbogengenerator, mit etwas zufälligem funkelnden Glitzer
  rainbow();
  addGlitter(80);
}

void addGlitter( fract8 chanceOfGlitter) 
{
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;
  }
}

void confetti() 
{
  // Zufällige farbige Sprenkel, die einblenden und sanft verblassen
  fadeToBlackBy( leds, NUM_LEDS, 10);
  int pos = random16(NUM_LEDS);
  leds[pos] += CHSV( gHue + random8(64), 200, 255);
}

void sinelon()
{
  // Ein farbiger Punkt, der hin und her bewegt, mit verblassenden Spuren
  fadeToBlackBy( leds, NUM_LEDS, 20);
  int pos = beatsin16(13,0,NUM_LEDS);
  leds[pos] += CHSV( gHue, 255, 192);
}

void bpm()
{
  // Farbige Streifen, die mit einer definierten Beats-Per-Minute (BPM) pulsieren
  uint8_t BeatsPerMinute = 62;
  CRGBPalette16 palette = PartyColors_p;
  uint8_t beat = beatsin8( BeatsPerMinute, 64, 255);
  for( int i = 0; i < NUM_LEDS; i++) { //9948
    leds[i] = ColorFromPalette(palette, gHue+(i*2), beat-gHue+(i*10));
  }
}

void juggle() {
  // Zcht Punkte synchronisieren sich auf eine Farbe
  fadeToBlackBy( leds, NUM_LEDS, 20);
  byte dothue = 0;
  for( int i = 0; i < 8; i++) {
    leds[beatsin16(i+7,0,NUM_LEDS)] |= CHSV(dothue, 200, 255);
    dothue += 32;
  }
}

