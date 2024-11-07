#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5


int a[SIZE] = {12, 9, 14, 5, 1};


void bubble_sort() {
    int temp;
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (a[j] > a[j + 1]) {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {

    srand(time(NULL));


    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
    }


    printf("Array before sorting: ");
    for (int i = 0; i < SIZE; i++) {
        if (i == SIZE - 1)
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }
    printf("\n");


    bubble_sort();


    printf("Array after sorting: ");
    for (int i = 0; i < SIZE; i++) {
        if (i == SIZE - 1)
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }
    printf("\n");

    return 0;
}
