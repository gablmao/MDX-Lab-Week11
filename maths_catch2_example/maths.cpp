#include "maths.h"

double absolute(double number)
{
  //if it isn't a negative, it's already in absolute
  if (number <= -1)
    number = -number;
  return number;
}

double power(double number, int exponent)
{
  double result = number;
  for (int i = 1; i < exponent; ++i)
    result *= number;
  return result;
}

bool is_prime(int number)
{
  for (int i = 2; i <= number/2; ++i)
    if (number % i == 0)
      return false;
  return true;
}

