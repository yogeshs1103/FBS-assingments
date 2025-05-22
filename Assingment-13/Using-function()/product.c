#include<stdio.h>
typedef struct Product{
	int id;
	char name[20];
	int quantity;
	int price;
}Product;
void display(Product p1){
	printf("Product id:%d\nProduct name:%s\nProduct quantity:%d\nProduct price:%d",p1.id,p1.name,p1.quantity,p1.price);
}
Product store(){
	Product p1;
	printf("Enter the product id:");
	scanf("%d",&p1.id);
	
	printf("Enter the product name:");
	scanf("%s",&p1.name);
	
	printf("Enter the product quantity:");
	scanf("%d",&p1.quantity);
	
	printf("Enter the product price:");
	scanf("%d",&p1.price);
	
	return p1;
}
void main(){
	Product p1=store();
	display(p1);
}
