#include <stdio.h>
#include "../libs/absolute_value.h"
#include "../libs/square_root_functs.h"
#include "../libs/square_root.h"

float square_root( float number ) {  
  if( number < 0 ){
    char *error_message = "Negative argument to square_root(float);";
    printf("%s\n", error_message);
    return -1.0;
  }
    
  return square_root_iterative(number);    
}

void test_square_root() {
  char *title_format = "%s\n";
  char *float_format = "%-12s %8.2f | %-12s %8.2f\n";
  float values[] = { 2.00, 4.00, 16.00, 25.00, 64.00, 63.00, 525.00 };

  printf( title_format, "Square Root Values: " );

  int index;
  for( index = 0; index < sizeof( values ) / sizeof( values[0] ); index++ )
    printf( float_format, "value:", values[index], "square_root:", square_root(values[index]) );
  
  printf( "\n" );
}
