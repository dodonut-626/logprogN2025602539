#include <stdio.h>

int main() {
    int opcion,opcion_ingrediente;

    printf("Buena tarde sea usted bienvenido a Pizzeria Bella Napoli\n");
    printf("Que tipo de pizza desea?\n");
    printf("1. Vegetariana\n");
    printf("2. No vegetariana\n");
    printf("Ingrese el numero de su opcion: ");
    scanf("%d", &opcion);

        if (opcion == 1) {
            printf("\nIngredientes vegetarianos disponibles:\n");
            printf("1. Pimiento\n");
            printf("2. Tofu\n");
            printf("Elija un ingrediente adicional: ");
            scanf("%d", &opcion_ingrediente);

        if (opcion_ingrediente == 1) {
            printf("\nSu pizza vegetariana lleva:\n");
            printf("- Mozzarella\n");
            printf("- Tomate\n");
            printf("- Pimiento\n");
        } else
        if (opcion_ingrediente == 2) {
            printf("\nSu pizza vegetariana lleva:\n");
            printf("- Mozzarella\n");
            printf("- Tomate\n");
            printf("- Tofu\n");
        } else
         {
            printf("Opcion de ingrediente no existe.\n");
        }
    } else
        if (opcion == 2) {
            printf("\nIngredientes no vegetarianos disponibles:\n");
            printf("1. Peperoni\n");
            printf("2. Jamon\n");
            printf("3. Salmon\n");
            printf("Elija un ingrediente adicional: ");
            scanf("%d", &opcion_ingrediente);

        if (opcion_ingrediente == 1) {
            printf("\nSu pizza no vegetariana lleva:\n");
            printf("- Mozzarella\n");
            printf("- Tomate\n");
            printf("- Peperoni\n");
        } else
        if (opcion_ingrediente == 2) {
            printf("\nSu pizza no vegetariana lleva:\n");
            printf("- Mozzarella\n");
            printf("- Tomate\n");
            printf("- Jamon\n");
        } else
        if (opcion_ingrediente == 3) {
            printf("\nSu pizza no vegetariana lleva:\n");
            printf("- Mozzarella\n");
            printf("- Tomate\n");
            printf("- Salmon\n");
        } else
        {
            printf("Opcion de ingrediente no existen");
        }
        } else
        {
            printf("Opcion de pizza no existe,pida bien que se acaban las pipshas.\n");
    }
    return 0;
}
