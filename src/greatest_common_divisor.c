#include <stdio.h>
#include "../libs/absolute_value.h"
#include "../libs/greatest_common_divisor_functs.h"
#include "../libs/greatest_common_divisor.h"

int greatest_common_divisor(int a, int b) { 
  return gcd_binary_algorithmn( a, b ); 
};

void test_greatest_common_divisor() {
  char *title_format = "%s\n";
  char *divisor_format = "%-12s %8d | %-12s %8d | %-4s %8d\n";
  int values[][2] = { {48, 18} };

  printf( title_format, "Greatest Common Divisor: " );  

  int index;
  for( index = 0; index < sizeof( values ) / sizeof( values[0] ); index++ )
    printf( divisor_format, 
      "numerator:",
      values[index][0], 
      "denominator:",
      values[index][1], 
      "gcd:",
      greatest_common_divisor( values[index][0], values[index][1] ) );
  
  printf( "\n" );
}