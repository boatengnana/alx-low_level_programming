#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
    if (str == NULL || str[0] == '\0')
        return NULL;

    int word_count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
            word_count++;
        i++;
    }

    char **words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int j = 0;
    int word_start = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')) {
            word_start = i;
        }
        else if (str[i] == ' ' && i > 0 && str[i-1] != ' ') {
            int word_len = i - word_start;
            words[j] = malloc((word_len + 1) * sizeof(char));
            if (words[j] == NULL) {
                free_words(words, j);
                return NULL;
            }
            strncpy(words[j], &str[word_start], word_len);
            words[j][word_len] = '\0';
            j++;
        }
    }

    if (i > 0 && str[i-1] != ' ') {
        int word_len = i - word_start;
        words[j] = malloc((word_len + 1) * sizeof(char));
        if (words[j] == NULL) {
            free_words(words, j);
            return NULL;
        }
        strncpy(words[j], &str[word_start], word_len);
        words[j][word_len] = '\0';
        j++;
    }

    words[j] = NULL;
    return words;
}

void free_words(char **words, int count) {
    for (int i = 0; i < count; i++) {
        free(words[i]);
    }
    free(words);
}
