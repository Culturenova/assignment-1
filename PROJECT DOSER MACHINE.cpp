#include <Servo.h>
#include <LiquidCrystal.h>


// Create instances for the servo motor and LCD
Servo servoMotor;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define variables
const int ledPin = 2; // Define the pin number for the LED (D2)
int potentiometerPin = A0;  // Analog pin for the potentiometer
int servoPin = 9;           // Digital pin for the servo motor
int servoPosition = 90;     // Initial servo position
int potValue = 0;           // Store potentiometer value

void setup() {
  // Initialize the servo motor and LCD
  servoMotor.attach(servoPin);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Flour Dosing Machine");
  lcd.setCursor(0, 1);
  lcd.print("Position: 0");
  
   pinMode(ledPin, OUTPUT); // Set the LED pin as an output

  // Set initial servo position
  servoMotor.write(servoPosition);
}

void loop() {
  // Read the value from the potentiometer
  potValue = analogRead(potentiometerPin);

  // Map potentiometer value to servo position (0-180)
  servoPosition = map(potValue, 0, 1023, 0, 180);

  // Update servo position
  servoMotor.write(servoPosition);

  // Display servo position on the LCD
  lcd.setCursor(11, 1);
  lcd.print("    "); // Clear the previous position
  lcd.setCursor(11, 1);
  lcd.print(servoPosition);
  
  
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(1000); // Delay for 1 second
   digitalWrite(ledPin, LOW); // Turn off the LED
   
   // delay(1000); // Delay for 1 second

  // Add a delay to control the servo motor's response time
  delay(100);
}








