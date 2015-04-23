#ifndef MUTEX_HH
# define MUTEX_HH

#include "Mutex.hh"

class ScopedLock
{
private:
	Mutex *_mutex;
public:
	ScopedLock(Mutex const &);
	~ScopedLock();
};

#endif //!MUTEX_HH