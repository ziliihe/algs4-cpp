#include "algs.hpp"


int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }

    int remainder = num1 % num2;
    return gcd(num2, remainder);
}

int binary_search(vector<int> sortedArray, int target) {
    int leftIndex  = 0;
    int rightIndex = sortedArray.size() - 1; 

    while (leftIndex <= rightIndex) {
        int midIndex = (leftIndex + rightIndex) / 2;
        if ( sortedArray[midIndex] == target) {
            return midIndex;
        } else if ( sortedArray[midIndex] < target) {
            leftIndex = midIndex + 1;
        } else {
            rightIndex = midIndex - 1;
        }
    }

    return -1;
}