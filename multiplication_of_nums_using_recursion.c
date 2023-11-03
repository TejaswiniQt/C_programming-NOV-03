/*multiplication of two numbers using recursion*/

#include <stdio.h>

int mul(int a,int b)
{
    if(b < 1)
    return 0;
    else
    return a + mul(a,b-1);
}

int main()
{
    int a,b,res;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res = mul(a,b);
    printf("Mul = %d\n",res);
    return 0;
}