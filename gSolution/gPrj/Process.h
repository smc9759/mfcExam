#pragma once

// CProcess command target

class CProcess : public CObject
{
public:
	CProcess();
	virtual ~CProcess();

	int getStarInfo(CImage *image, int nTh = 100);
};


