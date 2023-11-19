
#include<stdio.h>
int main()
{
    char x[5]={'A','B','C','D','E'};
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int small=a[0];
    char g=x[0];
    for(int i=0;i<5;i++)
    {
        if(small<a[i])
        {
            small=a[i];
            g=x[i];
        }
    }
    printf("%c %d",g,small);
}
