//
// Created by mateu on 08/04/2018.
//

#include <cstdio>
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision
#include "sortAlgorithm.h"

void sortAlgorithm::time(const std::string& desc) {
    std::cout << std::setprecision(6) << std::fixed << (double)(tEnd - tStart)/CLOCKS_PER_SEC << std::endl;
}

void sortAlgorithm::sort(int* values, int size) {
    this->size = size;
    tStart = clock();
    internal(values, 0, size);
    tEnd = clock();
    delete [] values;
}

sortAlgorithm::sortAlgorithm(const std::string& name) {
    algorithmName = name;
}
