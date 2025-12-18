#include <iostream>

int main(int argc, char const *argv[])
{
    char array[] = " How  ar e you";
    int i ,word =0;
for (size_t i = 0;  array[i]!='\0'; i++)
{
    if (array[i] == ' ' && array[i-1] !=' ')//띄어쓰기 나타나면 단어 출몰 그리고 앞에 띄어쓰기 없어야 한다.
    {
    
        word+=1;
        
    }

}
    printf("%d",word+1);

    return 0;
}
