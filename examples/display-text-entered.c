 #include <stdio.h>
 /* Gets the Decimal number based on the ASCII table for input inserted and validates that it is not equal to EOF (-1) then shows the character inserted*/
 main()
 {
 int c;
 c = getchar();
 while (c != EOF) {
 putchar(c);
 c = getchar();
 }
 } 
