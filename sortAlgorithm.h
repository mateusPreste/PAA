//
// Created by mateu on 08/04/2018.
//

#ifndef PAA_SORTALGORITHM_H
#define PAA_SORTALGORITHM_H


#include <ctime>
#include <string>

class sortAlgorithm {
protected:
    clock_t tStart;
    clock_t tEnd;
    std::string algorithmName;
    int size;
public:
    explicit sortAlgorithm(const std::string&);
    void time(const std::string&);
    virtual void internal(int*, int, int) = 0;
    void sort(int*, int);
};


#endif //PAA_SORTALGORITHM_H
