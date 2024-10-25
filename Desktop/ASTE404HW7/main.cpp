#include <iostream>
#include "vec.h"

int main(int argc, char **argv) {

 double3 a{0,1,2};
 double3 b{0,0,1};
 std::cout<<a-b<<std::endl;
 std::cout<<dot(a,b)<<std::endl;
 return 0;
}

