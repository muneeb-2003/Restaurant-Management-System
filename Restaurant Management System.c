#include <stdio.h>

struct customer {
    char first_name[50];
    char last_name[50];
    int cnic_number;
    int contact_number;
}; 

void breakfast();
void dinner();
void lunch();
void G(float sum);

int main() {
    system("COLOR C0");
    int choice;
    struct customer c1;

    printf("\t\t\tWELCOME TO\t\t\t");
    printf("\n--------------------------------------------------------\n");
    printf("\t\t\tXYZ-RESTAURANT\t\t\t\n");
    
    printf("\nEnter your first name: ");
    gets(c1.first_name);
    
    printf("\nEnter your last name: ");
    gets(c1.last_name);
    
    printf("\nEnter your CNIC number: ");
    scanf("%d", &c1.cnic_number);
    
    printf("\nEnter your contact number: ");
    scanf("%d", &c1.contact_number);

    printf("\nPress:\n");
    printf("[1] To choose Breakfast\n");
    printf("[2] To choose Lunch\n");
    printf("[3] To choose Dinner\n");
    
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            breakfast();
            break;
        case 2:
            lunch();
            break;
        case 3:
            dinner();
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}

void breakfast() {
    char choice1;
    int choice2;
    int total = 0, quan = 0, quan1 = 0, quan2 = 0, quan3 = 0;
    float sum = 0.0;
    int n = 0;

    printf("\nYou have selected The Breakfast menu.\n");
    printf("Main: \n");
    printf("\n1. Half Fried Egg 100 Rs\n");
    printf("2. French Omelette 80 Rs\n");
    printf("3. Pancakes 150 Rs\n");
    printf("4. French Toast 120 Rs\n");
    printf("5. Eggs and Sausage 200 Rs\n");

    printf("\nBeverages: \n");
    printf("1. Coffee 100 Rs\n");
    printf("2. Milk Tea 50 Rs\n");
    printf("3. Green Tea 150 Rs\n");
    printf("4. Ice Coffee 200 Rs\n");

    do {
        printf("\nPlease enter 'M' to select Main or 'B' to select Beverages: ");
        scanf(" %c", &choice1);

        switch(choice1) {
            case 'M':
                printf("\nYou have selected the main breakfast course.\n");
                printf("\nPlease enter your choice:\n");
                printf("1. Half Fried Egg 100 Rs\n");
                printf("2. French Omelette 80 Rs\n");
                printf("3. Pancakes 150 Rs\n");
                printf("4. French Toast 120 Rs\n");
                printf("5. Eggs and Sausage 200 Rs\n");
                scanf("%d", &choice2);

                switch(choice2) {
                    case 1:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan);
                        total = 100 * quan;
                        break;
                    case 2:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan1);
                        total = 80 * quan1;
                        break;
                    case 3:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan2);
                        total = 150 * quan2;
                        break;
                    case 4:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan3);
                        total = 200 * quan3;
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }
                break;

            case 'B':
                printf("\nYou have selected beverages.\n");
                printf("\nPlease enter your choice: \n");
                printf("1. Coffee 100 Rs\n");
                printf("2. Milk Tea 50 Rs\n");
                printf("3. Green Tea 150 Rs\n");
                printf("4. Ice Coffee 200 Rs\n");
                scanf("%d", &choice2);

                switch(choice2) {
                    case 1:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan);
                        total = 100 * quan;
                        break;
                    case 2:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan1);
                        total = 50 * quan1;
                        break;
                    case 3:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan2);
                        total = 150 * quan2;
                        break;
                    case 4:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan3);
                        total = 200 * quan3;
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }
                break;

            default:
                printf("Invalid choice! Please enter 'M' or 'B'.\n");
                break;
        }

        sum += total;

        printf("\nWould you like to order more?\n");
        printf("Enter [1] if 'YES' or [2] if 'NO': ");
        scanf("%d", &n);
    } while(n == 1);

    G(sum);
}

