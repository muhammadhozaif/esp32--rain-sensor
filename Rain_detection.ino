#define RAIN_SENSOR  4
int flag = 0;

void notifyOnFire() {
  int isButtonPressed = digitalRead(RAIN_SENSOR);

  if (isButtonPressed == 0 && flag == 0) {
    Serial.println("It's Raining");
    flag = 1;
  }
  else if (isButtonPressed == 1) {
    flag = 0;
  }
}

void setup() {
  pinMode(RAIN_SENSOR, INPUT);
  Serial.begin(115200);  // Start serial communication with a baud rate of 115200
}

void loop() {
  notifyOnFire();
  delay(2500);  // Delay for 2.5 seconds before checking again
}
