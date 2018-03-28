#include <stdio.h>

int main()
{
  double R1;                            // resistance value 1
  double R2;                            // resistance value 2
  double Rtot = 0;                      // resistance value total

  printf ("R1 = ");
  scanf ("%lf", &R1);
  
  printf ("R2 = ");
  scanf ("%lf", &R2);


  if (R1 && R2)
  {
     Rtot = R1 * R2 / (R1 + R2);
  }

  printf ("Rtot = %lf\nbye\n", Rtot);    // always remember to be polite!

  return 0;                              // ok, return to OS
}
