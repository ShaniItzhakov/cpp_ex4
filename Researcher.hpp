#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic {
    class Researcher : public Player {
        public:
        Researcher(Board &board, City city);
    };
}