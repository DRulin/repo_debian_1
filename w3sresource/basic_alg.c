#include<stdio.h>
/* ------------------------------------------------------------------ */
// Zad 68
// void shift_array(int *p, int size);
// int main() {
//     int array[5] = {1, 2, 3, 4, 5};
//     int *pArray, i;
//     pArray = array;
//     printf("Array before: ");
//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     shift_array(pArray, 5);
//     printf("\nArray after: ");
//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     return 0;
// }
// void shift_array(int *p, int size)
// {   
//     int i, temp;
//     temp = *(p+size);
//     for(i = size; i > 0; i--)
//     {
//         *(p+i) = *(p+i-1);
//     }
//     *p = temp;
// }
/* ------------------------------------------------------------------ */