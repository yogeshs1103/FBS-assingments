#include<stdio.h>
typedef struct{
	char bname[30];
	int bid;
	char author[30];
	int price;
}Book;
void store(Book* b){
	printf("Enter the Book name:");
	fgets(b->bname,sizeof(b->bname),stdin);
	
	printf("Enter the Book Id:");
	scanf("%d",&b->bid);
	
	printf("Enter the author name:");
	fflush(stdin);
	fgets(b->author,sizeof(b->author),stdin);
	
	printf("Enter the price:");
	scanf("%d",&b->price);
	
}
void display(Book* b){
	printf("Book Name:%s\nBook Id:%d\nAuthor Name:%s\nBook Price:%d",b->bname,b->bid,b->author,b->price);
}
void main(){
	Book b;
	Book* ptr = &b;
	store(ptr);
	display(ptr);
}
