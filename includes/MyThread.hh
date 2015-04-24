#ifndef MYTHREAD_HH
# define MYTHREAD_HH

#include <pthread.h>

class MyThread
{
private:
	pthread_t		_thread_id;
protected:
	void			*_arg;
	static void		*fnct(void *);
public:
	MyThread();
	~MyThread();
	void			start(void *arg);
	void			join();
	virtual void	job() = 0;
};

#endif //!MYTHREAD_HH