#include <stdio.h>
#include <stdint.h>

void print_buffer(uint16_t *buffer, uint16_t size) {
    printf("--- Iniciando Impressão do Buffer ---\n");
    for (int i = 0; i < size; i++) {
        // Aritmética: (buffer + i) desloca o ponteiro. 
        // O valor apontado é obtido com o asterisco (*)
        printf("Índice: %d | Endereço: %p | Valor: %u\n", i, (void*)(buffer + i), *(buffer + i));
    }
}

int main() {
    uint16_t sensor_readings[5] = {2, 4, 6, 8, 10};

    // Chamada da função passando o array (endereço base) e seu tamanho
    print_buffer(sensor_readings, 5);

    return 0;
}