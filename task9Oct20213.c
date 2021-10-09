#include <stdio.h>
int main()
{
    const int size= 10;
    int arr[size] = {1,43,43,2,3,54,7,767,0,10};
    for(int i = 0; i < size; i ++)
    {
     if(arr[i] > 0 && arr[i] < 10)
     arr[i] = 1;
     else arr[i] = 0;
    
    }
    for(int j = 0 ; j < size; j++)
    printf("%d\n",arr[j]);
}