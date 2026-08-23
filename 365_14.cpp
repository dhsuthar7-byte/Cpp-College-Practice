#include<stdio.h>
int main()
{
    float grosssalary,allowances,deductions,netsalary;
    printf("Enter gross salary: ");
    scanf("%f",&grosssalary);
    if (grosssalary>10000) 
    {
        allowances=0.10*grosssalary;
        deductions=0.03*grosssalary;
    }
    else if (grosssalary>5000) 
    {
        allowances=0.07*grosssalary;
        deductions=0.02*grosssalary;
    }
    else 
    {
        allowances=0;
        deductions=0;
    }
    netsalary=grosssalary+allowances-deductions;
    printf("Allowances = %.2f\n",allowances);
    printf("Deductions = %.2f\n",deductions);
    printf("Net Salary = %.2f\n",netsalary);
    return 0;
}