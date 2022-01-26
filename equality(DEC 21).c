#include<stdio.h>
#include<stdlib.h>
int main()
{
    int li,lj,si[20],sj[20],i,k;

    printf("Enter the size of first set:");
    scanf("%d",&li);
    printf("Enter the elements of first set:");
    for(i=0;i<li;i++)
        {
        scanf("%d",&si[i]);
        }

    printf("Enter the size of second set:");
    scanf("%d",&lj);
    printf("Enter the elements of second set:");
    for(i=0;i<lj;i++)
        {
        scanf("%d",&sj[i]);
        }

        if(li!=lj)
            {
            printf("not possible");
            }
        else
            {
            for(i=0;i<li;i++)
               {
                if(si[i] != sj[i])
                    {
                       k++;
                    }
               }
               if(k>0)
               {
                 printf("Sets Are NOt Equal");
               }
                else
                    {
                    printf("Sets are equal");
                    }
                }

              }



