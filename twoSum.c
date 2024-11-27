#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    
    for (int i=0; i < numsSize; i++){
        for (int j= i + 1; j< numsSize; j++){
            if (nums[i] + nums[j] == target){
                int* indices = malloc(sizeof(int) * 2);

                indices[0] = i;
                indices[1]= j;

                return indices;
            }
        }
    }
    return 0;
}

int main() {
  //Só um teste:
  int nums[7] = {0,2,5,9,7,1,3};

  int* indices = twoSum(nums, 7, 4);

  if (!indices) {
    printf("Nenhum índice foi encontrado.\n");
    exit(1);
  }

  printf("Os índices são: ");
  int i;
  for (i = 0; i < 2; i++){
    printf("%i ", indices[i]);
  }
  printf("\n");
  
  free(indices);
}