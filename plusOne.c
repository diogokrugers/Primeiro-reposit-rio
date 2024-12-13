// Note: The returned array must be malloced, assume caller calls free().
#include <stdio.h>
#include<stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {

    int i;
    int *resultado = (int*) malloc(sizeof(int) * digitsSize);

    for( i = digitsSize-1; i>=0; i-- ){
        if(digits[i] < 9){
            digits[i]++;
            break;
        }
        else{
            digits[i] = 0;
        }
    }

    *returnSize = digitsSize;

    if(digits[0] == 0){

        resultado = (int*) realloc(resultado, sizeof(int) * digitsSize + sizeof(int));
        (*returnSize)++;
        resultado[0] = 1;

        for(int j = 1; j < *returnSize; j++){
        resultado[j] = digits[j-1];
        }
    return resultado;
    }

        for(int z = 0; z < *returnSize; z++){
            resultado[z] = digits[z];
        
        }
        return resultado;
}

int main(){

    int digits[3] = {9, 2, 9};
    int digitsSize = 3;
    int returnSize;

    int *resultado = plusOne(digits, digitsSize, &returnSize);

    for(int i = 0; i < returnSize; i++){
        printf("%d\n", resultado[i]);
    }
    free(resultado);
    return 0;

}