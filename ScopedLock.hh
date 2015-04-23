#include "Mutex.hh"

class ScopedLock
{
private:
	Mutex *_mutex;
public:
	ScopedLock(Mutex const &);
	~ScopedLock();
};