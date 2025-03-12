#include <stdio.h>

int main() {
    float L = 2.0;

    float btg=(3.0/2.0)*L;
    float atg= 2.0*L;
    float artg= 0.5*btg*atg;
    float ptg= btg + 2.0*atg;
    float ar1=L*L;
    float ar3=L*(0.25*L);
    float ar2=0.5*L*L;
    float at=artg+ar1+ar3+ar2;
    float pt=ptg+(2.0*L)+(1.76*L)+(0.50*L)-0.26;
    printf("At:%.2f\n",at);
    printf("Pt:%.2f\n",pt);

    return 0;
}
