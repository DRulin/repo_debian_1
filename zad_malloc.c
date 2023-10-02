#include "mheader.h"

int main() {
    char temp_ch[50];
    static char **wsk;
    int liczba_slow, i;
    printf("Podaj liczba slow do wprowadzenia: ");
    scanf("%d", &liczba_slow);
    wsk = (char **)malloc(liczba_slow*sizeof(char *));
    printf("%p %p\n\n", wsk, &wsk);
    if (wsk == NULL) {
        fprintf(stderr, "Nie udalo sie przydzielic pamieci 1.\n");
        exit(EXIT_FAILURE);
    }
    printf("Wprowadz %d slow:\n", liczba_slow);
    for(i = 0; i < liczba_slow; i++) {
        scanf("%s", temp_ch);
        wsk[i] = (char *)malloc(sizeof(temp_ch)*sizeof(char));
        printf("%p | %p\n", wsk[i], &wsk[i]);
        if (wsk[i] == NULL) {
            fprintf(stderr, "Nie udalo sie przydzielic pamieci 2.\n");
            exit(EXIT_FAILURE);
        }
        strcpy(wsk[i], temp_ch);
    }
    printf("Udalo sie!\n");
    for(i = 0; i < liczba_slow; i++) {
        printf("%s %p %p\n", wsk[i], wsk[i], &wsk[i]);
        free(wsk[i]);
    }
    return 0;
}