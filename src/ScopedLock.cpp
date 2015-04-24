#include "ScopedLock.hh"

ScopedLock::ScopedLock(Mutex const &mutex):
	_mutex(mutex)
{
	_mutex.lock();
}

ScopedLock::~ScopedLock()
{
	_mutex.unlock();
}