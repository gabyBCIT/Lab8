#include "course.hpp"

using namespace std;

course::course (string title,
	            course::day_of_week day,
	            unsigned int start_time,
	            unsigned int finish_time) :
				title (title), day (day), start_time (start_time), finish_time (finish_time) { }
course::course (string title,
				char weekday,
				unsigned int start_time,
				unsigned int finish_time) :
		        title (title), start_time (start_time), finish_time (finish_time)
		        {
                switch(weekday) {
                    case 'M': day = MON;
                              break;
                    case 'T': day = TUE;
                               break;
                    case 'W': day = WED;
                               break;
                    case 'J': day = THUR;
                                break;
                    case 'F': day = FRI;
                               break;
                    case 'S': day = SAT;
                               break;
                    case 'U': day = SUN;
                               break;
                }

}
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
    char date;
    switch(m.day) {
        case course::MON: date = 'M';
            break;
        case course::TUE: date = 'T';
            break;
        case course::WED: date = 'W';
            break;
        case course::THUR: date = 'J';
            break;
        case course::FRI: date = 'F';
            break;
        case course::SAT: date = 'S';
            break;
        case course::SUN: date = 'U';
            break;
   }

        os << m.title << " " << date << " " << m.start_time << " " << m.finish_time << "\n";
    return os;
}