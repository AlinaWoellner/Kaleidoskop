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

[![Product Name Screen Shot][product-screenshot]](https://example.com)



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

##  Entstehungsprozess



##  Reflektion

## Noch zu erledigen

## Hauptquellen

Template für die README-Datei: https://github.com/othneildrew/Best-README-Template#getting-started
Idee des Kaleidoskops/ grober Aufbau: https://www.instructables.com/Frankencan-LED-Kaleidoscope/
Andere Anleitung zum Anschließen: https://www.youtube.com/watch?v=bm1Avnn1hb8&list=PLw2RrRDBhVsuskd1GUztLoT4q-8Fo56go&index=11&t=47s
Ausgangscode: https://gist.github.com/kriegsman/062e10f7f07ba8518af6
Anpassen des FastLED Codes: https://docs.platformio.org/en/latest/faq.html#convert-arduino-file-to-c-manually

<!-- CONTACT -->
## Kontakt

Project Link: [https://github.com/AlinaWoellner/Kaleidoskope](https://github.com/AlinaWoellner/Kaleidoskop)




