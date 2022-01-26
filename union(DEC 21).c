#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n1,n2,n3,i;
    int a[100],b[100],c[200];
    printf("Enter the size of set 1");
    scanf("%d",&n1);
    printf("Enter the set elements");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of set 2");
    scanf("%d",&n2);
    printf("Enter the set elements");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    if(n1!=n2)
    {
        printf("union is not possible");
    }
    else
    {
        n3=n1;

        for(i=0;i<n3;i++)
        {
        c[i]=a[i] || b[i];
        }
        for(i=0;i<n3;i++)
        {
        printf("%d",c[i]);
        }
    }
}
