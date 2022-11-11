#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"
using namespace std;

// add functions here

//TASK A

double length(Coord3D *p){
  double x = p->x;
  double y = p->y;
  double z = p->z;
  return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

//TASK B

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  double point1 = length(p1);
  double point2 = length(p2);
  if (point1 > point2){
    return p1;
  } else {
    return p2;
  }
}

//TASK C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
  double x_new = ppos->x + pvel->x * dt;
  double y_new = ppos->y + pvel->y * dt;
  double z_new = ppos->z + pvel->z * dt;

  ppos->x = x_new;
  ppos->y = y_new;
  ppos->z = z_new;
}

//TASK D - in file called "poem.cpp"


//TASK E

Coord3D* createCoord3D(double x, double y, double z){ // allocate memory and initialize
  Coord3D point1 = {x, y, z};
  Coord3D *p = new Coord3D;

  p->x = point1.x;
  p->y = point1.y;
  p->z = point1.z;
  
  
  return p;
}

void deleteCoord3D(Coord3D *p){ // free memory
  delete p;
  p = nullptr;
}
