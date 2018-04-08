//
// Created by mateu on 08/04/2018.
//

#ifndef PAA_SORTALGORITHM_H
#define PAA_SORTALGORITHM_H


#include <ctime>

class sortAlgorithm {
protected:
    clock_t tStart;
    clock_t tEnd;
public:
    virtual void time();
    void sort();
};


#endif //PAA_SORTALGORITHM_H
