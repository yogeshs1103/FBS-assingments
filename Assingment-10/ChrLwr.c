#include<stdio.h>
char chrlwr(char);
void main(){
	char chr;
	printf("Enter a character from a to z:");
	scanf("%c",&chr);
	chrlwr(chr);
	printf("%c",chrlwr(chr));
}
char chrlwr(char chr){
	if(chr>='A' && chr<='Z')
		chr = chr + 32;
	return chr;	
}
