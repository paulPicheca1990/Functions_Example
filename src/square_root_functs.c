#include <math.h>
#include "../libs/absolute_value.h"
#include "../libs/square_root_functs.h"

float square_root_pow( float number ){
  //return (float)pow(number, 1.00/2.00);  
  return (float)pow( 10, log10(number) / 2 );  
}

float square_root_iterative( float number ){
  const float epsilon = 0.00001;  
  float current_guess = 1.0;
  float absolute_result; 

  while( absolute_result != absolute_value( current_guess * current_guess - number ) && 
        ( absolute_result = absolute_value( current_guess * current_guess - number ) )  >= epsilon  ) 
    current_guess = (  number / current_guess + current_guess ) / 2.0;
  
  return current_guess;
}