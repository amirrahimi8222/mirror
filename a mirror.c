#include <stdio.h>
#include <string.h>
int main() {
    char word[150];
    scanf("%s",&word);
    char *word_ptr=word;
    int length= strlen(word);
    int checker=0;
        for (int i = 0; i < (length/2); ++i) {
            if(*(word_ptr+i) == *(word_ptr+length-1-i)){
                checker++;}
        }
        if(checker==length/2)
            printf("Yes");
        else
            printf("No");
}
