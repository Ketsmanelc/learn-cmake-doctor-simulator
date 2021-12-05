#pragma once
#include "coordinates.h"


void fc_scalpel(double x_0, double y_0, double x_1, double y_1)
{
    std::cout << "Made cut between " << x_0 << "," << y_0 << "; " << x_1 << "," << y_1 << std::endl;
}

void fc_hemostat(double x_0, double y_0)
{
    std::cout << "Hemostat is used in point " << x_0 << "," << y_0 << std::endl;
}

void fc_tweezers(double x_0, double y_0)
{
    std::cout << "Twessers is used in point " << x_0 << "," << y_0 << std::endl;
}

void fc_suture(double x_0, double y_0, double x_1, double y_1)
{
    std::cout << "Made suture between " << x_0 << "," << y_0 << "; " << x_1 << "," << y_1 << std::endl;
}