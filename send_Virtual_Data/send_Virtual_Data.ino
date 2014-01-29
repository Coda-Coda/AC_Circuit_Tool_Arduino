//Send data over the serial port of the form: "millis, analog 1 reading" in future will be extended to "millis, A1, A2, A3 etc"


float count = 1;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print(millis());
  Serial.print(",");
  Serial.print(sin(2*PI*(count-1)/360)); //Print virtual analog 1 reading
  Serial.println();
  count++;
  delay(10);
}
