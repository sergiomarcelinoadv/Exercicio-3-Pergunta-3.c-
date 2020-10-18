#include <stdio.h>
#include <string.h>
/*escreva uma funcao em c que recebe a referencia de duas strings e concatena
a segunda na primeira sem usar funcao strcat()*/

void meuConcatenador(char str_a[], char str_b[])
{
    int tamanhoA = strlen(str_a);
    
    for(int i = 0; str_b[i] != '\0'; i++){
    	str_a[tamanhoA] = str_b[i];
    	++tamanhoA;
	}
}
int main (void)
{
    char string_a[250];
    char string_b[250];
    puts(" -- DIGITE UMA PALAVRA -- ");
    gets(string_a);
    puts(" -- DIGITE UMA PALAVRA -- ");
    gets(string_b);
    meuConcatenador(string_a, string_b);
    puts(string_a);
    return 0;
}
