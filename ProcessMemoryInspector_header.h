#ifndef PROCESS_H
#define PROCESS_H

/////////////////////////////////////////////////////////////////
//
//  Function Declarations
//
/////////////////////////////////////////////////////////////////

void GetSectionType(char *details, char *perms, char *section);

void ShowMemoryLayout(int pid);

void ShowProcessInformation(int pid);

#endif