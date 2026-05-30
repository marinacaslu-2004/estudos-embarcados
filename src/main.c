#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void print_buffer(uint16_t *buffer, uint16_t size){

    for(int i = 0; i < size; i++){

        printf("O pointer offset: %u\n", *(buffer + i));

    }


}

int main(){

    uint16_t sensor_readings[5] = {2, 4, 6, 8, 10};

    print_buffer(sensor_readings, 5);


    return 0; 
}