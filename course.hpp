#include <iostream>

using namespace std;

class course
{
public:
	enum day_of_week {MON, TUE, WED, THUR, FRI, SAT, SUN};

	course (string title, day_of_week day, unsigned int start_time, unsigned int finish_time);
	course (const course & m);

	course & operator= (const course & m);
	bool operator< (const course & m) const;
	bool operator== (const course & m) const;
private:
	string title; // Name of course
	day_of_week day; // Day of course
	unsigned int start_time; // course start time in HHMM format
	unsigned int finish_time; // course finish time in HHMM format
};

// Helper operator for output
ostream & operator<< (ostream &os, const course & m);