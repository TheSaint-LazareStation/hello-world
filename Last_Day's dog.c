#include <stdio.h>

int printBlank (int a) {        //打印a个空格，不回车
    int j=0;

    for (;j<a;j++) {
        printf(" ");
    }
    return 0;
}

int printPound (int b) {        //打印b个#，不回车
    int k=0;

    for (;k<b;k++) {
        printf("#");
    }
    return 0;
}

int printTriangle (int n) {
    int i=0;

    for (i=n;i>0;i--) {
        printBlank (n-i) ;        //打印＃前的空格
        printPound (2*i-1) ;      //打印#
        printBlank (n-i) ;        //打印#后的空格
        printf ("\n") ;      //打印回车
    }
    return 0;
}

int main () {
    int n=0;

    while (scanf ("%d",&n) != EOF) {
        if (n>=0) {
            printTriangle (n) ;
        }
        else printf ("INPUT A WRONG NUMBER.") ;
    }
    return 0;
}