const int BT = 17;
const int WIFI = 2;
const int NTP = 15;
const int IOT = 12;

void setup() {
  Serial.begin(115200);
  pinMode(BT, OUTPUT);
  pinMode(WIFI, OUTPUT);
  pinMode(NTP, OUTPUT);
  pinMode(IOT, OUTPUT);


  digitalWrite(BT, HIGH);
  digitalWrite(WIFI, HIGH);
  digitalWrite(NTP, HIGH);
  digitalWrite(IOT, HIGH);
}

void loop() {

  char ch = Serial.read();
  if (ch == 'w') {
    digitalWrite(BT, LOW);
  }
  if (ch == 'a') {
    digitalWrite(WIFI, LOW);
  }
  if (ch == 's') {
    digitalWrite(NTP, LOW);
  }
  if (ch == 'd') {
    digitalWrite(IOT, LOW);
  }
}