#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

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

  *ppos = {x_new, y_new, z_new};
}

//TASK D
