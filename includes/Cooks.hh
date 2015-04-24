#ifndef COOKS_HH
# define COOKS_HH

#include "MyThread.hh"

class Cooks : public MyThread
{
public:
	void	job();
};

#endif //!COOKS_HH