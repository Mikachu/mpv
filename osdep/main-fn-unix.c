#include "main-fn.h"
#include <malloc.h>

int main(int argc, char *argv[])
{
    mallopt(M_MMAP_THRESHOLD, 128*1024);
    return mpv_main(argc, argv);
}
