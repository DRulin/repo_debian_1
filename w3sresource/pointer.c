#include<stdio.h>
/* ------------------------------------------------------------------ */
// Zad 1
// int main() {
//     int m = 10, n , o, *z;
//     z = &m;
//     printf("z stores the address of m = %p\n", z);
//     printf("*z stores the value of m = %d\n", *z);
//     printf("&m is the address of m = %p\n", &m);
//     printf("&n stores the address of n = %p\n", &n);
//     printf("&o stores the address of o = %p\n", &o);
//     printf("&z sores the address of z = %p\n", &z);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 2
// int main() {
//     int m = 29, *ab;
//     printf("Address of m : %p\n", &m);
//     printf("Value of m : %d\n", m);
//     ab = &m;
//     printf("\nNow ab is assigned with the address of m\n");
//     printf("Address of poinster ab : %p\n", ab);
//     printf("Content of pointer ab : %d\n\n", *ab);
//     m = 34;
//     printf("Address of poinster ab : %p\n", ab);
//     printf("Content of pointer ab : %d\n\n", *ab);
//     *ab = 7;
//     printf("Address of m : %p\n", &m);
//     printf("Value of m : %d", m);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 4
// int main() {
//     int a = 5, b = 6, *wsk_a, *wsk_b;
//     wsk_a = &a;
//     wsk_b = &b;
//     printf("The sum is : %d", *wsk_a+*wsk_b);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 5
// int add(int *wsk_a, int *wsk_b);
// int main() {
//     int a = 5, b = 7;
//     printf("The sum is : %d\n", add(&a, &b));
//     return 0;
// }
// int add(int *wsk_a, int *wsk_b) {
//     return *wsk_a+*wsk_b;
// }
/* ------------------------------------------------------------------ */
// Zad 6
// int main() {
//     int a = 6, b = 8, *wsk_a, *wsk_b, max;
//     wsk_a = &a;
//     wsk_b = &b;
//     if (*wsk_a > *wsk_b) {
//         max = *wsk_a;
//     }
//     else {
//         max = *wsk_b;
//     }
//     printf("Max is : %d\n", max);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 7
// #include<stdlib.h>
// int main() {
//     int num_of_nums, *wsk, i;
//     printf("Input num of elms to store in the array: ");
//     scanf("%d", &num_of_nums);
//     wsk = (int *)malloc(num_of_nums*sizeof(int));
//     printf("Input %d numbers: ", num_of_nums);
//     for (i = 0; i < num_of_nums; i++) {
//         scanf("%d", wsk+i);
//     }
//     for (i = 0; i < num_of_nums; i++) {
//         printf("element - %d : %d\n", i, *(wsk+i));
//     }
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 9
// #include<stdlib.h>
// int max_value(int *wsk, int size);
// int main() {
//     int num, *wsk, i;
//     printf("Input the number of elements: ");
//     scanf("%d", &num);
//     wsk = (int *)malloc(num*sizeof(int));
//     for (i = 0; i < num; i++) {
//         printf("Num %d: ", i+1);
//         scanf("%d", wsk+i);
//     }
//     printf("Max value: %d\n", max_value(wsk, num));
//     return 0;
// }
// int max_value(int *wsk, int size) {
//     int i, max;
//     for (i = 0, max = *wsk; i < size; i++) {
//         if (*wsk > max) {
//             max = *wsk;
//         }
//         wsk++;
//     }
//     return max;
// }
/* ------------------------------------------------------------------ */
// Zad 10
// int main() {
//     int i = 0;
//     char temp[30], *wsk = temp;
//     printf("Podaj lancuch: ");
//     scanf("%s", temp);
//     while(*wsk++ != '\0') {
//         i++;
//     }
//     printf("Dlugosc lancucha %s to %d\n", temp, i);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 11
// void swap(int *a, int *b, int *c);
// int main() {
//     int a = 2, b = 3, c = 4;
//     swap(&a, &b, &c);
//     printf("a = %d\nb = %d\nc = %d\n", a, b, c);
//     return 0;
// }
// void swap(int *a, int *b, int *c) {
//     int temp;
//     temp = *a;
//     *a = *c;
//     *c = *b;
//     *b = temp;
// }
/* ------------------------------------------------------------------ */
// Zad 12
// int factorial(int *a);
// int main() {
//     int num;
//     printf("Podaj liczbe: ");
//     scanf("%d", &num);
//     printf("Factorial of %d is %d\n", num, factorial(&num));
//     return 0;
// }
// int factorial(int *a) {
//     int result;
//     for (result = 1; *a > 0; (*a)--) {
//         result *= *a;
//     }
//     return result;
// }
/* ------------------------------------------------------------------ */
// Zad 14
// #include<stdlib.h>
// void sort(int *tab, int size);
// int main() {
//     int num_of_elemnts, i, *wsk;
//     printf("Elements to store: ");
//     scanf("%d", &num_of_elemnts);
//     wsk = (int *)malloc(num_of_elemnts*sizeof(int));
//     for (i = 0; i < num_of_elemnts; i++) {
//         printf("El %d: ", i);
//         scanf("%d", wsk+i);
//     }
//     sort(wsk,  num_of_elemnts);
//     printf("Sorted:\n");
//     for (i = 0; i < num_of_elemnts; i++) {
//         printf("%d\n", *(wsk+i));
//     }
//     return 0;
// }
// void sort(int *tab, int size) {
//     int max, i, j, temp;
//     for (i = 0; i < size; i++) {
//         for (j = i; j < size; j++) {
//             if (*(tab + j) > *(tab + i)) {
//                 temp = *(tab + i);
//                 *(tab + i) = *(tab + j);
//                 *(tab + j) = temp;
//             }
//         }
//     }
// }
/* ------------------------------------------------------------------ */
// Zad 15
// int *max(int *a, int *b);
// int main() {
//     int a = 11, b = 8;
//     printf("Max: %d\n", *max(&a, &b));
//     return 0;
// }
// int *max(int *a, int *b) {
//     if (*a > *b) {
//         return a;
//     }
//     else {
//         return b;
//     }
// }
/* ------------------------------------------------------------------ */
// Zad 18
// #include<string.h>
// struct user {
//     char name[20];
//     char surname[20];
//     int num;
//     float f_num;
// };
// void wyswietl(const struct user user1, const struct user *wsk_user1);
// int main() {
//     struct user user1, *wsk_user1;
//     wsk_user1 = &user1;
//     strcpy(wsk_user1->name, "Daniel");
//     strcpy(wsk_user1->surname, "Raulin");
//     wsk_user1->num = 10;
//     wsk_user1->f_num = 14.4;
//     wyswietl(user1, wsk_user1);
//     return 0;
// }
// void wyswietl(const struct user user1, const struct user *wsk_user1) {
//     printf("%s %s %d %.2f\n", user1.name, user1.surname, user1.num, user1.f_num);
//     printf("%s %s %d %.2f\n", wsk_user1->name, wsk_user1->surname, wsk_user1->num, wsk_user1->f_num);
//     printf("%s %s %d %.2f\n", (*wsk_user1).name, (*wsk_user1).surname, (*wsk_user1).num, (*wsk_user1).f_num);
// }
/* ------------------------------------------------------------------ */
// Zad 19
// #include<string.h>
// union user {
//     char name[10];
//     int age;
// };
// int main() {
//     union user user1, *wsk = &user1;
//     user1.age = 10;
//     printf("%d\n", wsk->age);
//     strcpy(user1.name, "Daniel");
//     printf("%s\n", wsk->name);
//     printf("%s\n", user1.name);
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 20
// struct employee
// {
// char *empname;
// int empid;
// };
// int main() 
// {
//     static struct employee emp1={"Jhon",1001},emp2={"Alex",1002},emp3={"Taylor",1003};
// 	struct employee(*arr[])={&emp1,&emp2,&emp3};
// 	struct employee(*(*pt)[3])=&arr;

