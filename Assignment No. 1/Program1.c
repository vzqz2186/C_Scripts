/*
     Name: Programming Assignment 1: Payroll calculation
   Author: Daniel Vazquez
     Date: September 20, 2017

Objective: Allow the user to enter payroll information and have your program
           calculate the next pay and taxes withheld.
*/

#include <stdio.h>

/*Declaring functions*/
void payRate(void);
void hours(void);
void sstr(void);
void fitr(void);
void sitr(void);
void fip(void);
void payrollInfo(void);

/*
What do these functions mean?
sstr.- Social Security Tax Rate
fitr.- Federal Income Tax Rate
sitr.- State Income Tax Rate
fip.- Fee for Insurance Premiums
*/

/*Declaring Variables*/
float pay_rate;
float stInTax;
float hrs;
float soSec;
float fedInTax;
float iPremiums;
float grossPay;
float wsst;
float wfit;
float wsit;
float netPay;

/*main function*/
int main()
{
    printf("$$$ Payroll Calculator $$$\n\n");

    /*Getting Variables*/
    payRate();
    hours();
    sstr();
    fitr();
    sitr();
    fip();

    printf("\n\n$$$ Payroll Information $$$\n\n");

    /*Computing the payroll*/
    payrollInfo();
}

/* Functions*/

void payRate()
{
    /*Gets pay rate*/
    printf("Pay Rate: $");
    scanf("%f", &pay_rate);
}


void hours(void)
{
    /*Gets hours worked*/
    printf("Hours worked: ");
    scanf("%f", &hrs);
}

void sstr(void)
{
    /*Gets SS tax rate*/
    printf("Social Security tax rate: %%");
    scanf("%f", &soSec);
}

void fitr(void)
{
    /*Gets Federal Income tax rate*/
    printf("Federal Income Tax rate: %%");
    scanf("%f", &fedInTax);
}

void sitr(void)
{
    /*Gets state income tax rate*/
    printf("State Income Tax rate: %%");
    scanf("%f", &stInTax);
}

void fip(void)
{
    /*Gets insurance premiums*/
    printf("Additional fee for insurance premiums: $");
    scanf("%f", &iPremiums);
}

void payrollInfo()
{
    /*Calculates the payroll*/
    grossPay = pay_rate*hrs;
    wsst = grossPay*(soSec*0.01);
    wfit = grossPay*(fedInTax*0.01);
    wsit = grossPay*(stInTax*0.01);
    netPay = grossPay-wsst-wfit-wsit-iPremiums;
    printf("Gross pay: $%.2f\n", grossPay);
    printf("Withheld Social Security tax: $%.2f\n", wsst);
    printf("Withheld Federal Income tax: $%.2f\n", wfit);
    printf("Withheld State Income tax: $%.2f\n", wsit);
    printf("Withheld Insurance Premiums: $%.2f\n", iPremiums);
    printf("net pay for this period: $%.2f", netPay);
}
