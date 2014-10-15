#pragma once

#include "BiffStructure.h"
#include <Logic/Biff_structures/BitMarkedStructs.h>

namespace XLS
{;

class CFRecord;

class RkRec : public BiffStructure
{
	BASE_OBJECT_DEFINE_CLASS_NAME(RkRec)
public:
	BiffStructurePtr clone();

	//virtual void toXML(BiffStructurePtr & parent);
	//virtual const bool fromXML(BiffStructurePtr & parent);
	virtual void load(CFRecord& record);
	virtual void store(CFRecord& record);
	const unsigned __int16 get_ixfe() const;

public:
	unsigned __int16 ixfe;
	RkNumber RK_;
};

typedef boost::shared_ptr<RkRec> RkRecPtr;

} // namespace XLS
