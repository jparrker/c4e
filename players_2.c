#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct player_t {
    int id;
    int gamesplayed;
    int kills;
    int deaths;
    int kdratio;
};
// *p = address of the player
void initialize_player(struct player_t *p) {
    p -> id = 0; 
    p -> gamesplayed = 0;
    p -> kills = 0;
    p -> deaths = 0;
    p -> kdratio = 0; 

    return;
}

int main() {
    int n = 4; // run time value. Only allocate what you mean
    struct player_t *players = malloc(sizeof(struct player_t) * n);

    //make sure allocat doesn't fail -> can't deref a null pointer
    if(players  == NULL) {
        printf("The allocator failed\n");
        return -1;
    }
    initialize_player(&players[0]);

    printf("%d\n", players[0].kdratio);

    free(players);
    players = NULL;  //don't want to use after free. Memory corruption vuln. Here we are deleting the pointer. 



}