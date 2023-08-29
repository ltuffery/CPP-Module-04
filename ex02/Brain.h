#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {

	private:
		std::string ideas[100];

	public:
		Brain(void);
		Brain(const Brain &copy);
		~Brain(void);
		Brain &operator=(const Brain &brain);

};

#endif
