// PortalFactory.cpp: implementation of the CPortalFactory class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "N3Indoor.h"
#include "PortalFactory.h"

#include "PortalVolume.h"

#include <vector>

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPortalFactory::CPortalFactory()
{

}

CPortalFactory::~CPortalFactory()
{

}

std::string	CPortalFactory::MakePvsVolString(int iIndex)
{
	std::vector<char> buffer(32, NULL);
	sprintf(&buffer[0], "Vol_%d", iIndex);
	return std::string(buffer.begin(), buffer.end());
}

CPortalVolume* CPortalFactory::CreatePvsVol(int iIndex)
{
	CPortalVolume* pRet = NULL;
	pRet = new CPortalVolume;

	pRet->m_strID = MakePvsVolString(iIndex);
	pRet->m_iID	   = iIndex;	 

	return pRet;
}

