#include <stdio.h>
int findSum(int n){
    int sum = 0;
    
    // iterating over all the numbers 
    // between 1 to n
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf(" Sum of  number %d is %d",n, findSum(n));
    return 0;
}