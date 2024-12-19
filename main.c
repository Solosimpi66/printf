#include "libftprintf.h"

int main() {
    // Tests avec différents types et formats
    int num = 42;
   unsigned int u_num = 12345;
    const char *str = "Hello, world!";
    void *ptr = (void *)0x1234abcd;

    // Test d'affichage pour un caractère
    ft_printf("Char test: %c\n", 'A');

    // Test d'affichage pour des entiers
    ft_printf("Integer test (decimal): %d\n", num);
    ft_printf("Integer test (signed): %i\n", num);

    // Test d'affichage pour des entiers non signés
    ft_printf("Unsigned int test: %u\n", u_num);

    // Test d'affichage pour des valeurs hexadécimales
    ft_printf("Hexadecimal test (lowercase): %x\n", u_num);
    ft_printf("Hexadecimal test (uppercase): %X\n", u_num);

    // Test d'affichage pour un pointeur
    ft_printf("Pointer test: %p\n", ptr);

    // Test d'affichage pour une chaîne
    ft_printf("String test: %s\n", str);

    // Test d'affichage du caractère '%' lui-même
    ft_printf("Percent sign test: %%\n");

    // Test d'affichage avec plusieurs formats dans une seule ligne
 //   	

    return 0;
}
