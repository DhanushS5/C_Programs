 #include <stdio.h>
 struct BankAcc
 {
    int accNo;
    char name[50];
    float balance;
 };
 int main()
 {
    struct BankAcc a;
    float amount;
    int choice;
    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", a.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);
    do
    {
        printf("\n----- BANK MENU -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                a.balance += amount;
                printf("Deposit Successful.\n");
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= a.balance) {
                    a.balance -= amount;
		     printf("Withdrawal Successful.\n");
                } else {
                    printf("Insufficient Balance.\n");
                }
                break;
            case 3:
                printf("\nAccount Number : %d\n", a.accNo);
                printf("Account Holder : %s\n", a.name);
                printf("Current Balance: %.2f\n", a.balance);
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
 }
