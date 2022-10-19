#include "gradebook.h"
#include<fstream>
#include<iostream>
#include<sstream>

Gradebook::Gradebook(std::string f_name, std::vector<std::vector<double>> *grades) {
    //this->grades = new std::vector<std::vector<double>>;
    std::ifstream file(f_name);
    std::string str;

    while (std::getline(file, str)) {
       std::vector<double> new_row;

       std::istringstream ss(str);

       double token;

        while(ss >> token){
            new_row.push_back(token);
        }
        
        (*grades).push_back(new_row);
    }


    for(int i = 0; i < grades->size(); i++){
        for(int j = 0; j < (*grades)[i].size(); j++){
           std::cout << (*grades)[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Gradebook::calculate_lab_grade(std::vector<std::vector<double>> *grades){
    int grade_weight = 5;
    int max_score = 5;
    int size = (*grades)[0].size();
    double sum;
    double percent;
    for(int i = 0; i < size; i++){
        sum += (*grades)[0][i];
    }
    std::cout << sum << "," << size << std::endl;
    percent = ((sum/(max_score*size)) * 100);
    lab_grade = (percent/100 * grade_weight);
    std::cout << "Your overall lab grade is " << percent << " % "<< std::endl;
    std::cout << "This translates to " <<  lab_grade << "/" << grade_weight << " points"<< std::endl;

}
