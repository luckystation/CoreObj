#ifndef _SUBJECT_
#define _SUBJECT_

class ObserverInterface;

class Subject
{
public:
	Subject(void);
	virtual ~Subject(void);

	void Attach(ObserverInterface *observer);
	void Detach(ObserverInterface *observer);
	void Notify();	

};

#endif
