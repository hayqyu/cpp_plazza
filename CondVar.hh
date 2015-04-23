#ifndef CONDVAR_HH
# define CONDVAR_HH

#include <pthread.h>

class 	CondVar
{
private:
	pthread_cond_t	*_cond;
public:
	CondVar();
	~CondVar();
public:
	int	broadcast();
	int	signal();
	int	wait(pthread_mutex *);
};

#endif //!CONDVAR_HH