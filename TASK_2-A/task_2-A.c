/*

A.
Create a structure to specify data of customers in a bank. The data to be stored is: 
Account number, name and balance in account. Assume maximum of 10 customers in the bank.
a. Write a function to print the Account number and name of each customer with balance below Rs. 100.
b. If a customer requests for withdrawal or deposit, it is given in the form:
        Name, Account No., updated amount, amount withdrawn/deposited, code (1 for deposit, 0 for withdrawal)
        Also program to give a message "The balance is insufficient for the specified withdrawal."
        if transaction is not possible.
The program should be menu driven, functional and without code redundancy.

*/

// Task 1
#include <stdio.h>
#include <stdlib.h>

struct customer
{
    double account_number;
    char name[30];
    double balance;
};

struct customer customers[10];

char names[10] = {"Ajay","Atul","Atharv","Neha","Abhishek","Sakshi","Apeksha","Ashish","Rupali","Rupesh"};

double account_number[10] = {
    1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010};

double balance[10] = {
    77, 78, 45, 34, 98, 25, 15, 67, 58, 56};

for(int i = 0; i < 10; i++)
{
    customers[i].account_number = acc_num[0];
    customers[i].name = names[i];
    customers[i].balance = bal[i];
}

void print_acc_details()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Account Number = %f\nName = %s\nBalance = %f", customers[i].account_number, customers[i].name, customers[i].balance);
    }
}

double withdrawal()
{
    double acc_num, with;
    char name_[30];
    printf("\nEnter Account Number: ");
    scanf("%f", &acc_num);
    printf("\nEnter Name: ");
    scanf("%s", &name_);
    printf("\nEnter Amount to Withdraw: ");
    scanf("%f", &with);

    for(int i = 0; i < 10; i++)
    {
        if (customers[i].account_number == acc_num && customers[i].name == name_)
        {
            if (customers[i].balance <= with)
            {
                printf("\nYou don't have sufficient balance");
            }
            else
            {
                customers[i].balance -= with;
                return with;
            }
        }
    }
    printf("The Credentials entered are wrong");
    return 0;
}

void deposit()
{
    double acc_num, depo;
    char name_[30];
    printf("\nEnter Account Number: ");
    scanf("%f", &acc_num);
    printf("\nEnter Name: ");
    scanf("%s", &name_);
    printf("\nEnter Amount to Deposit: ");
    scanf("%f", &depo);

    for(int i = 0; i < 10; i++)
    {
        if(customers[i].account_number == acc_num && customers[i].name == name_)
        {
            customers[i].balance += depo;
            printf("\nRs. %f added to your account", depo);
        }
        else
        {
            printf("\nThe Credentials entered are wrong");
        }
    }
}

int main()
{

    printf("Welcome to Bank of India \n");
    int command;
    printf("--- Main Menu ---\n1] Get Customer List\n2] Withdrawal\n3] Deposit\n4]Exit\n>>> ");
    scanf("%d", &command);

    while(command == 1 || command == 2 || command == 3)
    {

        if(command == 1)
        {
            print_acc_details();
        }
        else if(command == 2)
        {
            double amt = withdrawal();
            if (amt != 0)
            {
                printf("\nYou have withdrawn Rs. %f", &amt);
            }
        }
        else if(command == 3)
        {
            deposit();
        }

        printf("\n\n--- Main Menu ---\n1] Get Customer List\n2] Withdrawal\n3] Deposit\n4]Exit\n>>> ");
        scanf("%d", &command);
    }

    return 0;
}
//coded by Abhishek Ikhar
