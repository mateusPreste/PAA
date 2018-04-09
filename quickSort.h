//
// Created by mateu on 08/04/2018.
//

#ifndef PAA_QUICKSORT_H
#define PAA_QUICKSORT_H


#include "sortAlgorithm.h"

class quickSort : public sortAlgorithm{
public:
    quickSort(const std::string&);
    virtual void internal(int[], int, int);
};


#endif //PAA_QUICKSORT_H
