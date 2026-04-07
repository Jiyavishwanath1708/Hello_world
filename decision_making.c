#include <stdio.h>
#include <conio.h>

int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. if statement( TO KNOW NUMBER IS POSITIVE)\n");
        printf("2. if-else statement(EVEN ODD)\n");
        printf("3. Nested if(ZERO/NEGATIVE/POSITIVE)\n");
        printf("4. else-if ladder(GRADE)\n");
        printf("5. switch statement(DAY)\n");
        printf("6. Ternary operator(TO KNOW MAX VALUE)\n");
        printf("7.jump statement\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);

                if(num > 0) {
                    printf("Number is positive\n");
                }
                break;
            }

            case 2: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);

                if(num % 2 == 0)
                    printf("Even number\n");
                else
                    printf("Odd number\n");
                break;
            }

            case 3: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);

                if(num > 0) {
                    if( num == 0)
                        printf("zero\n");
                    else
                        printf("positive\n");
                } else {
                    printf("Number is not positive\n");
                }
                break;
            }

            case 4: {
                int marks;
                printf("Enter marks: ");
                scanf("%d", &marks);

                if(marks >= 90)
                    printf("Grade A\n");
                else if(marks >= 75)
                    printf("Grade B\n");
                else if(marks >= 50)
                    printf("Grade C\n");
                else
                    printf("Fail\n");
                break;
            }

            case 5: {
                int day;
                printf("Enter day number (1-7): ");
                scanf("%d", &day);

                switch(day) {
                    case 1: printf("Monday\n"); break;
                    case 2: printf("Tuesday\n"); break;
                    case 3: printf("Wednesday\n"); break;
                    case 4: printf("Thursday\n"); break;
                    case 5: printf("Friday\n"); break;
                    case 6: printf("Saturday\n"); break;
                    case 7: printf("Sunday\n"); break;
                    default: printf("Invalid day\n");
                }
                break;
            }

            case 6: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                int max = (a > b) ? a : b;
                printf("Maximum is %d\n", max);
                break;
            }
            case 7:
            char ch;
        
            printf("A.break statement\n");
            printf("B.continue statement\n");
            printf("C.Goto statement");
            printf("D. return statement\n");
            printf("enter choice\n");
            scanf("%s",&ch);
            switch(ch){
                int i;
                case 'A':
            
                    for (i = 1; i <= 10; i++)
                    {
                       
                    if (i == 3)
                    {
                        printf("breaked value:%d",i);
                    break;
                    }
                    //printf("%d\n", i);
                    }
                    printf("\nLoop exited.\n");
                break;
                case 'B':
                
                    for (i = 0; i < 5; i++)
                    {
                    if (i == 2)
                    {

                    printf("Skipping iteration %d\n", i);
                    continue;
                    }
                    printf("Executing iteration %d\n", i);
                    }

                break;
                case 'C':
                int num;
                printf("enter number\n");
                scanf("%d",&num);

                if (num % 2 == 0)
                    // jump to even
                    goto even;
                    else
                    // jump to odd
                    goto odd;

                    even:
                    printf("%d is even\n", num);
                    break;
                    // return if even
                    odd:
                    printf("%d is odd\n", num);
                    break;
                break;
                case 'D':
                int choice;

                    printf("Enter a number (1-3):\n ");
                    scanf("%d", &choice);

                    switch(choice) {
                        case 1:
                            printf("You selected ONE\n");
                            break;

                        case 2:
                            printf("You selected TWO\n");
                            break;

                        case 3:
                            printf("You selected THREE\n");
                            break;

                        default:
                            printf("Invalid choice");
    }

                break;
                default:
                printf("enter valid choice\n");

            }

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}
