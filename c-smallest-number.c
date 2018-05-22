#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positivezahl=30000;

    for (int i=1;i<=30000;i++){
        if (i%1==0 &&
            i%2==0 &&
            i%3==0 &&
            i%4==0 &&
            i%5==0 &&
            i%6==0 &&
            i%7==0 &&
            i%8==0 &&
            i%9==0 &&
            i%10==0)
            {
                if (i<positivezahl){
                positivezahl = i;
                }
            }
        }
    printf("%i\n", positivezahl);
    return 0;

}