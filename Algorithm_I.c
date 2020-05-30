#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int k=(2*n)-1;
    int a[k][k];
    for (int i=0; i<n; i++) {
        //will run at o(n)
    for (int j=i; j<k-i; j++) {
        // will run at o(2n-1-i)
    a[i][j] = n-i;
    //for input 2, this will be printing top horizontal line
    /*
    2 2 2
    # # #
    # # #
    */
    a[j][i]=n-i;
    //for input 2, this will be printing left most verticle line
    /*
    2 # #
    2 # #
    2 # #
    */
    a[k-i-1][j]=n-i;
    //for input 2, this will be printing bottom horizontal line
    /*
    # # #
    # # #
    2 2 2
    */
    a[j][k-i-1]=n-i;
    //for input 2, this will be printing right most verticle line
    /*
    # # 2
    # # 2
    # # 2
    */
    //when you add all of them you get the desired output
    }
    }
  for(int i = 0; i<k; i++)
   {
     for(int j = 0; j<k; j++)
     {
       printf("%d ", a[i][j]);
     }
          printf("\n");
   }
    return 0;
}
