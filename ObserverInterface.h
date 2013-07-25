#ifndef _OBSERVER_INTERFACE_H_
#define  _OBSERVER_INTERFACE_H_

class ObserverInterface
{
public:
	ObserverInterface(void);
	virtual ~ObserverInterface(void);

	void Update();
};

#endif
