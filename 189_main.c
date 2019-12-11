#include <stdio.h>

void rotate(int* nums, int numsSize, int k){
  for(int i = 1; i <= k; i++){
    int j;
    int lastElement;
    //Save last element of array
    lastElement = nums[numsSize - 1];
    for(j=numsSize-1; j>0; j--){
      //Move one element to right
       nums[j] = nums[j - 1];
    }
    //Copy last element to the first position
    nums[0] = lastElement;
  }
}

int main(int argc, char const *argv[]) {
  //Set test array
  int i;
  int test[] = {1,2,3,4,5,6,7};
  //Call rotate function
  rotate(test,7,3);
  //Show Array
  for (i = 0; i < (sizeof(test)/sizeof(test[0])); i++ ) {
    printf("Element[%d] = %d\n", i, test[i] );
  }
  return 0;
}