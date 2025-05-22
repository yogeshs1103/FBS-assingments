#include<stdio.h>
typedef struct Product{
	int id;
	char name[20];
	int quantity;
	int price;
}Product;
void display(Product* pArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Product id:%d\nProduct name:%s\nProduct quantity:%d\nProduct price:%d\n",pArr[i].id,pArr[i].name,pArr[i].quantity,pArr[i].price);
	}
}
void store(Product* pArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Enter the product id:");
		scanf("%d",&pArr[i].id);
	
		printf("Enter the product name:");
		scanf("%s",&pArr[i].name);
	
		printf("Enter the product quantity:");
		scanf("%d",&pArr[i].quantity);
	
		printf("Enter the product price:");
		scanf("%d",&pArr[i].price);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	Product pArr[size];
	store(pArr,size);
	display(pArr,size);
}
