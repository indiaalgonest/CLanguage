/*
Take marks (0–100) as input.

If marks < 40 → print “Fail”
If marks ≥ 40 → print “Pass” and also give Grade:
90–100 → A
75–89 → B
60–74 → C
40–59 → D
*/
#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1;
    }

    if (marks < 40) {
        printf("Fail\n");
    } else {
        printf("Pass\n");
        if (marks >= 90) {
            printf("Grade: A\n");
        } else if (marks >= 75) {
            printf("Grade: B\n");
        } else if (marks >= 60) {
            printf("Grade: C\n");
        } else {
            printf("Grade: D\n");
        }
    }

    return 0;
}