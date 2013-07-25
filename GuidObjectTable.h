#ifndef _GUID_OBJECT_TABLE_H_
#define _GUID_OBJECT_TABLE_H_

class GuidObject;

class GuidObjectTable
{
public:
	GuidObjectTable(void);
	virtual ~GuidObjectTable(void);

	void Set(const char* key,GuidObject *obj);
	GuidObject* Get(const char* key);
	GuidObject* Create(const char* key);

private:

};

#endif // !_GUID_OBJECT_TABLE_H_
