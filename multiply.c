#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,result; 
    scanf("%d",&n);
     for(i=1;i<=10;i++)
         {
         result= n* i;
         printf("%d x %d = %d\n",n ,i,result);
         }
    
    return 0;
}
