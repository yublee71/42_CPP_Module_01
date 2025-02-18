#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{

public:
	Zombie(void);
	~Zombie(void);
	void announce(void);

private:
	std::string name;
}

#endif