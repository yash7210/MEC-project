#include<vector>
#include<string>

class Gradebook{
    private:
//  Variables for the categorical grades
       double lab_grade;
       double assignment_grade;
       double term_project_grade;
       double final_exam_grade;

//  Variables for the final exam and final grade
       double take_final_exam = false;
       double possible_points;
       double final_grade;

//  Bonus points from review project
       double extra_points;

    public:
       Gradebook();
//  Function to read grades from the file and store into a vector
       Gradebook(std::string f_name, std::vector<std::vector<double>> *grades);
    
//  Functions to perform categorical and overall grade calculations
    
       void calculate_lab_grade(std::vector<std::vector<double>> *grades);
       void calculate_assignment_grade(std::vector<std::vector<double>> *grades);
       void term_project(std::vector<std::vector<double>> *grades);
       void review_project(std::vector<std::vector<double>> *grades);
       void final_exam(std::vector<std::vector<double>> *grades);
       void overall_grade();
       void output_grades(std::vector<std::vector<double>> *grades);

};
