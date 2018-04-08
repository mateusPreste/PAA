//
// Created by mateu on 08/04/2018.
//

#include "shellSort.h"

void shellSort::sort(int *vet, int size) {
    int i , j , value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = vet[i];
            j = i;
            while (j >= gap && value < vet[j - gap]) {
                vet[j] = vet [j - gap];
                j = j - gap;
            }
            vet [j] = value;
        }
    }
}

void shellSort::shell(int * vet, int size) {
    tStart = clock();
    sort(vet, size);
    tEnd = clock();
}
