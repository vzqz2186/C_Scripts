/*
    Daniel Vazquez
    Lab 5
    This program illustrates global variables
*/

#include <stdio.h>

int print_var(var);

int main(void)
{
    int var;

    var = 300; //local variable

    printf("main before print_global: var = %d \n", var);
    var = print_var(var);
    printf("main after print_global: var = %d \n", var);

    return 0;
}

//This functions produce a side effect
int print_var(var)
{
    printf("print_var before assignment: var = %d \n", var);
    var = 2 * var + 7;
    printf("print_var after assignment: var = %d \n", var);
    return var;
}


/*
   Lab 5 question answers:

   a) main before print_global: var = 300
      print_var before assignment; var = 300
      print_var after assignment: var = 607
      main after print_global: var = 607

   b) It gives you a declaration error in the print_var function because var is
      not defined in the function.

   c) var is now an independent value for both main and print_var. This means that
      it's going to hold a different value for the function and for main. The result
      is that var = 300 before and after print_var and a different number during
      print_var

   d) done

   e) It is batter because you're eliminating the global variables that, in a larger scheme of
      things, could ultimately lead to unwanted side effects

*/
