 #include <stdio.h>
 /* Gets the ASCII number for input inserted and validates that it is not equal to EOF (-1) then shows the character inserted*/
 main()
 {
 int c;
 c = getchar();
 while (c != EOF) {
 putchar(c);
 c = getchar();
 }
 } 
