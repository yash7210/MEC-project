#include<iostream>
#include"gradebook.h"

int main(int argc, char* argv[]){

    std::string f_name(argv[1]);

    std::vector<std::vector<double>> grades;

    Gradebook g(f_name, &grades);
    g.calculate_lab_grade(&grades);

    return 0;
}