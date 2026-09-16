# 🔴🟢 Arduino Due LED Alternati

## 📌 Descrizione

Terzo progetto realizzato con **Arduino Mega 2560 R3**.

Il progetto utilizza **due LED** collegati a due uscite digitali di Arduino.
I LED si accendono alternativamente: quando un LED è acceso, l'altro è spento.

Ogni LED rimane acceso per **1 secondo**, creando una sequenza luminosa continua.

---

## 🎯 Obiettivo

Realizzare un circuito con due LED controllati da Arduino, utilizzando la programmazione per alternare automaticamente la loro accensione.

---

## 🧰 Componenti

- Arduino Mega 2560 R3
- 2 LED
- 2 resistenze da 220 Ω
- Breadboard
- Jumper wires

---

## 🔌 Collegamento

### LED 1

```text
Arduino D13
    │
  220 Ω
    │
   LED 1
    │
   GND
LED 2
Arduino A1
    │
  220 Ω
    │
   LED 2
    │

    ⚙️ Funzionamento

Il programma esegue continuamente una sequenza alternata:

LED 1 — D13	LED 2 — A1
🔴 Acceso	🟢 Spento
🔴 Spento	🟢 Acceso

Ogni stato rimane attivo per 1 secondo.

Il ciclo viene ripetuto continuamente all'interno della funzione loop().

🧠 Concetti utilizzati
Uscite digitali Arduino
Controllo di più LED
Funzione pinMode()
Funzione digitalWrite()
Funzione delay()
Ciclo loop()
Resistenze per limitazione della corrente
Sequenze di accensione e spegnimento
📸 Foto del progetto

La foto del circuito verrà aggiunta qui.

🚀 Possibili sviluppi

Il progetto può essere sviluppato ulteriormente per:

modificare la velocità di alternanza
utilizzare più LED
creare sequenze luminose
utilizzare un pulsante per controllare la sequenza
creare un effetto simile a un semaforo
sostituire delay() con una gestione temporale tramite millis()
👨‍💻 Autore

Giovanni Galofaro

Elettronica • Arduino • Programmazione • Progettazione
   GND

Ogni LED deve essere collegato tramite una propria resistenza da 220 Ω per limitare la corrente.
