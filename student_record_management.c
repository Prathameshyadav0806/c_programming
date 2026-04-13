#include <stdio.h>

struct Student {
    char name[50];
	int rollNo;
	float marks1,marks2,marks3;
}Stu[5];

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("\nEnter details for student %d:\n", i);
        printf("Name: ");
        scanf("%s", Stu[i].name);
        printf("Roll No: ");
        scanf("%d", &Stu[i].rollNo);
        printf("Marks for Subject 1: ");
        scanf("%f", &Stu[i].marks1);
        printf("Marks for Subject 2: ");
        scanf("%f", &Stu[i].marks2);
        printf("Marks for Subject 3: ");
        scanf("%f", &Stu[i].marks3);
    }

    printf("\nStudent Records:\n\n");

    for (int i = 1; i <= 5; i++) {
        printf("Name: %s\n",Stu[i].name);
        printf("Roll No: %d\n",Stu[i].rollNo);
        printf("Marks: %.2f, %.2f, %.2f\n\n",Stu[i].marks1, Stu[i].marks2, Stu[i].marks3);
    }

    return 0;
}