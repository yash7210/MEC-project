#include<vector>
#include<string>

class Gradebook{
    private:
       double lab_grade;
       double assignment_grade;
       double term_project_grade;
    public:
       Gradebook();
       Gradebook(std::string f_name, std::vector<std::vector<double>> *grades);
       void calculate_lab_grade(std::vector<std::vector<double>> *grades);
       void calculate_assignment_grade(std::vector<std::vector<double>> *grades);
       void term_project(std::vector<std::vector<double>> *grades);
       void final_exam(std::vector<std::vector<double>> *grades);
       void review_project(std::vector<std::vector<double>> *grades);
       void overall_grade(std::vector<std::vector<double>> *grades);

};