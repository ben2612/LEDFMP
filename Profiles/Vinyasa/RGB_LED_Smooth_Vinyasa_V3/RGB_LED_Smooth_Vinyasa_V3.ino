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
  setColour(0, 153, 60); // turquoise60
  delay(500);
  setColour(0, 255, 100);  // tq
  delay(500);
  setColour(255, 120, 0); // lo
  delay(500);
  setColour(153, 96, 0); // lightorange60
  delay(500);
  setColour(71, 75, 12); // l0lg30
  delay(250);
  setColour(60, 153, 36); // lightgreen60
  delay(500);
  setColour(100, 255, 60);  // lg
  delay(500);
  setColour(255, 155, 10);  // yel
  delay(500);
  setColour(153, 93, 6);  // yel60
  delay(500);
  setColour(81, 77, 53);  // yellb40
  delay(250);
  setColour(90, 138, 153); // lightblue60
  delay(500);
  setColour(150, 230, 255);  // lb
  delay(500);
  setColour(255, 155, 30);  // ww
  delay(500);
  setColour(153, 93, 18); // warmwhite60
  delay(500);
  setColour(51, 82, 26); // wwtq40
  delay(250);  


  
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
