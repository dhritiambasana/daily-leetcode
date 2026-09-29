#include <iostream>
#include <string>
#include <vector>

int main() {
    // '#' = black pixel, ' ' or '.' = light background (eyes are '.')
    std::vector<std::string> cat = {
        "                                              ",
        "                                              ",
        "                                              ",
        "                                              ",
        "                                              ",
        "                 #       #                    ",
        "                 ##     ##                    ",
        "                 #########                    ",
        "                 #########                    ",
        "                 ##.###.##                    ",
        "                 #########                    ",
        "                ###########                   ",
        "                 #########                    ",
        "                ###########                   ",
        "                 #########                    ",
        "                   #####                      ",
        "                   ######                     ",
        "                   ######   ###               ",
        "                  #######  #   #              ",
        "                  #######  # # #              ",
        "                  #######  ### #              ",
        "                  #######      #              ",
        "                  #############               ",
        "                                              ",
        "                                              ",
        "                                              ",
        "                                              ",
        "                                              ",
        "                                              ",
    };

    const std::string BLACK = "\033[40m  \033[0m";  // black block
    const std::string LIGHT = "\033[47m  \033[0m";  // white/light block

    for (const auto& row : cat) {
        for (char c : row) {
            std::cout << (c == '#' ? BLACK : LIGHT);
        }
        std::cout << '\n';
    }
    return 0;
}