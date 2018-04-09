//
// Created by mateu on 08/04/2018.
//

#ifndef PAA_HEAPSORT_H
#define PAA_HEAPSORT_H


#include "sortAlgorithm.h"

class heapSort : public sortAlgorithm{
public:
    explicit heapSort(const std::string&);
    virtual void internal(int[], int, int);
};


#endif //PAA_HEAPSORT_H
