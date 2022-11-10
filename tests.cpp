#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here

Coord3D point1 = {10, 20, 30};

TEST_CASE("Length Function"){
  CHECK(length(&point1) == 37.416574);
}
