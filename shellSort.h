//
// Created by mateu on 08/04/2018.
//

#ifndef PAA_SHELLSORT_H
#define PAA_SHELLSORT_H


#include "sortAlgorithm.h"

class shellSort : public sortAlgorithm{
public:
    shellSort(const std::string&);
    virtual void internal(int*, int, int);
};


#endif //PAA_SHELLSORT_H
