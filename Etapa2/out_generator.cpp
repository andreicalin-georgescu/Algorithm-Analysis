#include <algorithm>
#include <stdio.h>
#include <iostream>

using namespace std;

/* Program folosit pentru generarea testelor de iesire */

int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

int main()
{   int a;

    scanf("%d", &a);

    int myVector[a];

    for (int i = 0; i < a; i++) {
       scanf("%d", &myVector[i]);
    }
    qsort(myVector, a, sizeof(int), compare);

    for (int i = 0; i < a; i++){
            cout << myVector[i] << " ";
    }
    cout <<endl;

    return 0;
}