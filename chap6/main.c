#include <stdio.h>


struct Record {
    int id;
    float score;
    char grade;
};


void demonstrate_typecasting_and_precedence() {
    int a = 10, b = 3;
    float f = 5.7;
    char c = 'G';


    printf("Integer division without casting (a / b): %d\n", a / b);
    printf("Floating-point division with casting (a / (float)b): %.2f\n", a / (float)b);


    printf("Without parentheses: a + b * f = %.2f\n", a + b * f);
    printf("With parentheses: (a + b) * f = %.2f\n", (a + b) * f);


    printf("Character '%c' as integer: %d\n", c, (int)c);
}


void sort_records(struct Record records[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (records[j].id > records[j + 1].id) {

                struct Record temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }
}


void print_records(struct Record records[], int n) {
    printf("ID\tScore\tGrade\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%c\n", records[i].id, records[i].score, records[i].grade);
    }
}

int main() {

    printf("Typecasting and Precedence Demo:\n");
    demonstrate_typecasting_and_precedence();


    struct Record records[] = {
        {3, 88.5, 'B'},
        {1, 91.2, 'A'},
        {4, 76.8, 'C'},
        {2, 85.3, 'B'}
    };
    int n = sizeof(records) / sizeof(records[0]);

    printf("\nRecords Before Sorting:\n");
    print_records(records, n);


    sort_records(records, n);

    printf("\nRecords After Sorting by ID:\n");
    print_records(records, n);

    return 0;
}
