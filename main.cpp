#include <iostream>

#include "src/mes/mes.h"

int main()
{
    //std::string filename = "../Test1_bcs.txt";
    std::string filename = "../Test3_31_31_kwadrat.txt";
    
    Fem::Solution mes_solution(filename);
    mes_solution.solve(true, true);

    return 0;
}