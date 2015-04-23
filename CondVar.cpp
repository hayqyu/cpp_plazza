#include "CondVar.hh"

CondVar::CondVar()
{
	pthread_cond_init(_cond, );
}

CondVar::~CondVar()
{
	pthread_cond_destroy(_cond);
}
	
int CondVar::broadcast()
{
	return (pthread_cond_broadcast(_cond));
}

int CondVar::signal()
{
	return (pthread_cond_signal(_cond));
}

int CondVar::wait(pthread_mutex_t *mutex)
{
	return (pthread_cond_wait(_cond, mutex));
}