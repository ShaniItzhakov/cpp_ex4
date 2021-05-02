#pragma once

#include <iostream>
#include <string>
#include <map>
#include "City.hpp"

namespace pandemic {
    class Board {
    private:
        std::map<City, int> citiesMap;
    public:
        int& operator[](City city);
        friend std::ostream& operator<<(std::ostream &os, const Board &board);
        bool is_clean();
        void remove_cures(); 
    };
}