# Kaleidoscope

<!--
*** To avoid retyping too much info. Do a search and replace for the following:
*** github_username, repo_name, twitter_handle, email, project_title, project_description
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->


<!-- PROJECT LOGO -->
<br />
<p align="center">

  <h3 align="center">Kaleidoskop</h3>

  <p align="center">
    Eine Übung zum Steuern eines LED-Streifens mit dem Arduino UNO
    <br />
    <a href="https://github.com/AlinaWoellner/Kaleidoskope"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/AlinaWoellner/Kaleidoskope">View Demo</a>
    ·
    <a href="https://github.com/AlinaWoellner/Kaleidoskope/issues">Report Bug</a>
    ·
    <a href="https://github.com/AlinaWoellner/Kaleidoskope/issues">Request Feature</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary><h2 style="display: inline-block">Inhalt</h2></summary>
  <ol>
    <li>
      <a href="#das-projekt">Das Projekt</a>
      <ul>
        <li><a href="#werkzeuge">Werkzeuge</a></li>
      </ul>
    </li>
    <li>
      <a href="#einstieg">Einstieg</a>
      <ul>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#beispielaufbau">Beispielaufbau</a></li>
    <li><a href="#entstehungsprozess">Entstehungsprozess</a></li>
    <li><a href="#reflektion">Reflektion</a></li>
    <li><a href="#ausstehend">Noch zu erledigen</a></li>
    <li><a href="#hauptquellen">Hauptquellen</a></li>
    <li><a href="#kontakt">Kontakt</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## Das Projekt

In diesem Projekt wird ein simples und effektives Kaleidoskop gebaut. 

### Werkzeuge

#### Zubehör
* []()  5 Kabel
* []()  1 Steckplatine
* []()  1 LED-Ring
* []()  1 Arduino UNO


#### Programm
* []()  Visual Studio Code
* []()  Platform IO Plugin
* []()  FastLED Library

#### Bau des Kaleidoskops
* []()  1 Pringles-Packung 
* []()  Spiegelfolie für den Innenbereich der Pringles-Packung
* []()  Dickeres Papier um die Spiegelfolie zu verstärken
* []()  Schwarzes Papier für den Boden Der Pringles-Packung
* []()  Kleber
* []()  1 Schere/ Messer
* []()  Weiße Acrylfarbe zum Grundieren
* []()  Schwarze Acrylfarbe, gemischt mit Glitter zum Drübermalen

<!-- GETTING STARTED -->
## Einstieg

### Installation

Mit Visual Studio Code:

1. Platform IO PLUGIN
   ```sh
   In der Suchleiste von Visual Studio Code "Platform IO" eingeben und auf den installieren Button klicken
   ```
2. Projekt erstellen
   ```sh
   Im Plugin auf "New Project" klicken
   ```
3. FastLED hinzufügen
   ```sh
   In Platform IO auf libraries klicken, dort nach "FastLED" suchen und dem Projekt hinzufügen
   ```
4. Code
   ```sh
   Nun den Code kopieren und in die Datei "main.cpp" des "src"-Ordners einfügen
   ```
