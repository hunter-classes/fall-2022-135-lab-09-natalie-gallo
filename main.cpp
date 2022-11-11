#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"
using namespace std;

int main()
{

  //TASK A
  cout << "TASK A" << endl;
  Coord3D point1 = {10, 20, 30};
  Coord3D *p = &point1;
  //PERSONAL TESTS
  //cout << p->x << endl; 
  //cout << p->y << endl;
  //cout << p->z << endl;
  cout << length(&point1) << endl; //MUST INCLUDE IN TESTS.CPP

  //TASK B
  cout << endl << "TASK B" << endl;
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  cout << "Address of P: " << &pointP << endl;
  cout << "Address of Q: " << &pointQ << endl << endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ); //meant to return address right??

  cout << "ans = " << ans << endl; // So which point is farther?

  //TASK C
  cout << endl << "TASK C" << endl;
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  cout << pos.x << " " << pos.y << " " << pos.z << endl;
  // prints: 2 -10 100.4 

  //TASK D - not apart of main, in file poem.cpp
       
  //TASK E
  cout << endl << "TASK E" << endl;
  /*double x, y, z;
{  cout << "Enter position: ";
  cin >> x >> y >> z;*/
  Coord3D *ppos = createCoord3D(10,20,30);
    
  /*cout << "Enter velocity: ";
    cin >> x >> y >> z;*/
  Coord3D *pvel = createCoord3D(5.5,-1.4,7.77);

  move(ppos, pvel, 10.0);

  cout << "Coordinates after 10 seconds: "
       << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);
  
  return 0;
}
