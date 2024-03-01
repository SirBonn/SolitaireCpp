#include <iostream>
#include "solitaire/Game.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Game game;

    std::cout << "filling" << std::endl;
    game.fillCards();
    std::cout << "Filled" << std::endl;

    return 0;
}
