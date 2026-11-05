#define WIFI  2
#define IOT  12
#define NTP  15
#define BT  17
#define SW1 16
#define SW2 14

void setup() {
    pinMode(WIFI, OUTPUT);
    pinMode(IOT, OUTPUT);
    pinMode(NTP, OUTPUT);
    pinMode(BT, OUTPUT);
    pinMode(SW1, INPUT_PULLUP);
    pinMode(SW2, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(SW1) == LOW) {
        digitalWrite(WIFI, LOW);
        digitalWrite(BT, LOW);
    } else {
        digitalWrite(WIFI, HIGH);
        digitalWrite(BT, HIGH);
    }
    
    if (digitalRead(SW2) == LOW) {
        digitalWrite(NTP, LOW);
        digitalWrite(IOT, LOW);
    } else {
        digitalWrite(NTP, HIGH);
        digitalWrite(IOT, HIGH);
    } 
}
