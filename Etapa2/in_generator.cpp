#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

/* Program folosit pentru generarea testelor de intrare */

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
{
    
    srand((unsigned)time(NULL));
    int a = 200000;
    int myVector[a];

 // Pentru testele 0 si 1

    /*for(int i = 0; i < a; i++) {
        myVector[i] = rand()%1000;
    }
    qsort(myVector ,a ,sizeof(int), compare);
    */

// Pentru testele 2 si 3

    /*for (int i = 0; i < 260; i++) {
        myVector[i] = rand()%1000;
    }

    qsort(myVector,260 ,sizeof(int), compare);

    for(int i = 260; i < a; i++) {
        myVector[i] = rand()%1000;
    }*/

// Pentru testele 4 si 5
    /*for(int i = 0; i < a; i++) {
        myVector[i] = rand()%10000;
    }
    qsort(myVector ,a ,sizeof(int), compare);

    cout << a << endl;
    for (int i = a - 1; i >= 0; i--){
            cout << myVector[i] << " ";
    }*/

// Pentru testele 6 si 7 si other_tests
// Pentru a genera fisierele din other_tests se va creste numarul de elemente din vector
    for (int i = 0; i < a; i++) {
        myVector[i] = rand()%10000;
    }

    cout<<a<<endl;
    for (int i = 0; i < a; i++){
            cout << myVector[i] << " ";
    }

    cout <<endl;
    return 0;
}

