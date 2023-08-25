// Process.cpp : implementation file
//

#include "stdafx.h"
#include "gPrj.h"
#include "Process.h"


// CProcess

CProcess::CProcess()
{
}

CProcess::~CProcess()
{
}

int CProcess::getStarInfo(CImage *pImage, int nTh) {

	unsigned char* fm = (unsigned char*)pImage->GetBits();


	int nHeight =pImage->GetHeight();
	int nWidth = pImage->GetWidth();
	int nPitch = pImage->GetPitch();

	int nSum = 0;
	for (int k = 0; k < nWidth*nHeight; k++) {
		if (fm[k] > nTh)
			nSum++;
	}
	return nSum;
}

// CProcess member functions
