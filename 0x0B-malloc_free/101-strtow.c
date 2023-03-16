#include "main.h"

#include <stdlib.h>
#include <stdio.h>

int count_words(char *);
char **allocate_memory(int, char *);
void free_memory(char **, int);
int copy_word(char *, char *, int);

char **strtow(char *str)
{
    char **words;
    int num_words, i, j, k, len;

    if (str == NULL || *str == '\0') {
        return NULL;
    }

    num_words = count_words(str);
    words = allocate_memory(num_words, str);
    if (words == NULL) {
        return NULL;
    }

    for (i = 0, j = 0; j < num_words; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            len = 0;
            k = i;
            while (str[k] != ' ' && str[k] != '\t' && str[k] != '\n' && str[k] != '\0') {
                len++;
                k++;
            }
            words[j] = malloc((len + 1) * sizeof(char));
            if (words[j] == NULL) {
                free_memory(words, j);
                return NULL;
            }
            copy_word(words[j], str + i, len);
            j++;
            i = k;
        }
    }

    words[j] = NULL;
    return words;
}

int count_words(char *str)
{
    int count = 0, i;

    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n') && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            count++;
        }
    }

    return count;
}

char **allocate_memory(int num_words, char *str)
{
    char **words;

    words = malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    return words;
}

void free_memory(char **words, int num_words)
{
    int i;

    for (i = 0; i < num_words; i++) {
        free(words[i]);
    }
    free(words);
}

int copy_word(char *word, char *str, int len)
{
    int i;

    for (i = 0; i < len; i++) {
        word[i] = str[i];
    }
    word[i] = '\0';

    return 0;
}
