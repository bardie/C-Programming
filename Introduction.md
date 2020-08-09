## 1. Document section
These section contains documentation on the codes functionality. It is not processed by the compiler and will not be displayed as part of the output.
```
/* This is a sample documentation of this application.*/
```
## 2. Preprocessor Section
This section includes all standard input-output files before compiling any C program.

### Headers
A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files. 

There are two types of header files: 
 1. User-defined header files: Files created by a programmer
 2. Standard library header files: Come with the compiler
 
 Headers have the extension ".h" and are represented in brackets <> as illustrated below:
 ```
 #include <file>
 ```
  ```
 #include <stdio.h>
 ```
 A header can also be written with double quotes which signifies the header file is in the present folder
 ```
 #include"sample.h"
 ```

## 3. Definition section
The definition section allows the definition of macros which declare constant values. Defined variables or functions are allocated memory to store the variable or function.

It uses the #define directive which is made up of:
```
#define CNAME value
```
OR
```
#define CNAME (expression)
```
 1. CNAME: The name of the constant.
 2. Value: The value of the constant.
 3. Expression: Expression whose value is assigned to the constant and enclosed in parentheses if it contains operators.
 
### Examples
#### Integer
```
#define AGE 12
```
#### String
```
#define NAME "What is your age?"
```
#### Expression
```
#define AGE (12 / 2)
```
Defined expressions can also be undefined using the #undef directive which tells the preprocessor to remove all definitions for the specified macro. Once a macro is undefined, an #ifdef (if definition exists) directive on that macro will evaluate to false.
```
#undef macro_definition
```
Example
```
#undex AGE
```
## 4. Global declaration section
Global variables and user defined functions are declared outside any function are called global variables. Declaration of a variable or function simply declares that they exist somewhere in the program, but the memory is not allocated for them. The declaration tells the program their data types, the order of those arguments for functions, and the return type of the function.

### Extern

Example 1:
```
int foo(int arg1, char arg2);
```
Is compiled as
```
extern int foo(int arg1, char arg2);
```

Example 2:
```
extern int var;
```
### Typedef
Typedef allows us to create an alias or new name for an existing type or user defined type.

Syntax
```
typedef data_type new_name;
```
#### Example
```
typedef int myint;
```
```
typedef int myint, integer;
```

## 5. Function declaration section

## 6. Main function

## 7. User-defined function section

# Examples

### Commandline
Sample main.c from https://opensource.com/article/19/5/how-write-good-c-main-function
```
/* main.c - the complete listing */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>

#define OPTSTR "vi:o:f:h"
#define USAGE_FMT  "%s [-v] [-f hexflag] [-i inputfile] [-o outputfile] [-h]"
#define ERR_FOPEN_INPUT  "fopen(input, r)"
#define ERR_FOPEN_OUTPUT "fopen(output, w)"
#define ERR_DO_THE_NEEDFUL "do_the_needful blew up"
#define DEFAULT_PROGNAME "george"

extern int errno;
extern char *optarg;
extern int opterr, optind;

typedef struct {
  int           verbose;
  uint32_t      flags;
  FILE         *input;
  FILE         *output;
} options_t;

int dumb_global_variable = -11;

void usage(char *progname, int opt);
int  do_the_needful(options_t *options);

int main(int argc, char *argv[]) {
    int opt;
    options_t options = { 0, 0x0, stdin, stdout };

    opterr = 0;

    while ((opt = getopt(argc, argv, OPTSTR)) != EOF)
       switch(opt) {
           case 'i':
              if (!(options.input = fopen(optarg, "r")) ){
                 perror(ERR_FOPEN_INPUT);
                 exit(EXIT_FAILURE);
                 /* NOTREACHED */
              }
              break;

           case 'o':
              if (!(options.output = fopen(optarg, "w")) ){
                 perror(ERR_FOPEN_OUTPUT);
                 exit(EXIT_FAILURE);
                 /* NOTREACHED */
              }    
              break;
             
           case 'f':
              options.flags = (uint32_t )strtoul(optarg, NULL, 16);
              break;

           case 'v':
              options.verbose += 1;
              break;

           case 'h':
           default:
              usage(basename(argv[0]), opt);
              /* NOTREACHED */
              break;
       }

    if (do_the_needful(&options) != EXIT_SUCCESS) {
       perror(ERR_DO_THE_NEEDFUL);
       exit(EXIT_FAILURE);
       /* NOTREACHED */
    }

    return EXIT_SUCCESS;
}

void usage(char *progname, int opt) {
   fprintf(stderr, USAGE_FMT, progname?progname:DEFAULT_PROGNAME);
   exit(EXIT_FAILURE);
   /* NOTREACHED */
}

int do_the_needful(options_t *options) {

   if (!options) {
     errno = EINVAL;
     return EXIT_FAILURE;
   }

   if (!options->input || !options->output) {
     errno = ENOENT;
     return EXIT_FAILURE;
   }

   /* XXX do needful stuff */

   return EXIT_SUCCESS;
}
```
## GUI
