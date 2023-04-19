#include <stdio.h>

//write a C program that reads a string a string from the user and chechks if it contain only alphabetic characters
void function_in_char(char * arr)
{
    int count = 5;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > '1' && arr[i] < '9')
        {
            count = 0;
        }
        
        if((arr[i] > 'A' && arr[i] < 'Z') || arr[i] > 'a' && arr[i] < 'z')
        {
            
           ++count;
        }
        else 
        {
            count--;
        }

    }

    if(count >= 5)
    {
        printf("menak tarer a");
    }
    else if(count < 5)
    {
        printf("sxal");
    }
    


}





int main()
{
    
    int size;
    size = 5;
    char arr[size];
    puts("Enter array simvol");
    for(int i = 0; i < size; i++)
    {   
        scanf("%c", &arr[i]);

    } 


    function_in_char(arr);
}