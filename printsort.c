#include <stdio.h>

void readstring(char str[20]){
    int i; char c;
    while ((c == getchar()) != '\n' && i<19){
        str[i] = c;
        i++;
    }

    str[i] ='\0';

}

void sort_function(char str[20]){
int x = 0; int length = 0; int i = 0; int k = 0; 
char lowest; int repeats = 0; char secondlowest;
while (str[x] != '\0'){
    length++; //Sets length to be the right length
    x++;
}
x = 0;
for (i = 0; i < length - 1; i++){
    
    for (k = i; k < length; k++){
        if (str[k] < str[lowest]){
            secondlowest = lowest;
            lowest = k;
        if (str[k] == str[lowest]){
            repeats++;
        }
        }
        
        
    }
    char value = str[lowest];
    for (x = 0; x < repeats; x++){
        printf(" %c", value);
    }
    lowest = secondlowest;
}
}





int main(void){
char str[20];
printf("Enter word: ");
readstring(str[20]);
sort_function(str[20]);

return 0;
}
