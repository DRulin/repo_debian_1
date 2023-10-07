#include<stdio.h>
/* ------------------------------------------------------------------ */
// Zad 11
#include<stdlib.h>
#include<string.h>
int main()
{
    char file_org_name[50], file_cpy_name[50], row[100], org_path[100] = "file_c_rsc/", cpy_path[100] = "file_c_rsc/";
    FILE *file_org, *file_cpy;
    printf("Podaj nazwe org: ");
    scanf("%s", file_org_name);
    printf("Podaj nazwe cpy: ");
    scanf("%s", file_cpy_name);
    strcat(org_path, file_org_name);
    strcat(cpy_path, file_cpy_name);
    if((file_org = fopen(org_path, "r")) == NULL)
    {
        fprintf(stderr, "Nie udalo sie otworzyc pliku: %s\n", file_org_name);
        exit(1);
    }
    if((file_cpy = fopen(cpy_path, "w")) == NULL)
    {
        fprintf(stderr, "Nie udalo sie otworzyc pliku: %s\n", file_cpy_name);
        exit(1);
    }
    printf("Zaczynam!\n");
    while(fgets(row, 100, file_org) != NULL) {
        fputs(row, file_cpy);
    }
    fclose(file_org);
    fclose(file_cpy);
    return 0;
}