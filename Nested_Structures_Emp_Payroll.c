#include<stdio.h>

struct salary {
        float basic;
        float hra;
        float da;
    } sal[3];
    struct Employee {
        char name[50];
        int id;
    } emp[3];
int main() {
    float grossSalary[3];

    for (int i = 1; i <= 3; i++) {
        printf("\nEnter details for employee %d:\n", i);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Basic Salary: ");
        scanf("%f", &sal[i].basic); 
        printf("HRA: ");
        scanf("%f", &sal[i].hra);
        printf("DA: ");
        scanf("%f", &sal[i].da);
        
    }

    printf("\nEmployee Records:\n\n");

    for (int i = 1; i <= 3; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);

        printf("Basic Salary: %.2f\n", sal[i].basic);
        printf("HRA: %.2f\n", sal[i].hra);
        printf("DA: %.2f\n", sal[i].da);

        grossSalary[i] = sal[i].basic + sal[i].hra + sal[i].da;
        printf("Gross Salary: %.2f\n\n", grossSalary[i]);
    }

    return 0;
}