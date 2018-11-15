#include "course.hpp"

using namespace std;

course::course (string title,
	            course::day_of_week day,
	            unsigned int start_time,
	            unsigned int finish_time) :
				title (title), day (day), start_time (start_time), finish_time (finish_time) { }
course::course (const course & m) :
				title (m.title), day (m.day), start_time (m.start_time), finish_time (m.finish_time) { }

course & course::operator=(const course & m) {
    //TODO implement the operator
    return *this;
}

bool course::operator== (const course & m) const {
    //TODO implement the operator
    return false;
}

bool course::operator< (const course & m) const
{
    //TODO implement the operator
    return false;
}

ostream & operator<< (ostream &os, const course & m)
{
    //TODO implement the operator
    return os;
}