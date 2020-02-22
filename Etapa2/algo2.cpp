#include "algo.h"
#include <algorithm>

/* MergeSort */

// Primul subvector va fi input[first..middle]. Cel de-al doilea va fi input[middle+1...last] 
void merge(std::vector<int>& input, int first, int middle, int last) {
    int i, j, k;
    int size1 = middle - first + 1;
    int size2 = last - middle;
    // Subvectori temporari
    int First[size1], Second[size2];

    // Copiem datele din vectorul principal in cei doi subvectori
    for (i = 0; i < size1; i++) {
        First[i] = input[first + i];
    }
    for (j = 0; j < size2; j++) {
        Second[j] = input[middle + 1 + j];
    }

    // Imbinam cei doi vectori in input[first...last]
    i = 0; //Indexul primului subvector
    j = 0; //Indexul celui de-al doilea subvector
    k = first; //Indexul de pornire al vectorului imbinat

    while (i < size1 && j < size2) {

        if (First[i] <= Second[j]) {
            input[k] = First[i];
            i++;
        } else {
            input[k] = Second[j];
            j++;
        }
        k++;
    }

    //Copiem restul elementelor ramase din subvectori
    while (i < size1) {
        input[k] = First[i];
        i++;
        k++;
    }

    while (j < size2) {
        input[k] = Second[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& input, int first, int last) {
    
    if (first < last) {
        // Pentru a se evita overflow la vectori mari
        int middle = first + (last - first) / 2;
        // Sortam prima jumatate
        mergeSort(input, first, middle);
        
        // Sortam cea de-a doua jumatate
        mergeSort(input, middle + 1, last);

        merge(input, first, middle, last);
    }
}

void sort(std::vector<int>& input, const bool reverse) {
    mergeSort(input, 0, input.size() - 1);

    if (reverse) {
        std::reverse(input.begin(), input.end());
    }

}


