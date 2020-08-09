# Loop Statement
A loop is used for executing a block of statements repeatedly until a given condition returns false.

## While Loop
### Syntax
```
while (condition test)
{
      //Statements to be executed repeatedly 
      // Increment (++) or Decrement (--) Operation
}
```
### Example
```
#include <stdio.h>
 /* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main()
 {
   int fahr, celsius;
   int lower, upper, step;
   lower = 0; /* lower limit of temperature scale */
   upper = 300; /* upper limit */
   step = 20; /* step size */
   fahr = lower;
   
   while (fahr <= upper) {
     celsius = 5 * (fahr-32) / 9;
     printf("%d\t%d\n", fahr, celsius);
     fahr = fahr + step;
   } #include <stdio.h>
 /* print Fahrenheit-Celsius table */
 main()
 {
 int fahr;
 for (fahr = 0; fahr <= 300; fahr = fahr + 20)
 printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
 } 
 } 
```
## For Loop
### Syntax
```
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```
### Example
```
 #include <stdio.h>
 /* print Fahrenheit-Celsius table */
 main()
 {
 int fahr;
 for (fahr = 0; fahr <= 300; fahr = fahr + 20)
 printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
 } 
 ```
