#include <iostream>
#include <vector>

#include "src/mes/mes.h"


int main()
{
    std::string filename = "C:/Users/marci/Desktop/inzynierka/kod/MES/Test1_bcs.txt";
    //std::string filename = "C:/Users/marci/Desktop/inzynierka/kod/MES/Test3_31_31_kwadrat.txt";
    
    Fem::Solution mes_solution(filename);
    mes_solution.solve(true, true);

    return 0;
}