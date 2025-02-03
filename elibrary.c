#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library{
	char book_name[20];
	char author[20];
	int pages;
	float price;
};
int main(){
	struct library lib[100];
	char ar_nm[30],bk_nm[30];
	int i,input,count;
	i=input=count=0;
	while(input!=5){
		printf("\n\n****WELCOME TO E-LIBRARY****\n");
		printf("\n1.Add book information\n2.Display book information\n3.List all books of the given author\n4.List the count of books in the library\n5.Exit");
		printf("\nEnter one of the above:");
		scanf("%d",&input);
		switch(input){
			case 1:
				printf("Enter the book name:");
				
				scanf("%s",lib[i].book_name);
				printf("Enter author name:");
				scanf("%s",lib[i].author);
				printf("Enter pages:");
				scanf("%d",&lib[i].pages);
				printf("Enter prices:");
				scanf("%f",&lib[i].price);
				count++;
				break;
			case 2:
				printf("You have entered the following information\n");
				for(i=0;i<count;i++){
					printf("Book name:%s",lib[i].book_name);
					printf("\tAuthor name:%s",lib[i].author);
					printf("\tpages:%d",lib[i].pages);
					printf("\tPrice:%f",lib[i].price);
				}
				break;
			case 3:
				printf("Enter author name:");
				scanf("%s",ar_nm);
				for(i=0;i<count;i++){
					if(strcmp(ar_nm,lib[i].author)==0)
					printf("%s%s%d%f",lib[i].book_name,lib[i].author,lib[i].pages,lib[i].price);
				}
				break;
			case 4:
				printf("\n Number of books in library :%d",count);
			    break;
			case 5:
				exit(0);
		}
	}
	return 0;
}
