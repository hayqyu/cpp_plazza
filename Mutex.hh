#include <pthread.h>

#ifndef MUTEX_HH
#define MUTEX_HH

class Mutex
{
	pthread_mutex_t	*_mutex;
public:
	Mutex();
	~Mutex();
public:
	int lock();
	int unlock();
	int trylock();
};

#endif //MUTEX_HH