#ifndef RANDOM_ALG
#define RANDOM_ALG

#include <random>

#include "../replAlg.h"

class randomAlg : public replAlg{

	unsigned evictNext(); // randomly choose a victim in the tag table
	void reorderTable();

public:
	randomAlg(std::string name, unsigned max_size);

	//void updateTable(unsigned module_index);
	void newEntryUpdate(unsigned module_index);
	unsigned replace(unsigned module_index); // randomly replace a victim with module_index
};

#endif
