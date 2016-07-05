#define RELAY 7 // output pin for relay
#define REED 6 // input pin for the reed switch
int state = 0; // used to store state of input pin


void setup() {
  pinMode(RELAY, OUTPUT);
  pinMode(REED, INPUT);
}

void loop() {
  state = digitalRead(REED);

  if (state == HIGH) {
    digitalWrite(RELAY, HIGH);
  } else {
    digitalWrite(RELAY, LOW);
  }
}
