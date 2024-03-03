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

    struct player_t Ralph;

    initialize_player(&Ralph);
    
    printf("%d\n", Ralph.gamesplayed);

}