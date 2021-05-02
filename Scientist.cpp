#include "Scientist.hpp"
using namespace pandemic;

Scientist::Scientist(Board &board, City city, int numOfCards) : Player(board, city) {
    this->numOfCards = numOfCards;
}