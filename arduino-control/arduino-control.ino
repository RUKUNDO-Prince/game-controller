// Define the analog pins for X and Y axes
const int xAxisPin = A0;  // Analog pin for X-axis
const int yAxisPin = A1;  // Analog pin for Y-axis

// Variables to store the joystick position
int xAxisValue = 0;
int yAxisValue = 0;

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Read the analog values from the joystick
  xAxisValue = analogRead(xAxisPin);
  yAxisValue = analogRead(yAxisPin);

  // Send the values over the serial port
  Serial.print("X:");
  Serial.print(xAxisValue);
  Serial.print(" Y:");
  Serial.println(yAxisValue);

  // Optional: Add a short delay to reduce the serial output rate
  delay(100);
}
