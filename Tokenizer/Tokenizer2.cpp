#include <iostream>
#include <string.h>
#include <map>
#include <stdlib.h>

using namespace std;

int main()
{
	char zActivePartitons[101];

	zActivePartitons[0] = '\0';
	strncpy(zActivePartitons, "2|1|3|", 100);
	int i_ActiveMatchingPartCount;
	int *ai_ActiveMatchingPartitions;

	i_ActiveMatchingPartCount = 0;

	int iPartID = -1;
	map<int,int> mapPartIDs;

	char *zBuf = new char[101];
	char *zTemp = strtok_r(zActivePartitons, ",|", &zBuf);
	while (zTemp)
	{
		iPartID = atoi(zTemp);
		if (iPartID > 0)
		{
			mapPartIDs[i_ActiveMatchingPartCount] = iPartID;
			i_ActiveMatchingPartCount++;
		}

		zTemp = strtok_r(NULL, ",|", &zBuf);
	}


	ai_ActiveMatchingPartitions = new int[i_ActiveMatchingPartCount];
	for (int i = 0; i < i_ActiveMatchingPartCount; i++)
	{
		ai_ActiveMatchingPartitions[i] = mapPartIDs[i];
	}

	return 0;

}

