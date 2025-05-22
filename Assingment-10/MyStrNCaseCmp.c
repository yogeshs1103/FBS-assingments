#include <stdio.h>

int mystrncasecmp(const char*, const char*, int);

int main() {
    char str1[30], str2[30];
    int n;

    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);

    printf("Enter the number of first characters you want to compare: ");
    scanf("%d", &n);

    int res = mystrncasecmp(str1, str2, n);
    if(res == 0) {
        printf("First %d characters of the strings are equal\n", n);
    } else if(res < 0) {
        printf("String1 is less than String2 in the first %d characters\n", n);
    } else {
        printf("String1 is greater than String2 in the first %d characters\n", n);
    }

    return 0;
}

int mystrncasecmp(const char* str1, const char* str2, int n) {
	int i;
    for(i = 0; i < n; i++) {
        char ch1 = str1[i];
        char ch2 = str2[i];

        if(ch1 == '\0' || ch2 == '\0')
            break;

        if(ch1 >= 'A' && ch1 <= 'Z') 
			ch1 += 32;
        if(ch2 >= 'A' && ch2 <= 'Z') 
			ch2 += 32;

        if(ch1 != ch2)
            return ch1 - ch2;
    }
    return 0;
}

