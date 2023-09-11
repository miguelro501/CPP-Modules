#pragma once

#include <iostream>

#define NBR_IDEAS 100

class Brain
{
    public:

        Brain &operator=(const Brain &other);

        Brain();
        Brain(const Brain &src);
        ~Brain();

    private:
        std::string ideas[NBR_IDEAS];

};