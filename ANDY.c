<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
int main()
{
    double L= 7;
    double pi= 3.1416;
    double pt=(23.0 / 5.0) * L + (pi * L / 2.0);
    printf("Perimetro total=%.4f\n",pt);
    double a1= L * L;
    double a2= (1.0 / 5.0) * L * (3.0 / 5.0) * L;
    double a3= (1.0 / 5.0) * L * (1.0 / 5.0) * L;
    double a4c= (pi * (L / 2.0) * (L / 2.0)) / 2.0;
    double at= a1 + 2.0 * a2 + 2.0 * a3 + a4c;
    printf("Area total=%.4f\n"at);

    return 0;
}
=======
#include <stdio.h>
#include <math.h>
int main()
{
    double L= 7;
    double pi= 3.1416;
    double pt=(23.0 / 5.0) * L + (pi * L / 2.0);
    printf("Perimetro total=%.4f\n",pt);
    double a1= L * L;
    double a2= (1.0 / 5.0) * L * (3.0 / 5.0) * L;
    double a3= (1.0 / 5.0) * L * (1.0 / 5.0) * L;
    double a4c= (pi * (L / 2.0) * (L / 2.0)) / 2.0;
    double at= a1 + 2.0 * a2 + 2.0 * a3 + a4c;
    printf("Area total=%.4f\n"at);

    return 0;
}
>>>>>>> 0d66663 (tareas commit)
