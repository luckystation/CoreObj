#ifndef _GUIDOBJECT_H_
#define _GUIDOBJECT_H_

#include <vector>
#include <cstdint>

class SyncInterface;

class GuidObject
{
public:
	GuidObject(void);
	virtual ~GuidObject(void);

private:
	SyncInterface *sync_intf_;
};

#endif
