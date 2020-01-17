#include <iostream>

const int ROWS = 3;
const int COLS = 3;


// true if the game is over else false
bool over(void);

// Allow a player to play a turn
void play(int* board);


int main() {
    std::string player1, player2;
    int board[ROWS][COLS] = {};

    std::cout << "Player 1 enter name: ";
    std::cin >> player1;

    std::cout << "Player 2 enter name: ";
    std::cin >> player2;

    std::cout << "Welcome players " << player1 << " and " << player2 << std::endl;

    
    int current_player = 0;
    bool done = false;

    // Main loop
    while (!done) {
        // Allow current player to play

        // Change player
        
        // Check if game is over
    }

    std::cout << "Game over. Winner is player: " << ((current_player == 0)? player1 : player2) << std::endl;

    return 0;
}
