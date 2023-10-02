#include "mheader.h"
struct user_data {
    int user_id;
    char user_name[20];
    char user_surname[20];
};
void create_user_db(void);
void add_user_to_db(void);
void remove_user_from_db(void);
struct user_data input_user_data(FILE *user_db);
int last_user_id(FILE *user_db);
int main(int argc, char *argv[]) {
    // create_user_db();
    // add_user_to_db();
    remove_user_from_db();
    return 0;
}
void create_user_db(void) {
    FILE *user_db;
    user_db = fopen("addit_files/user_db.txt", "w");
    fprintf(user_db, "%-20s%-20s%-20s\n", "user_id", "user_name", "user_surname");
    fclose(user_db);
}
void add_user_to_db(void) {
    FILE *user_db;
    struct user_data user;
    user_db = fopen("addit_files/user_db.txt", "a+");
    user = input_user_data(user_db);
    fprintf(user_db, "%-20d%-20s%-20s\n", user.user_id, user.user_name, user.user_surname);
    fclose(user_db);
}
struct user_data input_user_data(FILE *user_db) {
    struct user_data temp_user;
    temp_user.user_id = last_user_id(user_db) + 1;
    printf("Podaj imie uzytkownika: ");
    scanf("%s", temp_user.user_name);
    printf("Podaj nazwisko uzytkownika: ");
    scanf("%s", temp_user.user_surname);
    return temp_user;
}
int last_user_id(FILE *user_db) {
    const int ROW_SIZE = 100;
    int last_id, empty_file = 1;
    char ch, one_row[ROW_SIZE];
    while ((ch = fgetc(user_db)) != '\n') {
        continue;
    }
    while (fgets(one_row, ROW_SIZE, user_db) != NULL) {
        empty_file = 0;
        sscanf(one_row, "%d", &last_id);
    }
    if (empty_file) {
        last_id = 0;
    }
    return last_id; 
}
void remove_user_from_db(void) {
    FILE *user_db, *user_db_new;
    char ch, surname_to_remove[20], current_surname[20], one_row[100];
    int licznik = 0;
    user_db = fopen("addit_files/user_db.txt", "r");
    user_db_new = fopen("addit_files/user_db_new.txt", "w");
    printf("Podaj nazwisko uzytkownika ktorego chcesz usunac: ");
    scanf("%s", surname_to_remove);
    while (fgets(one_row, 100, user_db) != NULL) {
        if (licznik > 0) {
            sscanf(one_row, "%*d%*s%s", current_surname);
            if (!strcmp(surname_to_remove, current_surname)) {         
                continue;
            }
        }
        fputs(one_row, user_db_new);
        if (licznik > 0) {
            fseek(user_db_new, -strlen(one_row), SEEK_CUR);
            fputc(licznik+'0', user_db_new);
            fseek(user_db_new, strlen(one_row)-1, SEEK_CUR);
        } 
        licznik++;
    }
    fclose(user_db);
    fclose(user_db_new);
    remove("addit_files/user_db.txt");
    rename("addit_files/user_db_new.txt", "addit_files/user_db.txt");
}