//Digital Pinms to attach LED to:
int redPin = 9;
int greenPin = 10;
int bluePin = 11;


//Create integers of r,g and b
int r = 0;
int g = 0;
int b = 0;


//Set up the pins as outputs
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

//choose what colours and the sequence will be.
// add a delay() function in to keep a chosen colour on for longer
void loop() {
  setColour(255, 150, 10); // lightyellow
  delay(200);
  setColour(179, 105, 7); // lightyellow
  delay(300);
  setColour(230, 135, 9); // lightyellow
  delay(100);
  setColour(255, 150, 10); // lightyellow
  delay(700);
  setColour(230, 135, 9); // lightyellow
  delay(1000);
  setColour(179, 105, 7); // lightyellow
  delay(500);
  setColour(77, 45, 3); // lightyellow
  delay(200);
  setColour(204, 120, 8); // lightyellow
  delay(300);
  setColour(230, 135, 9); // lightyellow
  delay(500);
  setColour(255, 150, 10); // lightyellow
  delay(800);
  setColour(102, 60, 4); // lightyellow
  delay(100);
  setColour(255, 150, 10); // lightyellow
  delay(300);
  setColour(155, 90, 6);  // lightyellow60%
  delay(500);
  setColour(240, 90, 69); // coral
  delay(200);
  setColour(192, 72, 55); // coral
  delay(300);
  setColour(96, 36, 28); // coral
  delay(100);
  setColour(240, 90, 69); // coral
  delay(700);
  setColour(216, 81, 62); // coral
  delay(1000);
  setColour(168, 63, 48); // coral
  delay(500);
  setColour(72, 27, 21); // coral
  delay(200);
  setColour(240, 90, 69); // coral
  delay(300);
  setColour(216, 81, 62); // coral
  delay(500);
  setColour(240, 90, 69); // coral
  delay(800);
  setColour(144, 54, 41); // coral
  delay(100);
  setColour(240, 90, 69); // coral
  delay(300);
  setColour(144, 54, 41);  // coral60%
  delay(500);
  setColour(255, 155, 30); // warmwhite
  delay(200);
  setColour(204, 124, 24); // warmwhite
  delay(300);
  setColour(77, 31, 9); // warmwhite
  delay(100);
  setColour(230, 140, 27); // warmwhite
  delay(700);
  setColour(255, 155, 30); // warmwhite
  delay(1000);
  setColour(179, 109, 21); // warmwhite
  delay(500);
  setColour(255, 155, 30); // warmwhite
  delay(200);
  setColour(102, 62, 12); // warmwhite
  delay(300);
  setColour(255, 155, 30); // warmwhite
  delay(500);
  setColour(230, 140, 27); // warmwhite
  delay(800);
  setColour(153, 93, 18); // warmwhite
  delay(100);
  setColour(255, 155, 30); // warmwhite
  delay(300);
  setColour(155, 93, 18); // warmwhite60%
  delay(500);
  setColour(255, 120, 0); // lightorange
  delay(200);
  setColour(179, 84, 0); // lightorange
  delay(300);
  setColour(153, 72, 0); // lightorange
  delay(100);
  setColour(230, 108, 0); // lightorange
  delay(700);
  setColour(255, 120, 0); // lightorange
  delay(1000);
  setColour(204, 96, 0); // lightorange
  delay(500);
  setColour(255, 120, 0); // lightorange
  delay(200);
  setColour(179, 84, 0); // lightorange
  delay(300);
  setColour(204, 96, 0); // lightorange
  delay(500);
  setColour(255, 120, 0); // lightorange
  delay(800);
  setColour(102, 48, 0); // lightorange
  delay(100);
  setColour(179, 84, 0); // lightorange
  delay(300);
  setColour(153, 72, 0);  // lightorange60%
  delay(500);
  setColour(200, 60, 230); // violet
  delay(200);
  setColour(180, 54, 207); // violet
  delay(300);
  setColour(80, 24, 92); // violet
  delay(100);
  setColour(200, 60, 230); // violet
  delay(700);
  setColour(220, 66, 253); // violet
  delay(200);
  setColour(200, 60, 230); // violet
  delay(1000);
  setColour(120, 36, 138); // violet
  delay(500);
  setColour(180, 54, 207); // violet
  delay(200);
  setColour(140, 42, 161); // violet
  delay(300);
  setColour(220, 66, 253); // violet
  delay(500);
  setColour(180, 54, 207); // violet
  delay(800);
  setColour(200, 60, 230); // violet
  delay(100);
  setColour(120, 36, 138);  // violet60%
  delay(500);
}

//this 'setColour' function changes the PWM output of the pins to the colours we choose in the Loop
void setColour(int red, int green, int blue) {
  while ( r != red || g != green || b != blue ) {
    if ( r < red ) r += 1;
    if ( r > red ) r -= 1;

    if ( g < green ) g += 1;
    if ( g > green ) g -= 1;

    if ( b < blue ) b += 1;
    if ( b > blue ) b -= 1;

    _setColour();
    delay(10);
  }
}

//Write the chosen color to the LED
void _setColour() {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}
