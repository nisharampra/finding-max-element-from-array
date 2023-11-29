//
//  main.cpp
//  finding max element from array
//
//  Created by Nisha Ramprasath on 31/10/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7;
    int max = A[0]; // Initialize max with the first element of the array
    int i;

    for(i = 1; i < 7; i++) { // Start from i = 1, as max is already set to A[0]
        if (A[i] > max) {
            max = A[i];
        }
    }

    std::cout << "max number is " << max << std::endl;
    return 0;
}

