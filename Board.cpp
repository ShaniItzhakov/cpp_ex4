#include <string>
using namespace std;

#include "Board.hpp"


namespace pandemic {
    int& Board::operator[](City city) {
        return citiesMap[city];
    }

    ostream& operator<<(ostream &os, const Board &board) {
        os << "Shani" << endl;
        return os;
    }

    bool Board::is_clean() {
        return citiesMap.empty();
    }

    void Board::remove_cures() {
    }
}