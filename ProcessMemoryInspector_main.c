#include<stdio.h>
#include "ProcessMemoryInspector_header.h"

int main()
{
	int pid = 0;
	
	printf("----------------------------------------------------------\n");
	printf("-----------------Process Inspector------------------------\n");	
	printf("----------------------------------------------------------\n");
	
	printf("Enter the PID of a process that you want to inspect\n");	
	scanf("%d",&pid);
	
	if(pid <= 0)
	{
		printf("Invalid PID\n");
		return -1;
	}
	
	ShowProcessInformation(pid);

	ShowMemoryLayout(pid);	
			
	return 0;
}