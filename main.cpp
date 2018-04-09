#include <iostream>
#include <unordered_set>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <vector>
#include "heapSort.h"
#include "quickSort.h"
#include "shellSort.h"
#include "radixSort.h"

heapSort heap("HeapSort");
quickSort quick("QuickSort");
radixSort radix("RadixSort");
shellSort shell("ShellSort");

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
    std::vector<int> list;

    for (int size = 2097152; size >= 32 ; size/=2) {
        heap.sort(randomList(size), size);
        heap.time("90P");
    }

    std::cout << std::endl;
    for (int size = 2097152; size >= 32 ; size/=2) {
        quick.sort(randomList(size), size);
        quick.time("90P");
    }
    std::cout << std::endl;
    for (int size = 2097152; size >= 32 ; size/=2) {
        radix.sort(randomList(size), size);
        radix.time("90P");
    }
    std::cout << std::endl;
    for (int size = 2097152; size >= 32 ; size/=2) {
        shell.sort(randomList(size), size);
        shell.time("90P");
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int size = 2097152; size >= 32 ; size/=2) {
        heap.sort(returnAlmostSameValueVector(size), size);
        heap.time("rand");
    }
    std::cout << std::endl;
    for (int size = 2097152; size >= 32 ; size/=2) {
        quick.sort(returnAlmostSameValueVector(size), size);
        quick.time("rand");
    }
    std::cout << std::endl;
    for (int size = 2097152; size >= 32 ; size/=2) {
        radix.sort(returnAlmostSameValueVector(size), size);
        radix.time("rand");
    }
    std::cout << std::endl;
    for (int size = 2097152; size >= 32 ; size/=2) {
        shell.sort(returnAlmostSameValueVector(size), size);
        shell.time("rand");
    }
    std::cout << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}