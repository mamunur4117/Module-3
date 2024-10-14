#include<stdio.h>
int main()
{
    int n=10;
    int sum=0;
    for(char i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d Even\n",i);
        }
        else{
            printf("%d Odd\n");
        }
        // printf("%d + %d =",sum,i);
        // sum+=i;
        // printf("%d\n",sum);
    }
return 0;
}