void lunch() {
    char choice1;
    int choice2;
    int total = 0, quan = 0, quan1 = 0, quan2 = 0, quan3 = 0;
    float sum = 0.0;
    int n = 0;

    printf("\nYou have selected The Lunch menu.\n");
    printf("Main: \n");
    printf("1. Daal Chawal 100 Rs\n");
    printf("2. Curry and Gravies 120 Rs\n");
    printf("3. Chickpeas with Boiled Eggs 150 Rs\n");
    printf("4. Biryani 120 Rs\n");
    printf("5. Palao 110 Rs\n");

    printf("\nBeverages: \n");
    printf("1. Cold Drink 50 Rs\n");
    printf("2. Milk Tea 50 Rs\n");
    printf("3. Fruit Juice 150 Rs\n");
    printf("4. Faaloda 200 Rs\n");

    do {
        printf("\nPlease enter 'M' to select Main or 'B' to select Beverages: ");
        scanf(" %c", &choice1);

        switch(choice1) {
            case 'M':
                printf("\nYou have selected the main lunch course.\n");
                printf("\nPlease enter your choice:\n");
                printf("1. Daal Chawal 100 Rs\n");
                printf("2. Curry and Gravies 120 Rs\n");
                printf("3. Chickpeas with Boiled Eggs 150 Rs\n");
                printf("4. Biryani 120 Rs\n");
                printf("5. Palao 110 Rs\n");
                scanf("%d", &choice2);

                switch(choice2) {
                    case 1:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan);
                        total = 100 * quan;
                        break;
                    case 2:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan1);
                        total = 120 * quan1;
                        break;
                    case 3:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan2);
                        total = 150 * quan2;
                        break;
                    case 4:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan3);
                        total = 120 * quan3;
                        break;
                    case 5:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan3);
                        total = 110 * quan3;
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }
                break;

            case 'B':
                printf("\nYou have selected beverages.\n");
                printf("\nPlease enter your choice: \n");
                printf("1. Cold Drink 50 Rs\n");
                printf("2. Milk Tea 50 Rs\n");
                printf("3. Fruit Juice 150 Rs\n");
                printf("4. Faaloda 200 Rs\n");
                scanf("%d", &choice2);

                switch(choice2) {
                    case 1:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan);
                        total = 50 * quan;
                        break;
                    case 2:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan1);
                        total = 50 * quan1;
                        break;
                    case 3:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan2);
                        total = 150 * quan2;
                        break;
                    case 4:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan3);
                        total = 200 * quan3;
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }
                break;

            default:
                printf("Invalid choice! Please enter 'M' or 'B'.\n");
                break;
        }

        sum += total;

        printf("\nWould you like to order more?\n");
        printf("Enter [1] if 'YES' or [2] if 'NO': ");
        scanf("%d", &n);
    } while(n == 1);

    G(sum);
}

void dinner() {
    char choice1;
    int choice2;
    int total = 0, quan1 = 0, quan2 = 0, quan3 = 0, quan4 = 0;
    float sum = 0.0;
    int n = 0;

    printf("\nYou have selected The Dinner menu.\n");
    printf("Main Dishes: \n");
    printf("1. Pizza 500 Rs\n");
    printf("2. Fries 50 Rs\n");
    printf("3. Burger 150 Rs\n");
    printf("4. Shawarma 200 Rs\n");

    printf("\nDesserts: \n");
    printf("1. Ice Cream 100 Rs\n");
    printf("2. Cake 200 Rs\n");
    printf("3. Fruit Salad 150 Rs\n");
    
    do {
        printf("\nPlease enter 'M' to select Main or 'D' to select Dessert: ");
        scanf(" %c", &choice1);

        switch(choice1) {
            case 'M':
                printf("\nYou have selected the main dinner course.\n");
                printf("\nPlease enter your choice: \n");
                printf("1. Pizza 500 Rs\n");
                printf("2. Fries 50 Rs\n");
                printf("3. Burger 150 Rs\n");
                printf("4. Shawarma 200 Rs\n");
                scanf("%d", &choice2);

                switch(choice2) {
                    case 1:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan1);
                        total = 500 * quan1;
                        break;
                    case 2:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan2);
                        total = 50 * quan2;
                        break;
                    case 3:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan3);
                        total = 150 * quan3;
                        break;
                    case 4:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan4);
                        total = 200 * quan4;
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }
                break;

            case 'D':
                printf("\nYou have selected desserts.\n");
                printf("\nPlease enter your choice: \n");
                printf("1. Ice Cream 100 Rs\n");
                printf("2. Cake 200 Rs\n");
                printf("3. Fruit Salad 150 Rs\n");
                scanf("%d", &choice2);

                switch(choice2) {
                    case 1:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan1);
                        total = 100 * quan1;
                        break;
                    case 2:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan2);
                        total = 200 * quan2;
                        break;
                    case 3:
                        printf("Enter the quantity: ");
                        scanf("%d", &quan3);
                        total = 150 * quan3;
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }
                break;

            default:
                printf("Invalid choice! Please enter 'M' or 'D'.\n");
                break;
        }

        sum += total;

        printf("\nWould you like to order more?\n");
        printf("Enter [1] if 'YES' or [2] if 'NO': ");
        scanf("%d", &n);
    } while(n == 1);

    G(sum);
}

void G(float sum) {
    printf("\nYour total amount is Rs %.2f\n", sum);
}

