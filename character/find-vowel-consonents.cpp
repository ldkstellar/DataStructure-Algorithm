#include <iostream>

//example
int main(int argc, char const *argv[])
{
    char A[] = "how are you";

    int i= 0, vcount = 0,ccowt = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i]== 'e')// more and nmore
           vcount++;
            /* code */
        
        else if(A[i] == 'A' || A[i] =='E') // more and more
            vcount++;
        else if (A[i]>=65 && A[i]<=90 || A[i]>=97 &&A[i]<122)
            ccowt++;

    }

    std::cout<<vcount<<" "<<ccowt;
    


    return 0;
}
