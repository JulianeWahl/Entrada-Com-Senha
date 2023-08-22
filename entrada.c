/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float senha;
    printf("Digite a senha correta: ");
    scanf("%f", &senha);
    while (senha != 30423){
        printf("Sua senha está incorreta. \n Digite sua senha novamente: ");
        scanf("%f", &senha);
    }
    printf("Entrada concedida!");
    
    

    return 0;
}

