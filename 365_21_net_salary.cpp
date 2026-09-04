#include <stdio.h>

int main() 
{
    float grossSalary, allowance, deduction, netSalary;

    printf("Enter gross salary: ");
    scanf("%f", &grossSalary);

    allowance = 0.10 * grossSalary;
    deduction = 0.03 * grossSalary;

    netSalary = grossSalary + allowance - deduction;

    printf("Allowance: %.2f\n", allowance);
    printf("Deduction: %.2f\n", deduction);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}