
#include <Coordinates.h>

#define OK   "\t[   OK   ]"
#define FAIL "\t[ Failed ] : "
int isEqual(float x, float y, float r, float phi){
  Coordinates point = Coordinates();
  int errors = 0;
  Serial.print("Test ");
  Serial.print(x);
  Serial.print(", ");
  Serial.print(y);
  Serial.print(" -> ");
  Serial.print(r);
  Serial.print(", ");
  Serial.println(phi);
  point.fromCartesian(x,y);
  if(point.getR() != r || !compareRound(point.getAngle(), phi)){
    Serial.print(FAIL);
    Serial.print(point.getR());
    Serial.print(", ");
    Serial.println(point.getAngle());
    errors ++;
  }else{
    Serial.println(OK);
  }
  Serial.print("Test ");
  Serial.print(x);
  Serial.print(", ");
  Serial.print(y);
  Serial.print(" -> ");
  Serial.print(r);
  Serial.print(", ");
  Serial.println(phi);
  point.fromPolar(r,phi);
  if(!compareRound(point.getX(), x) || !compareRound(point.getY(), y)){
    Serial.print(FAIL);
    Serial.print(point.getX());
    Serial.print(", ");
    Serial.println(point.getY());
    errors ++;
  }else{
    Serial.println(OK);
  }
  return errors;
}
bool compareRound(float a, float b){
  return round(a*100) == round(b*100);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  delay(100);
  Serial.println("Testing coordinates conversion");
  isEqual(0,0,0,0);
  isEqual(0,1,1,PI/2);
  isEqual(0,-1,1,PI*3/2);
  isEqual(1,1,sqrt(2), PI/4);
  isEqual(-1,-1,sqrt(2),PI*5/4);
  isEqual(1,-1,sqrt(2),PI*7/4);
  isEqual(-1,1,sqrt(2),PI*3/4);
  delay(1000);
  Serial.print("\n\n\n");
}
