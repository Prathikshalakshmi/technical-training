//Program to print sum of N natural number using recursion
#include <stdio.h>

unsigned long sum(int n){
    if(n==1) //base case
        return 1;
    else
        return n+sum(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lu" ,sum(n));
 
    return 0;
}
