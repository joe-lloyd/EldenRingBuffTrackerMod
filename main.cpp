#include <Windows.h>
#include <iostream>

DWORD WINAPI MainThread(LPVOID param) {
    // Address of the boiled crab buff duration (example address, you need to find the real one)
    uintptr_t crabBuffAddress = 0x12345678; // Replace this with the correct address
    while (true) {
        float crabBuffDuration;
        ReadProcessMemory(GetCurrentProcess(), (LPCVOID)crabBuffAddress, &crabBuffDuration, sizeof(crabBuffDuration), NULL);
        std::cout << "Crab Buff Duration: " << crabBuffDuration << " seconds" << std::endl;
        Sleep(1000);
    }
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            CreateThread(NULL, 0, MainThread, NULL, 0, NULL);
        break;
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
