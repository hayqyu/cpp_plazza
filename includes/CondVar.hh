#ifndef CONDVAR_HH
# define CONDVAR_HH

#include <pthread.h>
#include "Mutex.hh"

class 	CondVar : public Mutex
{
private:
	pthread_cond_t	_cond;
public:
	CondVar();
	~CondVar();
public:
	int	broadcast();
	int	signal();
	int	wait();
};

#endif //!CONDVAR_HH