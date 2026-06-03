const int buzzer1 = 2 ;
const int buzzer2 = 4 ;
const int flamePin = 6 ;
int Flame = HIGH ;
int led = 13 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(led, OUTPUT);

  pinMode(flamePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Flame = digitalRead(flamePin);
  if (Flame == LOW)
  {
    digitalWrite(buzzer1, HIGH);
    digitalWrite(buzzer2, HIGH);
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(buzzer1, LOW);
    digitalWrite(buzzer2, LOW);
    digitalWrite(led, LOW);
  }
}
