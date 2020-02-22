ID: Georgescu Andrei Calin, 324 CA

Continut:
* **algo.h** 
   * Prototipul functiei generice sort().

* **algo1.cpp**
   * Implementarea algoritmului QuickSort, conform surselor consultate.

* **algo2.cpp**
   * Implementarea algoritmului MergeSort, conform prezentarii din cadrul seminarului.

* **algo3.cpp**
   * Implementarea algoritmului HeapSort, conform surselor consultate.

* **tester.cpp**
   * Algoritm de testare pentru solutiile alese (extras din folderul dat ca exemplu in scheletul temei).

* **Makefile**
  * Acesta contine regulile:

    * **build_in**
      - compileaza executabilul care va genera testele de intrare
 
    * **generate_in**
      - ruleaza executabilul care va genera testele de intrare

    * **build_out**
      - compileaza executabilul care va genera testele de iesire
 
    * **generate_out**
      - ruleaza executabilul care va genera testele de iesire

    * **build_algo1**
      - compileaza executabilul care va testa primul algoritm ales
      pe testele din input

    * **build_algo2**
      - compileaza executabilul care va testa cel de-al doilea algoritm ales
      pe testele din input

    * **build_algo3**
      - compileaza executabilul care va testa cel de-al treilea algoritm ales
      pe testele din input

    * **run**
      - ruleaza testerul pe toate testele care corespund specificatiei
      originale

    * **clean**
      - sterge fisierele obiect generate, executabilul tester si generatoarele de teste

* Folder **'in'** cu testele de intrare  (2 teste)
    * Fiecare test este numit "**testID.in**", unde ID reprezintă numărul
    testului (e.g. test0.in)
    * Fiecare test este structurat în felul următor:
      * Pe prima linie, N (int - numărul de elemente din secvență), N <= 10^6
      * N elemente (numere întregi - reprezentabile pe 32 biti)
    *Descrierea testelor:
	- primele doua teste contin date sortate complet;
	- urmatoarele doua contin date partial sortate;
	- urmatoarele doua contin date sortate descrescator;
	- ultimele doua contin date complet aleatorii.
      
* Folder **'out'** cu testele de ieșire
    * Fiecare test este numit "**testID.out**", unde ID reprezintă numărul
    testului (e.g. test0.out) 
    * Fiecare test conține secvența de elemente din testul de intrare 
    corespunzător sortată ascendent.

* Folder **'other_tests'** 
    * Contine doua teste suplimentare cu vectori cu un numar mare de elemente (N > 10^5) dar care respecta formatul testelor din folderul in
* Surse consultate pentru implementari:
	- [1] Edosomwan Joseph, "Sorting Algorithm Analysis and Comparison Performance",
	    Lambert Publishing, 19 Jul 2012;
	- [2] Laboratoarele de Structuri de Date din anul universitar precedent.