5. Kompilieren und Uploaden
   ```sh
   Den Arduino mit dem Computer verbinden. In VS Code per Häkchen den Code kompilieren und mit rechtsgerichtetem Pfeil uploaden

<!-- USAGE EXAMPLES -->
Schaltplan

## Beispielaufbau
Schaltplan, erstellt mit TinkerCAD:
![Schaltung_Kaleidoscope](https://user-images.githubusercontent.com/82510384/127372737-56c22987-f8d0-49bc-ae4a-e46f2c79826f.png)

 1.  Ein Kabel vom GND des LED-Rings mit dem Minuspol der Steckplatine verbinden
 2.  Ein Kabel von den 5V des LED-Rings mit dem Pluspol der Steckplatine verbinden
 4.  Ein Kabel vom Di/ Din/ Data Input mit dem Pin 3 am Arduino verbinden
 5.  Ein Kabel vom Minuspol der Steckplatine mit dem GND am Arduino UNO verbinden
 6.  Ein Kabel vom Pluspol der Steckplatine mit den 5V am Arduino UNO verbinden
 7.  Den Arduino UNO per USB-Kabel mit einem Computer/ Laptop verbinden
 8.  Das Programm in Visual Studio Code auf den Arduino laden
 9.  Die Lichtshow genießen

Evtl. Foto von der Verbindung?

##  Entstehungsprozess

LED-Ring:
Ich habe mir zwei LED-Ringe besorgt, einen der Marke DollaTek und einen Adafruit Neopixel. Für das Projekt benutzte ich den der Marke DollaTek

Pringles-Packung:
Ich entfernte die Folie im Inneren um die Krümel besser entfernen zu können. Als nächstes bemalte ich das Äußere mit weißer Acrylfarbe, da sie gut deckt. Das Weiß sollte zunächst als Grundierung dienen. 
![2021-07-29 11-52-43](https://user-images.githubusercontent.com/82510384/127582644-34bc3cff-47f0-4dc0-a0da-5529ba2fd2ed.jpeg)

Zwischeneinschub:
Kondensatoren und einen 470Ω Widerstand ausgeliehen, allerdings doch nicht gebraucht

LED-Ring:
Löten der Kabel an die Kontakte des LED-Rings:
![2021-07-29 11-50-18](https://user-images.githubusercontent.com/82510384/127578643-a42efa6c-7f1e-4136-ac5c-1e1309cc896a.jpeg)

Code: Ich hatte Probleme mit dem Code meines ausgewählten Vorbilds und probierte sehr in VS Code rum

Pringles-Packung:
Um den LED-Ring entspannt in die Verpackung und wieder hinauszubekommen entschied ich mich am Boden, fast am metallenen Endstück, einen Schlitz reinzuschneiden:
![2021-07-29 11-57-02](https://user-images.githubusercontent.com/82510384/127583286-0dadfe30-6a16-4019-9528-86feb0bf9f97.jpeg)

Code: Ich entschied mich nach einem anderen, vielleicht sogar besseren Code zu suchen und entschied mich für ein Demo Reel für die FastLED library. Auch hier hatte ich etwas Probleme ihn zum laufen zubringen. Schlussendlich und nach einiger Recherche, fand ich heraus woran es lag und konnte es beheben. Der Code stand also schon mal.

Spiegelnde Oberflächen: 
Mein Plan war entweder eine dreicke oder eine sechseckige Form in die Pringles Packung zu setzen, welche auf der Innenseite mit Spiegelfolie beklebt ist, um die Lichter besser zu reflektieren. Um herauszufinden wie groß das sechseckige Gebilde in der Pringles-Packung sein kann, fertigte ich diese Zeichnung an:
![2021-07-29 11-48-32](https://user-images.githubusercontent.com/82510384/127581071-614e7f02-c15b-43d9-9a31-d87d560751ed.jpeg)
Als nächstes maß ich eine Seite aus. In meinem Fall waren es 3,5 cm. Ich erstellte sechs Streifen (3,5cm * 25 cm) aus dickerem Papier. Die 25 cm entsprechen der Länge der Pringles Packung: 
![Streifen](https://user-images.githubusercontent.com/82510384/127584814-c1e776d8-b322-4640-ba35-fc2c18e55f5c.jpg)
![2021-07-27 21-30-52](https://user-images.githubusercontent.com/82510384/127580898-eb9d2dce-56ec-4595-a208-89a4c65886f4.jpeg)
Ich klebte die Streifen parallel auf die Spiegelfolie und schnitt sie aus. Ich versuche es auch mit einem zusammenhängenden und nur geknickten Papier. Hierbei stellte ich fest, dass meine erste Variante besser ist, da die getrennten Streifen auf der Spiegelfolie mehr Flexibilität boden und ich sie besser zu einer sechseckigen Form ziehen konnte.
![2021-07-29 12-05-24](https://user-images.githubusercontent.com/82510384/127583075-61b29c53-1f22-435d-8649-4532de6ed83d.jpeg)

Alles:
Ich setzte den LED-Ring durch den Schlitz und durch die normale Öffnung das spiegelnde Gebilde in die Verpackung. Ich lud den Code mit Hilfe des Arduinos hoch. Es hat wunderbar geklappt. Eine kleine Verbesserung an der Verpackung nahm ich noch vor. Der Boden, auf dem der LED-Ring liegt, ist standardmäßig silbrig und nicht schimmernd. Ich schnitt etwas schwarzes Papier passend aus und legte es unter den Ring. 
![2021-07-29 11-59-27](https://user-images.githubusercontent.com/82510384/127584266-2d21547f-369d-4bff-9f3a-7fc80f43c5fe.jpeg)
Hierdurch wird der Eindruck, dass die Lichter aus dem dunklen Nichts enstehen, verstärkt.
So sieht das Kaleidoskop nur durch das Handy-Blitzlicht aus:
![2021-07-27 23-12-06](https://user-images.githubusercontent.com/82510384/127584524-e1f9614a-c163-4fb9-82ee-625aa758de8c.jpeg)
Und so durch die LEDs beleuchtet:
![2021-07-27 23-05-47_copy](https://user-images.githubusercontent.com/82510384/127584589-ddc5af22-4396-4798-a9d4-c21c0c8b622a.jpeg)

Code: 
Ich übersetzte die englischen Originalkommentare und fügte eigene Kommentare hinzu

Pringles-Verpackung:


Video:

##  Reflektion

Mein Ziel war es selbständig LEDs ansteuern zu können um ein schönes Lichterlebnis zum enstehen zu bringen. Ich wollte ursprünglich das "Franken'can LED Kaleidoscope" auf instructables komplett umsetzen. Da ich einige Zeit unlösbare Probleme hatte, suchte ich nach Alternativen und fand einen Code, welcher meiner Meinung nach sogar passendere Animationen generierte. Vom Aufbau des Kaleidoskops habe ich mich von der Franken'can inspirieren lassen, habe allerdings einige Dinge für mich angepasst. 

## Noch zu erledigen

Ich habe mein Ziel erreicht. Man könnte noch andere Animationen ausprobieren und einen Schalter wie beim Beispiel auf instructables implementieren

## Hauptquellen

Template für die README-Datei: https://github.com/othneildrew/Best-README-Template#getting-started
Idee des Kaleidoskops/ grober Aufbau: https://www.instructables.com/Frankencan-LED-Kaleidoscope/
Andere Anleitung zum Anschließen: https://www.youtube.com/watch?v=bm1Avnn1hb8&list=PLw2RrRDBhVsuskd1GUztLoT4q-8Fo56go&index=11&t=47s
Ausgangscode: https://gist.github.com/kriegsman/062e10f7f07ba8518af6
Anpassen des FastLED Codes: https://docs.platformio.org/en/latest/faq.html#convert-arduino-file-to-c-manually

<!-- CONTACT -->
## Kontakt

Project Link: [https://github.com/AlinaWoellner/Kaleidoskope](https://github.com/AlinaWoellner/Kaleidoskop)




