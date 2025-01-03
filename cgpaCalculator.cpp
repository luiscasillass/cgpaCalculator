/*A student’s cumulative grade point average (CGPA) can be determined using the C++ program CGPA Calculator. 
The user’s input is used to compute the CGPA, which includes information like the #1 number of courses taken and 
#2 the grades earned in each one. The program also #3 shows each student’s overall course grade. CGPA Calculator 
calculates a student’s Cumulative Grade Point Average (CGPA) from the given exam results. The program can show 
the individual grades of each course, calculate total credits and total grade points achieved, determine the 
GPA for the semester, and based on all the data, it can generate and present the CGPA of the student. 

Technologies Required: C++ programming language, Data Structures, Basic Searching & Sorting algorithms, Basic 
Arithmetic Operations and formulas, and File Handling ( I/O Streams ).

December 16 - 2025
*/
#include <iostream>
#include <string>


int main(){

    //welcome message 
    std::cout<<"Hi there! this is ITESM's Cumulative Grade Point Average Program\n";

    //user's input of his name
    std::string name;
    std::cout<<"What's your student ID? \n"; //instructions shown in teminal for the user 
    std::cin>>name; // user's input 


    // number of courses taken in the semester
    int numCourse;  // the variable numCourse is initialized 
    std::cout<<"Write the number of courses taken: \n"; // instructions shown in terminal for the user 
    std::cin>>numCourse; // user's input 

    // variable sumOFgrade is initialized. This variable will sum  the user´s grades and the show the course's average or CGPA
    int sumOFgrades = 0;

    // this for itarerates for each course 
    for(int i = 1; i <= numCourse; i++){
        std::cout<<"What is the name of the course "<<i<<"?\n";
        std::string courseName;
        std::cin>>courseName;

        std::cout<<"What is the grade of the course "<<i<<"?\n";
        float grade;
        std::cin>>grade;

        sumOFgrades += grade; //sum all grades 
    }
    
    float averageGrade = (float) sumOFgrades / numCourse; // calculate course's average 

    std::cout<<"The average grade is: "<<averageGrade<<std::endl;

    return false; 
}