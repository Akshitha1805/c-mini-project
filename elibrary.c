#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
    char book_name[50]; // Increased size to handle larger book 
    char author[50];    // Increased size for longer author names
    int pages;
    float price;
};

int main() {
    struct library lib[100];
	char ar_nm[30],bk_nm[30];
	int i,input,count;
	i=input=count=0;
    while (input!=5) {
        printf("\n\n****WELCOME TO E-LIBRARY****\n");
        printf("\n1.Add book information\n2.Display book information\n3.List all books of the given author\n4.List the count of books in the library\n5.Exit");
        printf("\nEnter one of the above: ");
        scanf("%d", &input);
        getchar(); // Clears the newline character from input buffer

        switch (input) {
            case 1:
                printf("Enter the book name: ");
                fgets(lib[count].book_name, sizeof(lib[count].book_name), stdin);
                lib[count].book_name[strcspn(lib[count].book_name, "\n")] = '\0'; // Remove trailing newline
                
                printf("Enter author name: ");
                fgets(lib[count].author, sizeof(lib[count].author), stdin);
                lib[count].author[strcspn(lib[count].author, "\n")] = '\0';

                printf("Enter pages: ");
                scanf("%d", &lib[count].pages);

                printf("Enter price: ");
                scanf("%f", &lib[count].price);
                
                count++;
                break;

            case 2:
                printf("You have entered the following information:\n");
                for (i = 0; i < count; i++) {
                    printf("\nBook Name: %s", lib[i].book_name);
                    printf("\nAuthor Name: %s", lib[i].author);
                    printf("\nPages: %d", lib[i].pages);
                    printf("\nPrice: %.2f\n", lib[i].price);
                }
                break;

            case 3:
                printf("Enter author name: ");
                fgets(ar_nm, sizeof(ar_nm), stdin);
                ar_nm[strcspn(ar_nm, "\n")] = '\0';

                printf("Books by %s:\n", ar_nm);
                for (i = 0; i < count; i++) {
                    if (strcmp(ar_nm, lib[i].author) == 0) {
                        printf("\nBook Name: %s", lib[i].book_name);
                        printf("\nPages: %d", lib[i].pages);
                        printf("\nPrice: %.2f\n", lib[i].price);
                    }
                }
                break;

            case 4:
                printf("\nNumber of books in library: %d", count);
                break;

            case 5:
                exit(0);

            default:
                printf("\nInvalid choice! Please enter a valid option.");
        }
    }
    return 0;
}
