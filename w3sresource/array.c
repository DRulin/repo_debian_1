#include<stdio.h>
/* ------------------------------------------------------------------ */
// Zad 1
// int main() {
//     int i, tab[10];
//     printf("Podaj 10 liczb calkowitych: ");
//     for (i = 0; i < 10; i++) {
//         scanf("%d", &tab[i]);
//     }
//     printf("Zawartosc tab: ");
//     for (i = 0; i < 10; i++) {
//         printf(" %d  ", tab[i]);
//     }
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 2
// #include<stdlib.h>
// int main() {
//     int size, *wsk, i;
//     printf("Input the number of elements to store in the array: ");
//     scanf("%d", &size);
//     wsk = (int *)calloc(size, sizeof(int));
//     printf("Input %d numbers: ", size);
//     for (i = 0; i < size; i++) {
//         scanf("%d", wsk+i);
//     }
//     printf("Zawartosc tab: ");
//     for (i = 0; i < size; i++) {
//         printf("%d ", wsk[i]);
//     }
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 3
// #include<stdlib.h>
// int main() {
//     int i, *wsk, sum, size;
//     printf("Podaj rozmiar: ");
//     scanf("%d", &size);
//     wsk = (int *)calloc(size, sizeof(int));
//     printf("Podaj %d liczb: ", size);
//     for (i = 0; i < size; i++) {
//         scanf("%d", wsk+i);
//     }
//     printf("Suma: ");
//     for (i = 0, sum = 0; i < size; i++) {
//         sum += *(wsk++);
//     }
//     printf("%d\n", sum);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 5
// #include<stdlib.h>
// int main() {
//     int size, i, j, *wsk, duplicates = 0;
//     printf("Input num of els to store: ");
//     scanf("%d", &size);
//     wsk = (int *)malloc(size*sizeof(int));
//     for (i = 0; i < size; i++) {
//         printf("el - %d:", i);
//         scanf("%d", wsk+i);
//         for (j = 0; j < i; j++) {
//             if (*(wsk+j) == *(wsk+i)) {  
//                 duplicates++;
//             }
//         }
//     }
//     printf("Num of duplicates: %d\n", duplicates);

//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 7
// #include<stdlib.h>
// int main() {
//     int i, j, size_1, size_2, *wsk_1, *wsk_2, *wsk_3, temp;
//     printf("Num of elms to store in array 1: ");
//     scanf("%d", &size_1);
//     wsk_1 = (int *)malloc(size_1*sizeof(int));
//     for (i = 0; i < size_1; i++) {
//         printf("el %d : ", i+1);
//         scanf("%d", wsk_1+i);
//     }
//     printf("Num of elms to store in array 2: ");
//     scanf("%d", &size_2);
//     wsk_2 = (int *)malloc(size_2*sizeof(int));
//     for (i = 0; i < size_2; i++) {
//         printf("el %d : ", i+1);
//         scanf("%d", wsk_2+i);
//     }
//     wsk_3 = (int *)malloc((size_1+size_2)*sizeof(int));
//     for (i = 0; i < size_1+size_2; i++) {
//         if (i < size_1) {
//             *(wsk_3+i) = *(wsk_1+i);
//         }
//         else {
//             *(wsk_3+i) = *(wsk_2+i-size_1);
//         }
//         printf("%d\n", *(wsk_3+i));
//     }
//     free(wsk_1);
//     free(wsk_2);
//     printf("Sorted: ");
//     for (i = 0; i < size_1+size_2; i++) {
//         for (j = i; j < size_1+size_2; j++) {
//             if (*(wsk_3+i) < *(wsk_3+j)) {
//                 temp = *(wsk_3+i);
//                 *(wsk_3+i) = *(wsk_3+j);
//                 *(wsk_3+j) = temp;
//             }
//         }
//         printf("%d ", *(wsk_3+i));
//     }
//     free(wsk_3);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 7
// int ones_in_row(int row[]);
// int main() {
//     int tab[4][5] = { {0, 1, 0, 1, 1}, {1, 0, 0, 1, 0}, {1, 1, 1, 1, 1}, {0, 0, 0, 0, 0} };
//     int i, ones_tab[4], max;
//     for (i = 0; i < 4; i++) {
//         ones_tab[i] = ones_in_row(tab[i]);
//     }
//     for (i = 0, max = 0; i < 4; i++) {
//         if (ones_tab[max] < ones_tab[i]) {
//             max = i;
//         }
//     }
//     printf("Max ones in row: %d\n", max);
//     return 0;
// }
// int ones_in_row(int row[4]) {
//     int i, count, row_size;
//     row_size = sizeof(row[4])/sizeof(int);
//     for (i = 0, count = 0; i < row_size; i++) {
//         if (row[i] == 1) {
//             count++;
//         }
//     }
//     return count;
// }
/* ------------------------------------------------------------------ */
// Zad 10
// #include<stdlib.h>
// int main() {
//     int nums_to_store, *wsk_el_stored, i, even_count, *wsk_even, *wsk_odd, j, m;
//     printf("Input the number of elements to be stored in the array: ");
//     scanf("%d", &nums_to_store);
//     wsk_el_stored = (int *)malloc(nums_to_store*sizeof(int));
//     for(i = 0, even_count = 0; i < nums_to_store; i++)
//     {
//         printf("element - %d : ",  i);
//         scanf("%d", wsk_el_stored+i);
//         if((*(wsk_el_stored+i))%2 == 0)
//         {
//             even_count++;
//         }
//     }
//     wsk_even = (int *)malloc(even_count*sizeof(int));
//     wsk_odd = (int *)malloc((nums_to_store-even_count)*sizeof(int));
//     for(i = 0, j = 0, m = 0; i < nums_to_store; i++)
//     {
//         if((*(wsk_el_stored+i))%2==0)
//         {
//             *(wsk_even+j) = *(wsk_el_stored+i);
//             j++;
//         }
//         else
//         {
//             *(wsk_odd+m) = *(wsk_el_stored+i);
//             m++;
//         }
//     }
//     printf("Elements stored: ");
//     for(i = 0; i < nums_to_store; i++)
//     {
//         printf("%d ", *(wsk_el_stored+i));
//     }
//     printf("\nEven elements: ");
//     for(i = 0; i < even_count; i++)
//     {
//         printf("%d ", *(wsk_even+i));
//     }
//     printf("\nOdd elements: ");
//     for(i = 0; i < nums_to_store-even_count; i++)
//     {
//         printf("%d ", *(wsk_odd+i));
//     }
//     printf("\n");
//     return 0;
// }
/* ------------------------------------------------------------------ */
