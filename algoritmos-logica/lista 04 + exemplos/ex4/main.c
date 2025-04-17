#include <stdio.h>
// exiba os primeiros 12 números da sequência: 4, 8, 12, 16,
int main(void) {


    for(int i = 4, cont = 1; cont<=12; i+=4, cont++){
        printf("%d .termo - %d \n", cont, i);
    }
}
// int num=4;
// for (int i = 1; i<=12; i++{
//      printf("%d\n", n);
//      n+=4;
// }