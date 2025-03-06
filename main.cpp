#include <windowsesque.h>

#define GetModuleFileNameW GetModuleFileName

int main(int argc, char** argv) {
    char16_t buf[2048] = {0};
    uint32_t size = GetModuleFileNameW(0, buf, (DWORD)2048);
    return 0;
}