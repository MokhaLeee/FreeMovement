#include "gbafe.h"

#define MAX_PROC_COUNT 64
extern struct Proc sProcArray[MAX_PROC_COUNT];

static ProcPtr ProcFindByName(const char * name)
{
    int i;
    struct Proc * proc = sProcArray;
    for (i = 0; i < MAX_PROC_COUNT; i++, proc++)
    {
        if (!proc->proc_name)
            continue;

        if (StringCompare(proc->proc_name, name))
            return proc;
    }
    return NULL;
}

ProcPtr ProcFindFMU(void)
{
    return ProcFindByName("E_FREEMOVE");
}
