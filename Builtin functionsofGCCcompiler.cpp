///-----------------------------Builtin functions of GCC compiler
// C program to illustrate _builtin_popcount(x)
#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
      
    printf("Count of 1s in binary of %d is %d ",
           n, __builtin_popcount(n));
    return 0;
}
///----------------------------------
// C program to illustrate _builtin_parity(x)
  ///if the binary number has odd number of 1's then return(1) else "even" return(0)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
      
    printf("Parity of %d is %d ",
           n, __builtin_parity(n));
    return 0;
}
///------------------------------------
///__builtin_clz(x): This function is used to count the leading zeros 
///of the integer. Note : clz = count leading zero’s
/*a = 16
Binary form of 16 is 00000000 00000000 00000000 00010000
Output: 27*/

// C program to illustrate __builtin_clz(x)
#include <stdio.h>
int main()
{
    int n;
   scanf("%d",&n);
      
    printf("Count of leading zeros before 1 in %d is %d",
           n, __builtin_clz(n));
    return 0;
}
///__builtin_ctz(x): This function is used to count the trailing zeros
/// of the given integer. Note : ctz = count trailing zeros.
/*a = 16
Binary form of 16 is 00000000 00000000 00000000 00010000
Output: ctz = 4*/
/*a = 20
Binary form of 16 is 00000000 00000000 00000000 00010100
Output: ctz = 2*/
// C program to illustrate __builtin_ctz(x)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
      
    printf("Count of zeros from last to first "
           "occurrence of one is %d",
           __builtin_ctz(n));
    return 0;
}

