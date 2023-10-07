#include<stdio.h>

/* ------------------------------------------------------------------ */
// Zad 11
// #include<stdlib.h>
// #include<string.h>
// int check_if_anagram(char *ch1, int len_ch1, char *ch2, int len_ch2);
// int check_if_letter_was_used(int *tab, int size, int idx);
// int main()
// {
//     char ch_1[50], ch_2[50];
//     printf("Input the first String : ");
//     scanf("%s", ch_1);
//     printf("Input the second String: ");
//     scanf("%s", ch_2);
//     check_if_anagram(ch_1, strlen(ch_1), ch_2, strlen(ch_2)) ? 
//         printf("%s and %s are Anagram\n", ch_1, ch_2) : printf("%s and %s are NOT Anagram\n", ch_1, ch_2);
//     return 0;
// }
// int check_if_anagram(char *ch1, int len_ch1, char *ch2, int len_ch2)
// {
//     int *wsk, i, j, k, correct_counter = 0;
//     wsk = (int *)malloc(len_ch1*sizeof(int));
//     if(len_ch1 != len_ch2)
//     {
//         return 0;
//     }
//     printf("Len of ch1: %d\n", len_ch1);
//     for(i = 0, k = 0; i < len_ch1; i++) 
//     {
//         for(j = 0; j < len_ch1; j++)
//         {
//             if(!check_if_letter_was_used(wsk, k, j) && *(ch1+i) == *(ch2+j))
//             {
//                 printf("Letter %c is in %s\n", *(ch1+i), ch2);
//                 correct_counter++;
//                 *(wsk+k) = j;
//             }
//         }
//     }
//     if(correct_counter == len_ch1)
//     {
//         return 1;
//     }
//     return 0;

// }
// int check_if_letter_was_used(int *tab, int size, int idx)
// {
//     int i;
//     for(i = 0; i < size; i++)
//     {
//         if(*(tab+i) == idx)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
/* ------------------------------------------------------------------ */