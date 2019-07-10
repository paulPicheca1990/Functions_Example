#include <math.h>
#include "../libs/absolute_value.h"
#include "../libs/greatest_common_divisor_functs.h"

bool is_equal( int a, int b ) { return ( a == b ); }
bool is_even( int number ) { return ( number % 2 == 0 ); }
bool is_greater( int a, int b ) { return (a > b); }

int gcd_euclid_algorithmn_a( int a, int b ){
  return ( b == 0 ) ? a : gcd_euclid_algorithmn_a( b, a % b );    
}

int gcd_euclid_algorithmn_b( int a, int b ){  
  return ( b == 0 ) ? a : gcd_euclid_algorithmn_b( b, a - b * absolute_value( a / b ) );
}

int gcd_euclid_algorithmn_c( int a, int b ){  
  if( a == 0 && b == 0 )
    return 0;

  if( a == b )
    return a;

  if( a > b )
    return gcd_euclid_algorithmn_c( a - b, b );  

  if( b > a )
    return gcd_euclid_algorithmn_c( a, b - a ); 

  return -1;
}

int gcd_binary_algorithmn( int a, int b ) {
  int temp = 0;

  while ( is_even(a) && is_even(b) ) {
    a = a/2;
    b = b/2;
    temp += 1;
  }

  while( !is_equal(a,b) ){
    if( is_even(a) )
      a /= 2;
    else if( is_even(b) )
      b /= 2;
    else if( is_greater(a, b) )
      a = (a - b)/2;
    else
      b = (b - a)/2;
  }

  return (int)(a * pow(2, temp));
}