#include <stdio.h>
#include <cmath>

using namespace std;

// Pointer variable declaration: "int *p" means integer pointer
// (store the memory address the size of an int).

// Pointer varaible assignment: "*p = &val" means assign the
// memory address of (&) val to the pointer variable p.

// Value stored at pointer: "*p" means get the value stored at
// p; this is the dereferencing operator (*) syntax.

void update(int *a,int *b) {
	int valA, valB;
	valA = *a;
	valB = *b;
	
    *a = valA + valB;
    *b = abs(valA - valB);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
