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