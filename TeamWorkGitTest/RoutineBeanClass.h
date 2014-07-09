#pragma once

#include <string>
#include <ctime>

using namespace std;

class RoutineBeanClass
{

public:
	RoutineBeanClass	(void);
	RoutineBeanClass	(string _subjectName, tm _time);
	~RoutineBeanClass	(void);

private: 
	// attribute
	string	subjectName;
	tm		time;

public:
	// behaviour
	void	setSubjectName	(string _subjectName);
	string	getSubjectName	(void);

	void	setTime			(tm _time);
	tm		getTime			(void);

};

