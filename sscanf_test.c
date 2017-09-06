#include <stdio.h>

int main()
{
	char szSrc[20]="1.1.1.1.1";
	int nType = -1;
	int nExtension = -1;
	char szDeviceID[12]= "";
	int nRet=0;
	nRet = sscanf(szSrc, "%[0-9.]-%d", szDeviceID, &nExtension);
	printf("nRet = %d.nType=%d...szDeviceID=%s...nExtension=%d...\n", nRet, nType, szDeviceID, nExtension);
}
