#include<stdio.h>
int power(int n,int x)
    {
        int mul=1;
        for(int i=1; i<=x; i++) {
            mul *= n;
        }
    return mul;
    }

void  digit(int n)
    {
        int x=n;
        int sum=0;
    for (int i=0;n>0;i++){
         int d = n%10;
         n=n/10;
         sum+=power(d,3);
        }
        if (sum == x){
                printf("%d is an armstrong number\n",x);
            }
            else{
                printf("%d is not an armstrong number\n",x);
            }
    }

int main()
    {
    int n;
    printf("Enter  the number : ");
    scanf("%d",&n);
    digit(n);
    return 0;
    }
