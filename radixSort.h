//
// Created by mateu on 08/04/2018.
//

#ifndef PAA_RADIXSORT_H
#define PAA_RADIXSORT_H


#include "sortAlgorithm.h"

class radixSort : public sortAlgorithm{
public:
    radixSort(const std::string&);
    virtual void internal(int[], int, int);
};


#endif //PAA_RADIXSORT_H
