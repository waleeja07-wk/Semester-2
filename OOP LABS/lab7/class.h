#include <iostream>
using namespace std;
class employee{
    string emp_name;
    int emp_id;
    double basic_salary;
    public:
    employee(string n, int i, double s);
    double calculatebonus();
    double updatedSalary();
    void displayResult();
};