#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <math.h>
#include <iomanip>
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here

Coord3D point1 = {10, 20, 30};
Coord3D point2 = {-20, 21, -22};
Coord3D point3 = {40, 45, 50};

//fabs used for floating values vs abs for int values
TEST_CASE("TASK A Length Test"){
  CHECK(fabs(length(&point1) - 37.416574) < 0.000001);
  CHECK(fabs(length(&point2) - 36.400549) < 0.000001);
  CHECK(fabs(length(&point3) - 78.262379) < 0.000001);
}

TEST_CASE("TASK B fartherFromOrigin Test"){
  CHECK(fartherFromOrigin(&point1, &point2) == &point1);
  CHECK(fartherFromOrigin(&point2, &point3) == &point3);
  CHECK(fartherFromOrigin(&point1, &point3) == &point3);
}

TEST_CASE("TASK C move Test"){
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  CHECK(pos.x == 2);
  CHECK(pos.y == -10);
  CHECK(pos.z == 100.4);
}

TEST_CASE("TASK E create and delete Test"){
  Coord3D *p = nullptr;
  
  Coord3D *ppos = createCoord3D(10,20,30);
  
  CHECK(ppos->x == 10);
  CHECK(ppos->y == 20);
  CHECK(ppos->z == 30);

  deleteCoord3D(ppos);
  CHECK(ppos != p);

  Coord3D *pvel = createCoord3D(5.5,-1.4,7.77);
  CHECK(pvel->x == 5.5);
  CHECK(pvel->y == -1.4);
  CHECK(pvel->z == 7.77);

  deleteCoord3D(pvel);
  CHECK(pvel != p);
}
