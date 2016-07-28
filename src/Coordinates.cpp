#include "Coordinates.h"

Coordinates::Coordinates(float x, float y){
  fromCartesian(x,y);
}

void Coordinates::fromCartesian(float x, float y){
  this->x = x;
  this->y = y;
  if(x == 0 && y == 0 ){
    this->r = 0;
    this->phi = 0;
    return;
  }
  this->r = sqrt(x*x + y*y);
  if(x == 0 && 0 < y){
    this->phi = PI/2;
  }else if(x == 0 && y < 0){
    this->phi = PI*3/2;
  }else if(x < 0){ //x != 0
    this->phi = atan(y/x) + PI;
  }else if (y < 0){
    this->phi = atan(y/x) + 2*PI;
  }else{
    this->phi = atan(y/x);
  }

}

void Coordinates::fromPolar(float r, float phi){
  this->r = r;
  this->phi = phi;
  this->x = r*cos(phi);
  this->y = r*sin(phi);
}
