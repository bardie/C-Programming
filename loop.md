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
A for loop statement consists of:
 1. Initialization Statement: Variable to start with
 2. Test Expressions can have multiple conditions using either ',' or '&&'.
 Example: This will discard the previous condition and retain only 'j < q'
 ```
 i < p, j < q
 ```
 Example 2: This will combine the conditions
 ```
 i < p && j < q
 ```
 3. Update Statement: Value to be added
 
### Syntax
```
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```
### Example 1
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
 ### Example 2
 ```
  #include <stdio.h>
 /* print Fahrenheit-Celsius table */
int main()
 {
 int fahr;
 for (fahr = 300; fahr >= 0 && fahr <= 300; fahr = fahr - 20)
 printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
 }
```
