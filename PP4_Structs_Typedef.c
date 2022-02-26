#include <stdio.h>
#include <string.h>

// defining a struct
struct Player
{
    char name[15];
    int score;
};

// defining a typedef
typedef char user[25]; //types is a nickname for a datatype

// defining a struct as a typedef
typedef struct
{
    char name[25];
    char password[52];
    int id;
} Student;

int main() {
    //using a native struct
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bob");
    player1.score = 3;

    strcpy(player2.name, "Anabelle");
    player2.score = 10;

    printf("Player %s: ", player1.name);
    printf("%d\n", player1.score);
    
    printf("Player %s: ", player2.name);
    printf("%d\n", player2.score);

    // using a typedef
    user user1 = "George";
    printf("%s\n", user1);

    // using a typedef of a struct
    Student student1 = {"Filip", "am parola complicata", 12345678};
    Student student2 = {"Ana", "eu nu am parola complicata", 87654321};

    printf("Nume Student: %s\n", student1.name);
    printf("Parola Student: %s\n", student1.password);
    printf("ID Student: %d\n", student1.id);
    
    printf("Nume Student: %s\n", student2.name);
    printf("Parola Student: %s\n", student2.password);
    printf("ID Sudent: %d\n", student2.id);

    return 0;

}