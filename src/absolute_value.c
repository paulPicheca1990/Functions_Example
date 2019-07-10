#include <stdio.h>
#include "../libs/absolute_value.h"

float absolute_value( float number ) {  
  return ( number < 0 ) ? -(number) : number;
}

void test_absolute_value() {
  char *title_format = "%s\n";
  char *float_format = "%-12s %8.2f | %-12s %8.2f\n";
  float values[] = { 2.00, -2.00, -40.00 };

  printf( title_format, "Absolute Values: " );

  int index;
  for( index = 0; index < sizeof( values ) / sizeof( values[0] ); index++ )
    printf( float_format, "value:", values[index], "absolute:", absolute_value(values[index]) );    
  
  printf( "\n" );
}