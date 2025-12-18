#include <iostream>

char * reverseCharacter(char* str,int size){
    int length = size;
    char* reverse_array = new char [length];
    
    int cnt = 0;

    for (int i = length; i >= 0; i--)
    {
        if (str[i] =='\0')
            continue;
        reverse_array[cnt] = str[i];
        cnt++;
        
        
    }
        
    printf("Value is ");
    
    
        printf("%s",reverse_array);
   
    return reverse_array;
}





int main(int argc, char const *argv[])
{
    char str[] = "I hate python" ;
    char *result = nullptr;
    result = reverseCharacter(str,14);
    delete [] result;



    return 0;
}
