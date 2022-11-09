#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

int main()
{

  //TASK A
  Coord3D pointP = {10, 20, 30};
  Coord3D *p = &pointP; //PERSONAL TESTS
  cout << p->x << endl; 
  cout << p->y << endl;
  cout << p->z << endl;
  cout << length(&pointP) << endl; //MUST INCLUDE IN TESTS.CPP

  //TASK B
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  cout << "Address of P: " << &pointP << endl;
  cout << "Address of Q: " << &pointQ << endl << endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ); //meant to return address right??

  cout << "ans = " << ans << endl; // So which point is farther?

  //TASK C
  
  return 0;
}
