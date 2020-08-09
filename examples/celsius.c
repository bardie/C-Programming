 #include <stdio.h>
 /* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main()
 {
 int fahr, cels;
 int lower, upper, step;
 lower = 0; /* lower limit of temperature scale */
 upper = 300; /* upper limit */
 step = 10; /* step size */
 cels = lower;
 printf("Cels\tFahr\n");
 while (cels <= upper) {
   fahr = 9 * (cels) /5 + 32;
   printf("%d\t%d\n", cels, fahr);
   cels = cels + step;
 }
} 
