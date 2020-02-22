#include "algo.h"
#include <algorithm>


/* Functie pentru a repara heapul */
/* n este dimensiunea heapului, i este noul nod root*/
void repairHeap(std::vector<int>& input, int n, int i) {
    int max = i; // cel mai mare numar va deveni root

    // indexul din stanga este 2*i + 1, din reprezentarea vectoriala a heapului
    int l = 2 * i + 1;
    int r = 2 * i + 2; // indexul din dreapta este 2*i + 2

    // Copil din dreapta > root
    if (r < n && input[r] > input[max]) {
        max = r;
    }

    // Copil din stanga > root
    if (l < n && input[l] > input[max]) {
        max = l;
    }

    // Daca maximul nu este radacina realizam swapul si reparam recursiv heapul
    if (max != i) {
        std::swap(input[i], input[max]);
        repairHeap(input, n, max);
    }
}

void heapSort(std::vector<int>& input, int n) {
    // Construim heapul
    for (int i = n / 2 - 1; i >= 0; i--) {
        repairHeap(input, n, i);
    }

    // Extragem pe rand cate un element din heapul format
    for (int i = n - 1; i >= 0; i--) {
        // Noua radacina din heap este pusa la final
        std::swap(input[0], input[i]);
        // Reparam heapul
        repairHeap(input, i, 0);
    }
}


void sort(std::vector<int>& input, const bool reverse) {

    heapSort(input, input.size());

    if (reverse) {
        std::reverse(input.begin(), input.end());
    }

}