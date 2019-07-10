#include <stdio.h>
#include "./libs/absolute_value.h"
#include "./libs/greatest_common_divisor.h"
#include "./libs/square_root.h"

/**
 * Main Program
 */
int main ( int argc, char **argv ){
  test_absolute_value();
  test_greatest_common_divisor();
  test_square_root();
  
  return 0;
}