//     printf(" Exmployee Name : %s \n",(**(*pt+1)).empname);
// 	printf("---------------- Explanation --------------------\n");
// 	printf("(**(*pt+1)).empname\n");
// 	printf("= (**(*&arr+1)).empname   as pt=&arr\n");
// 	printf("= (**(arr+1)).empname     from rule *&pt = pt\n");
// 	printf("= (*arr[1]).empname       from rule *(pt+i) = pt[i]\n");
// 	printf("= (*&emp2).empname        as arr[1] = &emp2\n");
// 	printf("= emp2.empname = Alex       from rule *&pt = pt\n\n");
// 	printf(" Employee ID :  %d\n",(*(*pt+1))->empid);	
// 	printf("---------------- Explanation --------------------\n");
// 	printf("(*(*pt+1))-> empid\n");
// 	printf("= (**(*pt+1)).empid     from rule -> = (*).\n");
// 	printf("= emp2.empid = 1002\n");
// 	printf("\n\n");

//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 21
// int main() {
//     char a = 'A' ,*wsk = &a;
//     while (*wsk != 'Z'+1) {
//         printf("%c  ", *wsk);
//         *wsk = *wsk + 1;
//     }
//     return 0;
// }
/* ------------------------------------------------------------------ */
// Zad 22
// #include<string.h>
// int main() {
//     int i;
//     char ch[20], *wsk = ch;
//     printf("Wprowadz: ");
//     scanf("%s", ch);
//     for (i = strlen(ch)-1; i >= 0; i--) {
//         putchar(*(wsk+i));
//     }
//     printf("\n");
//     return(0); 
// }
/* ------------------------------------------------------------------ */

