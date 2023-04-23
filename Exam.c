#include <stdio.h>
#include <stdlib.h>

int min(int *array, int size)
{
    int min1 = array[0];
    int * min = &min1;
   

    for(int i = 0; i < size; i++)
    {
        if(array[i] < *(min))
        {
            *min = array[i];
        }

    }

    return *(min);
}

int max(int *array, int size)
{
    int max1 = 0;
    int * max = &max1;
    
    

    for(int i = 0; i < size; i++)
    {
        if(array[i] > *(max))
        {
            
            *max = array[i];
        }

    }

    
    return *(max);
}




int main()
{
    puts("Enter size");
    int num = 0;
    scanf("%i", &num);

    int * array = (int*)calloc(num, sizeof(int));
    for(int i = 0; i < num; i++)
    {
        scanf("%i", &array[i]);

    }

    printf("min -- >%i \n", min(array, num));
    printf("max -- >%i", max(array, num));


}