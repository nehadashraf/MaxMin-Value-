#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10];
    int i=0,x,min,max;
    do
    {
    printf("please enter number in index %i:\n",i);
        scanf("%i",&x);
        arr[i]=x;
        i++;
    }
    while(i<10);
    i=0;
    printf("\nArray [ ");
    while(i<10)
    {
        printf("%i ",arr[i]);
        i++;
    }
    printf("]\n");
        min=arr[0];
        max=arr[0];
    for(int i=0; i<10; i++)
    {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("Max Value is : %i\nMin Value is : %i\n",max,min);
    return 0;
}
