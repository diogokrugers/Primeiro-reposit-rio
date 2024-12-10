/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int i;
    int maior = 0;
    *returnSize = candiesSize;

    for( i = 0; i < candiesSize; i++ ){
        if(candies[i] > maior){
            maior = candies[i];
            }
    }

bool* result = malloc(sizeof(bool) * candiesSize);
    if (!result) {
        return NULL;
    }

    for (i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= maior);
    }

    return result;
}

/*
Por mais que esse problema precise do C99 por causa do bool, 
eu achei ele bem legal e intuitivo
*/