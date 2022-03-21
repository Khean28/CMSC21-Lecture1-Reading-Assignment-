#include <stdio.h>

int main(void)
{
    int i; /***for interger values***/
    float x; /*** for floating point number or numbers with decimal points***/

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); /***sends the formatted string to a standard output using conversion specifications***/
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0; /***function that doesnt return any value and means exit of the program was successful***/
}
