
#define LED_PIN 13

unsigned long time;
unsigned long twelveMark;
unsigned long thirteenMark;
unsigned long elevenMark;
unsigned long tenMark;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  tone(9, 1000, 100);
  delay(100);
  tone(9, 2000, 100);
  delay(100);
  tone(9, 500,  100);
  delay(100);
  tone(9, 800,  100);
  delay(100);
  tone(9, 300,  100);
  delay(100);
  tone(9, 1500, 100);
  delay(100);
  tone(9, 900,  100);
}

void loop()
{
  time = millis();
  blink(time, &tenMark, 100, 10);
  blink(time, &elevenMark, 500, 11);
  blink(time, &twelveMark, 1000, 12);
  blink(time, &thirteenMark, 200, 13);
  delay(50);
}

void blink(unsigned long time, unsigned long* mark, int interval, int pin) {
  if (time - *mark > interval) {
    togglePin(pin);
    *mark = time;
  }
}

void togglePin(int pin) {
  digitalWrite(pin, !digitalRead(pin));
}

