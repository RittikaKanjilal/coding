#include<stdio.h>
void main()
{
    int array[10],n,c,d,swap;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }
    for(c=0;c<n-1;c++)
    {
        for(d=0;d<n-c-1;d++)
        {
            if(array[d]>array[d+1])
            {
                swap=array[d];
                array[d]=array[d+1];
                array[d+1]=swap;
            }
        }
    }
    printf("sorted list in ascending order");
    for(c=0;c<n;c++)
        printf("%d",array[c]);

}
