#include <stdio.h>

int main() {
    int choice;
    float amount, result;

    const float USD_TO_KES = 160.50;
    const float KES_TO_USD = 1 / 160.50;
    const float EUR_TO_USD = 1.08;

    printf("===== MULTI-CURRENCY CONVERTER WITH ROBUST INPUT =====\n");

    do {
        // Display menu
        printf("\nSelect conversion type:\n");
        printf("1. USD to KES\n");
        printf("2. KES to USD\n");
        printf("3. EUR to USD\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number between 1 and 4.\n");
            // Clear invalid input
            int c; while ((c = getchar()) != '\n' && c != EOF);
            continue;  // restart loop
        }

        if (choice == 4) {
            printf("Goodbye!\n");
            break;
        }

        // Get amount with input validation
        printf("Enter amount: ");
        if (scanf("%f", &amount) != 1 || amount < 0) {
            printf("Invalid amount! Please enter a positive number.\n");
            int c; while ((c = getchar()) != '\n' && c != EOF);
            continue;  // restart loop
        }

        // Perform conversion
        switch(choice) {
            case 1:
                result = amount * USD_TO_KES;
                printf("USD %.2f = KES %.2f\n", amount, result);
                break;
            case 2:
                result = amount * KES_TO_USD;
                printf("KES %.2f = USD %.2f\n", amount, result);
                break;
            case 3:
                result = amount * EUR_TO_USD;
                printf("EUR %.2f = USD %.2f\n", amount, result);
                break;
            default:
                printf("Invalid choice! Please select 1, 2, 3, or 4.\n");
        }

    } while (1);

    return 0;
}