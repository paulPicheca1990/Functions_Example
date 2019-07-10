#ifndef __GREATEST_COMMON_DIVISOR_FUNCTS_H__
#define __GREATEST_COMMON_DIVISOR_FUNCTS_H__

#include <stdbool.h>

int gcd_euclid_algorithmn_a( int a, int b );
int gcd_euclid_algorithmn_b( int a, int b );
int gcd_euclid_algorithmn_c( int a, int b );

int gcd_binary_algorithmn( int a, int b );

bool is_even(int a);
bool is_equal(int a, int b);
bool is_greater(int a, int b);

#endif //__GREATEST_COMMON_DIVISOR_FUNCTS_H__