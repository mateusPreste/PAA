#include <iostream>
#include <unordered_set>
#include <stdlib.h>
#include <cstdlib>
#include "heapSort.h"
#include "quickSort.h"
#include "shellSort.h"
#include "radixSort.h"

int* returnAlmostSameValueVector(int size){
    auto* vetor = new int[size];
    srand (( time( NULL ) ));
    int repeatedValue = 0;
    std::unordered_set<int> dif;
    while(dif.size() <= static_cast<int>(size*0.1)){
        dif.insert(rand() + 1);
    }

    auto it = dif.begin();

    for (int i = 0; i < size; ++i) {
        if(i % static_cast<int>(size/(size*0.1)) == 0){
            vetor[i] = *it;
            ++it;
        } else{
            vetor[i] = repeatedValue;
        }
    }

    return vetor;
}

int* randomList(int size){
    auto* vetor = new int[size];
    srand (( time( NULL ) ));
    int repeatedValue = 0;
    std::unordered_set<int> dif;
    while(dif.size() < size){
        dif.insert(rand());
    }

    auto it = dif.begin();

    for (int i = 0; i < size; ++i) {
        vetor[i] = *it;
        ++it;
    }

    return vetor;
}

int main() {
    heapSort heap;
    quickSort quick;
    radixSort radix;
    shellSort shell;

    int size = 300;
    auto* vetor = randomList(size);
        heap.heap(vetor, size);
        delete[] vetor;
    auto* vetor1 = returnAlmostSameValueVector(size);
        quick.quick(vetor1, size);
        delete[] vetor1;
    auto* vetor2 = returnAlmostSameValueVector(size);
       radix.radix(vetor2, size);
       delete[] vetor2;
    auto* vetor3 = returnAlmostSameValueVector(size);
       shell.shell(vetor3, size);
       delete[] vetor3;



    std::cout << "Heap Sort " << std::endl;
        heap.time();
    std::cout << "Quick Sort " << std::endl;
        quick.time();
    std::cout << "Radix Sort " << std::endl;
        radix.time();
    std::cout << "Shell Sort " << std::endl;
        shell.time();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}