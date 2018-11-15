#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "course.hpp"

using namespace std;

/*
 * print schedule - outputs course schedule to the screen
 * @param - add any new parameters you need
 */
void printSchedule()
{
    //TODO implement your print using the copy algorithm, 2 iterators, and an ostream_iterator
}

int main () {
    ifstream in;
    in.open("../courses.txt");
    if (!in.is_open()){
        cout << "Could not open the file.\n";
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    string name;
    char day;
    unsigned int start;
    unsigned int end;
    vector<course> schedule;

    while(in.good()) {
        in >> name >> day >> start >> end;
        course temp(name, day, start, end);
        schedule.push_back(temp);
    }

    for (course mysched : schedule) {
        cout << mysched;
    }


    //DONE read from courses.txt
    //DONE store data in an STL container
    //TODO sort your STL container with the sort algorithm
    //TODO implement code to determine schedule conflicts
    //TODO print out schedule conflicts
    //TODO print out schedule
    cout << "Find the TODOs in the code and implement them." << endl;
    cout << "Add/modify any functions/code you need to complete your task." << endl;
    return 0;
}