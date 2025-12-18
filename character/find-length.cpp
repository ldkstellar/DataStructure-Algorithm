#include <iostream>

int find_length(char str[]){
    int result=0,i=0;

    while (str[i]!='\0')
    {  
        i++;

        if (str[i] == ' ')
            continue;
            
        result++;
    }
    return result;

}




int main(int argc, char const *argv[])
{
    char str [] = "my name is c++";
    printf("%d",find_length(str));


    return 0;
}
