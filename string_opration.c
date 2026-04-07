#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    printf("\nstring functions are built-in function\n");
int choice;
char str1[20],str2[20],str3[20];
    do{
        printf("\n******MENU******\n");
        printf("1.strlen();\n"); //to count character in string
        printf("2.sizeof();\n");// to know size of string
        printf("3.strcpy();\n");//to copy one string into another string
        printf("4.strcat();\n");//to concatenate two strings.
        printf("5.strcmp();\n");// to compare two strings
        printf("0.exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            //it's  return count of character in string
            char alphabet[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            printf("Length of string:%d\n", strlen(alphabet));
            break;
            case 2:
            //its return size of array
            char alphabets[50] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            printf(" size of string : %d", sizeof(alphabets));
             break;
            case 3:
             strcpy(str1, "Hello World!");
             printf("str1=%s\n",str1);
                strcpy(str2, str1);
                printf("Copied string in so str2=%s\n", str2);
                break;

            case 4:
              strcpy(str1, "Hello ");
                strcpy(str2, "World!");
                printf("str1=%s\nstr2=%s\n",str1,str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;;

             break;
            case 5:
             strcpy(str1, "Hello");
                strcpy(str2, "Hello");
                strcpy(str3, "Hi");

                printf("str1 Vs str2 = %d\n", strcmp(str1, str2));
                printf("str1 Vs str3 = %d\n", strcmp(str1, str3));
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
            printf("enter valid choice!!!\n");
        }


    }while(choice != 0);
}