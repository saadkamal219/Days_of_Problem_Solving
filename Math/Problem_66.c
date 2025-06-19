/*
Plus one

1. Start from last, add one.
2. Allocate one extended slot for result array and put 1 at start and others are 0

*/

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for(int i = digitsSize - 1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }

    int* otherCase = malloc(sizeof(int) * (digitsSize + 1));
    otherCase[0] = 1;

    for(int i = 1; i <= digitsSize; i++){
        otherCase[i] = 0;
    }

    *returnSize = digitsSize + 1;

    return otherCase;

}