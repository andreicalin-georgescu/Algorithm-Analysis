#include "algo.h"
#include <algorithm>

/* QuickSort recursiv */

 /* Ultimul element este ales ca pivot; plasam pivotul in pozitia corespunzatoare si sortam 
    elementele mai mici la stanga si cele mai mari la dreapta */
int partition(std::vector<int>& input, int first, int last) {
  int pivot = input[last]; //pivot
  int i = (first - 1);

  for (int j = first; j <= last - 1; j++) {
    /* Elementul curent este mai mic sau egal cu pivotul se parcurge
    subvectorul de elemente mai mici ca sa pivotul si se realizeaza
    interschimbarea */
    if(input[j] <= pivot) {
      i++; 
      std::swap(input[i], input[j]);
    }
  }

  /* Se pune pivotul pe pozitia corespunzatoare */
  std::swap(input[i + 1], input[last]);
  return (i + 1);
}

 /* Functie recursiva pentru sortarea vectorului primit in input */
void quickSort(std::vector<int>& input, int first, int last) {
    if (first < last) {
      int partitionIndex = partition(input, first, last);

  /* Se sorteaza elementele inainte si dupa partitie */
      quickSort(input, first, partitionIndex - 1);
      quickSort(input, partitionIndex + 1, last);
    }
}

void sort(std::vector<int>& input, const bool reverse) {
  /* quickSort call */
  quickSort(input, 0, input.size() - 1);

  if (reverse) {
		std::reverse(input.begin(), input.end());
	}

}