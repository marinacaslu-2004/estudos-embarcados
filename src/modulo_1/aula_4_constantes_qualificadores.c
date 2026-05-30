#include <stdio.h>
#include <stdint.h>


int main() {
/**
 * **PONTEIRO CONSTANTE**
 * Nota: O ponteiro pertencerá sempre aquela "gaveta" e o valor pode ser sempre alterado, pois não travamos essa edição
 */
    uint8_t sensor_value = 10; // A caixa com o dado 10
    
    // O papel (ponteiro) agora pode ir para qualquer caixa
    const uint8_t * ptr = &sensor_value; 

    printf("Valor original: %u\n", *ptr); // Vai mostrar 10

    // Vamos mudar o valor lá dentro da caixa usando o papel (ponteiro) e isso gerará um erro no compilador
    /**   
     * *ptr = 99; 
    */
    
    printf("Novo valor: %u\n", *ptr); // Vai mostrar 99!
    printf("Valor da variavel original: %u\n", sensor_value); // Também mudou para 99!
 
/**
 * **PONTEIRO CONSTANTE**
 * Nota: O ponteiro pertencerá sempre aquela "gaveta" e o valor pode ser sempre alterado, pois não travamos essa edição
 
    uint8_t sensor_value = 10; // A caixa com o dado 10
    
    // O papel (ponteiro) agora aponta para a caixa
    uint8_t * const ptr = &sensor_value; 

    printf("Valor original: %u\n", *ptr); // Vai mostrar 10

    // Vamos mudar o valor lá dentro da caixa usando o papel (ponteiro)
    *ptr = 99; 

    printf("Novo valor: %u\n", *ptr); // Vai mostrar 99!
    printf("Valor da variavel original: %u\n", sensor_value); // Também mudou para 99!
    
 */
    return 0;
}