#include <stdio.h>
#include <stdlib.h>
#include <string.h>s

void swap(char *a, char*b) {

}

void input_words_list(char **words_list, int n) {
    char tmp[50];
    int tmp_len;
    for(int i = 0; i < n; i++) {
        scanf("%s", tmp);
        tmp_len = strlen(tmp);

        words_list[i] = (char *)malloc(sizeof(char) * tmp_len + 1);
        strncpy(words_list, tmp, tmp_len);
    }
}

void sort_word_list(char **words_list, int n) {

}

int main(void) {
    int n;

    scanf("%d", &n);
    char **words_list = (char **)malloc(sizeof(char *) * (n + 1));
    
    // input
    input_words_list(words_list, n);
    // sort
    sort_word_list(words_list, n);
}
