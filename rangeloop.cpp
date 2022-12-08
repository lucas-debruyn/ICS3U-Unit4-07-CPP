// Copyright (c) 2021 Lucas DeBruyn All rights reserved

// Created by: Lucas DeBruyn
// Created on: September 2021
// This program lists every number from 1000 to 2000

#include <iostream>

int main() {
    // This function lists every number from 1000 to 2000

    int counter = 1000;

    // Process and Output

    for (counter = 1000; counter <= 2000; counter++) {
    ((counter % 5) == 4) ? std::cout << counter << "\n" :
    std::cout << counter << " ";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
