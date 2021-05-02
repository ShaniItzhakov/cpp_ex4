#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic {
    class Player {
    protected:
        Board board;
        City city;
    public:
        Player(Board &board, City city);
        Player& drive(City city);
        virtual Player& fly_direct(City city);
        Player& fly_charter(City city);
        Player& fly_shuttle(City city);
        virtual Player& build();
        virtual Player& discover_cure(Color color);
        virtual Player& treat(City city);
        std::string role();
        Player& take_card(City city);     
    };
}