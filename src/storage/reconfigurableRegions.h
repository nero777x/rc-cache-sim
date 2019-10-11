#ifndef RECONFIGURABLE_REGIONS
#define RECONFIGURABLE_REGIONS

#include <map>

#include "storageUnit.h"

class reconfigurableRegions : public storageUnit {

	std::map<unsigned, module*> module_reference_table_;

public:
	reconfigurableRegions();

	// Operational Methods (inherited) //
	void printDetails();
	void attemptModule(unsigned module_index);
	bool isModulePresent(unsigned region_id, unsigned module_id);
	void insertModule(module* new_module);

	// Operational Methods (unique) //
	module* getModuleFromRegion(unsigned region_id);
	bool isRegionPopulated(unsigned region_id);
};

#endif
