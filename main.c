#include "mheader.h"
struct user_data {
    int user_id;
    char user_name[20];
    char user_surname[20];
};
void create_user_db(void);
void add_user_to_db(struct user_data wsk);
struct user_data input_user_data(void);
int main(int argc, char *argv[]) {
    // create_user_db();
    add_user_to_db(input_user_data());
    return 0;
}
void create_user_db(void) {
    FILE *user_db;
    user_db = fopen("addit_files/user_db.txt", "w+");
    fprintf(user_db, "%8s%20s%20s\n", "user_id", "user_name", "user_surname");
    fclose(user_db);
}
void add_user_to_db(struct user_data wsk) {
    FILE *user_db;
    user_db = fopen("addit_files/user_db.txt", "a");
    printf("Wprowadzono %d %s %s\n", wsk.user_id, wsk.user_name, wsk.user_surname);
    fprintf(user_db, "%8d%20s%20s\n", wsk.user_id, wsk.user_name, wsk.user_surname);
    fclose(user_db);
}
struct user_data input_user_data(void) {
    struct user_data temp_user;
    printf("Podaj id uzytkownika: ");
    scanf("%d", &temp_user.user_id);
    printf("Podaj imie uzytkownika: ");
    scanf("%s", temp_user.user_name);
    printf("Podaj nazwisko uzytkownika: ");
    scanf("%s", temp_user.user_surname);
    return temp_user;
}