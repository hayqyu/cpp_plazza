#ifndef THREAD_HH
# define THREAD_HH

typedef void *(*fcnt) (void *);

class Thread
{
public:
	Thread();
	~Thread();
	run();
};

#endif //!THREAD_HH