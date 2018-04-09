//
// Created by mateu on 08/04/2018.
//

#include "quickSort.h"

void quickSort::internal(int values[], int began, int end) {
    int i, j, pivo, aux;
    i = began;
    j = end-1;
    pivo = values[(began + end) / 2];
    while(i <= j)
    {
        while(values[i] < pivo && i < end)
        {
            i++;
        }
        while(values[j] > pivo && j > began)
        {
            j--;
        }
        if(i <= j)
        {
            aux = values[i];
            values[i] = values[j];
            values[j] = aux;
            i++;
            j--;
        }
    }
    if(j > began)
        internal(values, began, j+1);
    if(i < end)
        internal(values, i, end);
}

quickSort::quickSort(const std::string & name):sortAlgorithm(name) {

}
