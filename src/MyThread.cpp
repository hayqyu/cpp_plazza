#include "MyThread.hh"
#include "Error.hh"

MyThread::MyThread()
{

}

MyThread::~MyThread()
{

}

void		*MyThread::fnct(void *thread)
{
	reinterpret_cast<MyThread *>(thread)->job();
	return (NULL);
}

void	MyThread::start(void *arg)
{
	_arg = arg;
	if (pthread_create(&_thread_id, NULL, &MyThread::fnct, _arg) != 0)
		throw ThreadError("Can't create thread");
}

void	MyThread::join()
{
	pthread_join(_thread_id, NULL);
}