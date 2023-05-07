#include <stdio.h>


void readstring(char str[]) {
    int i = 0;
    char c;
    
    // Read characters from input until newline or end of array is reached
    while (i < 19 && (c = getchar()) != '\n') {
        str[i] = c;
        i++;
    }
    
    // Add null terminator to end of string
    str[i] = '\0';
}

//count letter function to see how many times to print
int count_letters(char letter, char str[]){
    int length = 0; int count = 0;
    while (str[length] != '\0'){
        length++; //Sets length to be the right length

    }
    for (int i = 0; i < length; i++){
        if (letter == str[i]){
            count++;
        }
    
    }
    return count;
}




void sort_function(char str[]){
    int x = 0; int length = 0; int i = 0; int k = 0; int count;
    char lowest; int repeats = 0; char secondlowest; char used; char value;
    while (str[length] != '\0'){
        length++; //Sets length to be the right length

    }

    used = '0';
    for (i = 0; i < length; i++){
        lowest = '{';
        for (k = 0; k < length; k++){
            if ((used < str[k]) && (str[k] < lowest)){
                lowest = str[k];

            }
            
        }

        value = lowest;
        count = count_letters(value, str);
        for (int i = 0; i < count; i++){
            printf("%c", value);
        }

        used = lowest;
    }

}





int main(void){

int x = 1;
while (x == 1){


char str[20];
printf("Enter word: ");
readstring(str);
if (str[0] == '\0'){
    printf("\nExiting");
    printf("%c", '\n');
    x = 0;
}
else
{
    printf("Original word: %s\n" , str);
    printf("Alphabetized word: ");
    sort_function(str);
    printf("%c", '\n');
    x = 1;
    
}

}
return 0;
}
