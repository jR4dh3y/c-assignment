
#include <stdio.h>
int main(){
    char str[100];
    int i, count = 0;
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    for(i = 0; str[i] != '\0'; i++){
        count++;
    }
    printf("Number of words in the string: %d\n", count);
    return 0;
}