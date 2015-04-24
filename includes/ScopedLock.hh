#ifndef SCOPEDLOCK_HH
# define SCOPEDLOCK_HH

#include "Mutex.hh"

class ScopedLock
{
private:
	Mutex _mutex;
public:
	ScopedLock(Mutex const &);
	~ScopedLock();
};

#endif //!SCOPEDLOCK_HH