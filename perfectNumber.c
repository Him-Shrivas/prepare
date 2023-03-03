//perfect number
#include <stdio.h>
#include<conio.h>
int perfectNum(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    return sum;
}
int main()
{
    int num ;
    scanf("%d",&num);
    int result=perfectNum(num);
    if(result==num)
    printf("YES");
    else
    printf("NO");
    return 0;
}
