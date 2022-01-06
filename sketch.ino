void setup() {
  // put your setup code here, to run once:



Serial.begin(115200);
//String odebrane_dane = "255,69,4";
String odebrane_dane = "255,254,253";

char red[4];
char blue[4];
char green[4];

odebrane_dane.toCharArray(red, odebrane_dane.indexOf(",")+1);

odebrane_dane.remove(0,odebrane_dane.indexOf(",")+1);

odebrane_dane.toCharArray(blue, odebrane_dane.indexOf(",")+1);

odebrane_dane.remove(0,odebrane_dane.indexOf(",")+1);

odebrane_dane.toCharArray(green, odebrane_dane.indexOf(","));

int redInt = String(red).toInt();
int blueInt = String(blue).toInt();
int greenInt = String(green).toInt();

Serial.print("red:");
Serial.println(redInt);
Serial.print("blue:");
Serial.println(blueInt);
Serial.print("green:");
Serial.println(greenInt);


}

void loop() {
  // put your main code here, to run repeatedly:


}





