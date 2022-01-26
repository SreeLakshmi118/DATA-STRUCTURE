#include<stdio.h>
main()
{

int ar[60],elem,i,pos,size,n,j,choice,ch,flag;
      printf("Menu driven program to insert,delete,traverse and search\n");
      printf("1. Inserting an element in an array\n");
      printf("2. Deleting an element in an array\n");
      printf("3. Traversing elements in an array\n");
      printf("4. Searching element in an array\n");
      printf("5.default\n");
      printf("enter your choice\n");
      scanf("%d",&choice);
switch(choice)
{

    case 1:
        printf("enter the limit\n");
        scanf("%d",&n);
        printf("array elements\n");
    for(i=0;i<n;i++)
{
        scanf("%d",&ar[i]);
}
        printf("enter the position of elements\n");
        scanf("%d",&pos);
        printf("enter the element\n");
        scanf("%d",&elem);
    if(pos>n)
        printf("invalid\n");
    else
{
    for(i=n-1;i>=pos-1;i--)
        ar[i+1]=ar[i];
        ar[pos-1]=elem;
        printf("array after insertion\n");
    for(i=0;i<=n;i++)
        printf("%d\n",ar[i]);

break;
}

   case 2:

        printf("enter the limit\n");
        scanf("%d",&n);
        printf("enter the elements\n");
   for(i=0;i<n;i++)
{
        scanf("%d",&ar[i]);
}
        printf("enter position of element to be deleted\n");
        scanf("%d",&pos);
   if(pos>=n+1)
        printf("deletion not possible\n");
   else
{
   for(i=pos-1;i<n-1;i++)
      ar[i]=ar[i+1];
      printf("array after deletion\n");
   for(i=0;i<=n-2;i++)
{
    printf("%3d",ar[i]);
}
break;
}

   case 3:
          printf("enter the limit\n");
          scanf("%d",&n);
          printf("enter the elements\n");
    for(i=0;i<n;i++)
{
        scanf("%d",&ar[i]);
}
         printf("Traverse of elements");
    for(i=0;i<=n-1;i++)
{
        printf("%3d",ar[i]);
}
   break;

   case 4:
          printf("enter the limit\n");
          scanf("%d",&n);
          printf("enter the elements\n");
    for(i=0;i<n;i++)
{
          scanf("%d",&ar[i]);
}
          printf("enter the elements to be search\n");
          scanf("%d",&ch);
    for(i=0;i<n;i++)
          if(ar[i]==ch)
{
          flag=1;
          break;
}
        if(flag==1)
{
           printf("The value is at%d at position\n",i+1);

}
        else
{
            printf("not");
            break;
   case 5:
            default:

    printf("Invalid\n");
    break;
}
}
}
