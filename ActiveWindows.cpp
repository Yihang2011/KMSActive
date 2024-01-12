/*
    Author:YihangXiao
*/

#include <Windows.h>
#include <Stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;
#define clear() system("cls");

struct Device
{
    string sysName;
    bool isWow64;
} ;

// Random function for KMS Server.
int random_int(int min, int max)
{
    unsigned int seed = time(NULL);
    srand(seed);
    return (rand() % (max - min + 1)) + min;
}

void kms1()
{
    system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
}

void kms2()
{
    system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.03k.org");
}

// [KEY] Win10 and Win11
struct key_WIN10_WIN11
{
    void Pro() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX"); }
    void ProWorkstations() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk NRG8B-VKK3Q-CXVCJ-9G2XF-6Q84J"); }
    void ProEducation() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 6TP4R-GNPTD-KYYHQ-7B7DP-J447Y"); }
    void Education() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk NW6C2-QMPVW-D7KKK-3GKT6-VCFB2"); }
    void Enterprise() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43"); }
} ;

// [KEY] Win8.1
struct key_WIN8_1
{
    void Pro() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk GCRJD-8NW9H-F2CDX-CCM8D-9D6T9"); }
    void Enterprise() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk MHF9N-XY6XB-WVXMC-BTDCT-MKKG7"); }
} ;

// [KEY] Win8
struct key_WIN8
{
    void Pro() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk NG4HW-VH26C-733KW-K6F98-J8CK4"); }
    void Enterprise() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 32JNW-9KQ84-P47T8-D8GGY-CWCK7"); }
} ;

// [KEY] Win7
struct key_WIN7
{
    void Professional() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk FJ82H-XT6CR-J8D7P-XQJJ2-GPDD4"); }
    void Enterprise() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 33PXH-7Y6KF-2VJC9-XBBR8-HVTHH"); }
} ;

// [KEY] Win Vista
struct key_WIN_VISTA
{
    void Business() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk YFKBB-PQJJV-G996G-VWGXY-2V3X8"); }
    void Enterprise() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk VKK3X-68KWM-X2YGT-QR4M6-4BWMV"); }
} ;

// [KEY] Windows for Consumer
struct key_WINDOWS_GENERAL
{
    key_WIN10_WIN11 keyWin10Win11;
    key_WIN8_1 keyWin81;
    key_WIN8 keyWin8;
    key_WIN7 keyWin7;
    key_WIN_VISTA keyWinVista;
} ;

// [KEY] Windows Server 2022
struct key_WIN_SER2022
{
    void Datacenter() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk WX4NM-KYWYW-QJJR4-XV3QB-6VM33"); }
    void Standard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk VDYBN-27WPP-V4HQT-9VMD4-VMK7H"); }
} ;

// [KEY] Windows Server 2019
struct key_WIN_SER2019
{
    void Datacenter() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk WMDGN-G9PQG-XVVXX-R3X43-63DFG"); }
    void Standard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk N69G4-B89J2-4G8F4-WWYCC-J464C"); }
    void Essentials() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk WVDHN-86M7X-466P6-VHXV7-YY726"); }
} ;

// [KEY] Windows Server 2016
struct key_WIN_SER2016
{
    void Datacenter() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk CB7KF-BWN84-R7R2Y-793K2-8XDDG"); }
    void Standard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk WC2BQ-8NRM3-FDDYY-2BFGV-KHKQY"); }
    void Essentials() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk JCKRF-N37P4-C2D82-9YXRT-4M63B"); }
} ;

// [KEY] Windows Server 2012 R2
struct key_WIN_SER2012_R2
{
    void Datacenter() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk D2N9P-3P6X9-2R39C-7RTCD-MDVJX"); }
    void Standard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk W3GGN-FT8W3-Y4M27-J84CP-Q3VJ9"); }
    void Essentials() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk KNC87-3J2TX-XB4WP-VCPJV-M4FWM"); }
} ;

struct key_WIN_SER2012
{
    void None() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk BN3D2-R7TKB-3YPBD-8DRP2-27GG4"); }
    void SingleLauguage() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 8N2M2-HWPGY-7PGT9-HGDD8-GVGGY"); }
    void CountrySpecific() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 2WN2H-YGCQR-KFX6K-CD6TF-84YXQ"); }
    void Standard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk XC9B7-NBPP2-83J2H-RHMBY-92BT4"); }
    void MultiPointStandard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk HM7DN-YVMH3-46JC3-XYTG7-CYQJJ"); }
    void MultiPointPremium() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk XNH6W-2V9GX-RGJ4K-Y8X6F-QGJ2G"); }
    void Datacenter() { system("cscript // nologo %windir%\\System32\\slmgr.vbs /ipk 48HP8-DN98B-MYWDG-T2DCC-8W83P"); }
} ;

struct key_WIN_SER2008_R2
{
    void Web() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 6TPJF-RBVHG-WBW2R-86QPH-6RTM4"); }
    void HPC() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk TT8MH-CG224-D3D7Q-498W2-9QCTX"); }
    void Standard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk YC6KT-GKW9T-YTKYR-T4X34-R7VHC"); }
    void Enterprise() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 489J6-VHDMP-X63PK-3K798-CPX3Y"); }
    void Datacenter() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 74YFP-3QFB3-KQT8W-PMXWJ-7M648"); }
    void forItaniumBasedSystems() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk GT63C-RJFQ3-4GMB6-BRFB9-CB83V"); }
} ;

struct key_WIN_SER2008
{
    void Web() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk WYR28-R7TFJ-3X2YQ-YCY4H-M249D"); }
    void HPC() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk RCTX3-KWVHP-BR6TB-RB6DM-6X7HP"); }
    void Standard() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk TM24T-X9RMF-VWXK6-X8JC9-BFGM2"); }
    void StandardwithoutHyperV() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk W7VD6-7JFBR-RX26B-YKQ3Y-6FFFJ"); }
    void Enterprise() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk YQGMW-MPWTJ-34KDK-48M3W-X4Q6V"); }
    void EnterprisewithoutHyperV() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 39BXF-X8Q23-P2WWT-38T2F-G3FPG"); }
    void Datacenter() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 74YFP-3QFB3-KQT8W-PMXWJ-7M648"); }
    void DatacenterwithoutHyperV() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 22XQ2-VRXRG-P8D42-K34TD-G3QQC"); }
    void forItaniumBasedSystems() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk 4DWFP-JF3DJ-B7DTH-78FJB-PDRHK"); }
} ;

struct key_WINDOWS_SERVER
{
    key_WIN_SER2008 keyWinSer2008;
    key_WIN_SER2008_R2 keyWinSer2008R2;
    key_WIN_SER2012 keyWinSer2012;
    key_WIN_SER2012_R2 keyWinSer2012R2;
    key_WIN_SER2016 keyWinSer2016;
    key_WIN_SER2019 keyWinSer2019;
    key_WIN_SER2022 keyWinSer2022;
} ;

struct key_WIN10_LTSC_LTSB
{
    void LongTermServicingChannel2019_2021() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk M7XTQ-FN8P6-TTKYV-9D4CC-J462D"); }
    void LongTermServicingBranch2016() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ"); }
    void LongTermServicingBranch2015() { system("cscript //nologo %windir%\\System32\\slmgr.vbs /ipk WNMTR-4C88C-JK8YV-HQ7T2-76DF9"); }
} ;

struct key_WINDOWS
{
    key_WINDOWS_GENERAL keyWindowsGeneral;
    key_WINDOWS_SERVER keyWindowsServer;
    key_WIN10_LTSC_LTSB keyWin10LTSCLTSB;
} ;

key_WINDOWS keyWindows;
Device deviceName;

// Get the version of system on this device.
BOOL GetNtVersionNumbers(DWORD& dwMajorVer, DWORD& dwMinorVer, DWORD& dwBuildNumber)
{
    BOOL bRet = FALSE;
    HMODULE hModNtdll = NULL;
    if (hModNtdll = ::LoadLibraryW(L"ntdll.dll"))
    {
        typedef void (WINAPI *pfRTLGETNTVERSIONNUMBERS)(DWORD*, DWORD*, DWORD*);
        pfRTLGETNTVERSIONNUMBERS pfRtlGetNtVersionNumbers;
        pfRtlGetNtVersionNumbers = (pfRTLGETNTVERSIONNUMBERS)::GetProcAddress(hModNtdll, "RtlGetNtVersionNumbers");
        if (pfRtlGetNtVersionNumbers)
        {
           pfRtlGetNtVersionNumbers(&dwMajorVer, &dwMinorVer, &dwBuildNumber);
           dwBuildNumber &= 0x0ffff;
           bRet = TRUE;
        }
        ::FreeLibrary(hModNtdll);
        hModNtdll = NULL;
    }
    return bRet;
}

// Get the platform of the device system.
BOOL isWow64()
{
    #ifdef _WIN64 
        return TRUE;
    #else
        return FALSE;
    #endif
}

string GetSysVersionName(DWORD& dwMajorVer, DWORD& dwMinorVer, DWORD& dwBuildNumber)
{
    string sysVerName = "";
    switch (dwMajorVer)
    {
        case 6:
            switch (dwMinorVer)
            {
                case 0: sysVerName = "Windows Vista"; break ;
                case 1: sysVerName = "Windows 7"; break ;
                case 2: sysVerName = "Windows 8"; break ;
                case 3: sysVerName = "Windows 8.1"; break ;
                case 4: sysVerName = "Windows Technical Preview"; break ;
                default: return "";
            } break ;
        case 10:    
            if (dwBuildNumber >= 21996) sysVerName = "Windows 11";
            else sysVerName = "Windows 10";
    }
    return sysVerName;
} 

string GetServerVersionName(DWORD& dwMajorVer, DWORD& dwMinorVer, DWORD& dwBuildNumber)
{
    string sysVerName = "";
    switch (dwMajorVer)
    {
        case 6:
            switch (dwMinorVer)
            {
                case 0: sysVerName = "Windows Server 2008"; break ; // NT 6.0 2008=Vista
                case 1: sysVerName = "Windows Server 2008 R2"; break ; // NT 6.1 2008R2=7
                case 2: sysVerName = "Windows Server 2012"; break ; // NT 6.2 2012=8
                case 3: sysVerName = "Windows Server 2012 R2"; break ; // NT 6.3 2012R2=8.1
                default: sysVerName = ""; break ;
            }
        case 10:
            switch (dwBuildNumber)
            {
                case 14393: sysVerName = "Windows Server 2016"; break ; // NT 10.0.14393 2016=10 1607
                case 17763: sysVerName = "Windows Server 2019"; break ; // NT 10.0.17763 2019=10 1809
                case 20348: sysVerName = "Windows Server 2022"; break ; // NT 10.0.20348 2022=10 21H2(Preview)
                default: sysVerName = ""; break ;
            }
            if (dwBuildNumber > 20348) sysVerName = "Windows Server vNext"; break ; // NT 10.0.2xxxx vNext(in 2023) vNext=11
    }
    return sysVerName;
}

string GerLTSCVersionName(DWORD& dwMajorVer, DWORD& dwMinorVer, DWORD& dwBuildNumber)
{
    string sysVerName = "";
    switch (dwMinorVer)
    {
        case 10240: sysVerName = "Windows 10 LTSB 2015"; break ;
        case 14393: sysVerName = "Windows 10 LTSB 2016"; break ;
        case 17763: sysVerName = "Windows 10 LTSC 2019"; break ;
        case 19044: sysVerName = "Windows 10 LTSC 2021"; break ;
        default: break ;
    }
    return sysVerName;
}

BOOL IsRunAsAdministrator()
{
    BOOL fIsRunAsAdmin = FALSE;
    DWORD dwError = ERROR_SUCCESS;
    PSID pAdministratorsGroup = NULL;
    SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;
    if (!AllocateAndInitializeSid(
        &NtAuthority,
        2,
        SECURITY_BUILTIN_DOMAIN_RID,
        DOMAIN_ALIAS_RID_ADMINS,
        0, 0, 0, 0, 0, 0,
        &pAdministratorsGroup))
    {
        dwError = GetLastError();
        goto Cleanup;
    }
    if (!CheckTokenMembership(NULL, pAdministratorsGroup, &fIsRunAsAdmin))
    {
        dwError = GetLastError();
        goto Cleanup;
    }
    Cleanup:
    if (pAdministratorsGroup)
    {
        FreeSid(pAdministratorsGroup);
        pAdministratorsGroup = NULL;
    }
    if (ERROR_SUCCESS != dwError) throw dwError;
    return fIsRunAsAdmin;
}

int intro()
{
    system("chcp 65001");
    system("title KMS Active");
    clear();
    printf("___________________________________________________________\n");
    printf("|                        KMS Active                        |\n");
    printf("| 1.Open ReadMe                                            |\n");
    printf("| 2.KMS Active Windows (>=Vista,Not support Win7 Ultimate) |\n");
    printf("| 3.KMS Active Windows Server (>=2008)                     |\n");
    printf("| 4.KMS Active Windows10 LTSC / LTSB                       |\n");
    printf("| 5.View the activation status                             |\n");
    printf("| 6.Exit                                                   |\n");
    printf("-----------------------------------------------------------\n");
    printf("\nEnter your choose(1, 2, 3, 4, 5, 6):");
    int op;
    scanf("%d", &op);
    return op;
}

void ReadMe()
{
    clear();
    cout << "KMS Active v1.0\n";
    cout << "Author:YihangXiao\n";
    cout << "This software is a KMS activation software.\n";
    cout << "The first option is to open ReadMe;\n";
    cout << "The second option is to activate Windows with KMS, which supports Windows 11/10 (except LTSC, LTSB)/8.1/8/7/Vista;\n";
    cout << "The third option is to activate Windows Server with KMS, which supports Windows Server 2008 and above;\n";
    cout << "The fourth option is to activate Windows with KMS, with support for Windows 10 LTSC (2019/2021) / LTSB (2015/2016);\n";
    cout << "The fifth option is to view the activation status;\n";
    cout << "The sixth option is to exit the program.\n";
    cout << "YihangXiao Thank you again for using this program!\n";
    cout << "\nPress any key to continue";
    for (int i = 1; i <= 3; i++)
    {
        Sleep(200);
        printf(".");
    }
    while (true)
        if (getchar() && getchar())
            return ;
}
 
int main()
{
    BOOL runAsAdmin = IsRunAsAdministrator();
    if (!runAsAdmin)
    {
        clear();
        cout << "----------------------------------------------------------" << endl;
        cout << "Please run as Administrator to active your windows." << endl;
        cout << "Press any key to exit";
        for (int i = 1; i <= 3; i++)
        {
            Sleep(200);
            printf(".");
        }
        while (true)
            if (getchar() && getchar())
                return 0;
    }
    clear();
    while (true)
    {
        int op = intro();
        if (op == 1) ReadMe();
        else if (op == 2)
        {
        	DWORD dwMajorVer, dwMinorVer, dwBuildNumber;
            GetNtVersionNumbers(dwMajorVer, dwMinorVer, dwBuildNumber);
            string sysVerName = GetSysVersionName(dwMajorVer, dwMinorVer, dwBuildNumber);
            bool iswow64 = isWow64();
            string isWow64 = iswow64 ? "x64" : "x86";
            if (sysVerName == "Windows 11" || sysVerName == "Windows 10")
            {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                string editionWin10Win11[5] = {
                    "1.Pro",
                    "2.Pro for Workstations",
                    "3.Pro Education",
                    "4.Education",
                    "5.Enterprise"
                } ;
                for (int i = 0; i < 5; i++) cout << editionWin10Win11[i] << "\n";
                int sysVersionName;
                cout << "\nPlease enter your OS edition:：";
                cin >> sysVersionName;
                Sleep(1000);
                clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                switch (sysVersionName)
                {
                    case 1: keyWindows.keyWindowsGeneral.keyWin10Win11.Pro(); break ;
                    case 2: keyWindows.keyWindowsGeneral.keyWin10Win11.ProWorkstations(); break ;  
                    case 3: keyWindows.keyWindowsGeneral.keyWin10Win11.ProEducation(); break ;
                    case 4: keyWindows.keyWindowsGeneral.keyWin10Win11.Education(); break ;
                    default: keyWindows.keyWindowsGeneral.keyWin10Win11.Enterprise(); break ;
                }
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;
            } else if (sysVerName == "Windows 8.1") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                cout << "1.Pro\n2.Enterprise\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsGeneral.keyWin81.Pro();
                else keyWindows.keyWindowsGeneral.keyWin81.Enterprise();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;            
            } else if (sysVerName == "Windows 8") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                cout << "1.Pro\n2.Enterprise\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsGeneral.keyWin8.Pro();
                else keyWindows.keyWindowsGeneral.keyWin8.Enterprise();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;            
            } else if (sysVerName == "Windows 7") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                cout << "1.Professional\n2.Enterprise\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsGeneral.keyWin7.Professional();
                else keyWindows.keyWindowsGeneral.keyWin7.Enterprise();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;            
            } else {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n";
                cout << "1.Business\n2.Enterprise\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsGeneral.keyWinVista.Business();
                else keyWindows.keyWindowsGeneral.keyWinVista.Enterprise();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;                 
            }
        }
        else if (op == 3)
        {
        	DWORD dwMajorVer, dwMinorVer, dwBuildNumber;
            GetNtVersionNumbers(dwMajorVer, dwMinorVer, dwBuildNumber);
            string sysVerName = GetServerVersionName(dwMajorVer, dwMinorVer, dwBuildNumber);
            bool iswow64 = isWow64();
            string isWow64 = iswow64 ? "x64" : "x86";
            if (sysVerName == "Windows Server 2022") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                cout << "1.DataCenter\n2.Standard\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsServer.keyWinSer2022.Datacenter();
                else keyWindows.keyWindowsServer.keyWinSer2022.Standard();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;    
            } else if (sysVerName == "Windows Server 2019") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                cout << "1.DataCenter\n2.Standard\n3.Essenitals\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsServer.keyWinSer2019.Datacenter();
                else if (sysVersionName == 2) keyWindows.keyWindowsServer.keyWinSer2019.Standard();
                else keyWindows.keyWindowsServer.keyWinSer2019.Essentials();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ; 
            } else if (sysVerName == "Windows Server 2016") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                cout << "1.DataCenter\n2.Standard\n3.Essenitals\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsServer.keyWinSer2016.Datacenter();
                else if (sysVersionName == 2) keyWindows.keyWindowsServer.keyWinSer2016.Standard();
                else keyWindows.keyWindowsServer.keyWinSer2016.Essentials();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ; 
            } else if (sysVerName == "Windows Server 2012 R2") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                cout << "1.DataCenter\n2.Standard\n3.Essenitals\n\nPlease enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                if (sysVersionName == 1) keyWindows.keyWindowsServer.keyWinSer2012R2.Datacenter();
                else if (sysVersionName == 2) keyWindows.keyWindowsServer.keyWinSer2012R2.Standard();
                else keyWindows.keyWindowsServer.keyWinSer2012R2.Essentials();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ; 
            } else if (sysVerName == "Windows Server 2012") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                string editionWinSer2012[7] = { 
                    "1.None", 
                    "2.SingleLauguage", 
                    "3.CountrySpecific", 
                    "4.Standard", 
                    "5.MultiPointStandard", 
                    "6.MultiPointPremium", 
                    "7.DataCenter"
                };
                for (int i = 0; i <= 6; i++) cout << editionWinSer2012[i] << "\n";
                cout << "Please enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                switch (sysVersionName)
                {
                    case 1: keyWindows.keyWindowsServer.keyWinSer2012.None(); break ;
                    case 2: keyWindows.keyWindowsServer.keyWinSer2012.SingleLauguage(); break ;
                    case 3: keyWindows.keyWindowsServer.keyWinSer2012.CountrySpecific(); break ;
                    case 4: keyWindows.keyWindowsServer.keyWinSer2012.Standard(); break ;
                    case 5: keyWindows.keyWindowsServer.keyWinSer2012.MultiPointStandard(); break ;
                    case 6: keyWindows.keyWindowsServer.keyWinSer2012.MultiPointPremium(); break ;
                    default: keyWindows.keyWindowsServer.keyWinSer2012.Datacenter(); break ;
                }
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ; 
            } else if (sysVerName == "Windows Server 2008 R2") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                string editionWinSer2008R2[6] = { 
                    "1.Web Edition", 
                    "2.HPC Edition", 
                    "3.Standard", 
                    "4.Enterprise", 
                    "5.DataCenter", 
                    "6.forItaniumBasedSystems"
                };
                for (int i = 0; i <= 5; i++) cout << editionWinSer2008R2[i] << "\n";
                cout << "Please enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                switch (sysVersionName)
                {
                    case 1: keyWindows.keyWindowsServer.keyWinSer2008R2.Web(); break ;
                    case 2: keyWindows.keyWindowsServer.keyWinSer2008R2.HPC(); break ;
                    case 3: keyWindows.keyWindowsServer.keyWinSer2008R2.Standard(); break ;
                    case 4: keyWindows.keyWindowsServer.keyWinSer2008R2.Enterprise(); break ;
                    case 5: keyWindows.keyWindowsServer.keyWinSer2008R2.Datacenter(); break ;
                    default: keyWindows.keyWindowsServer.keyWinSer2008R2.forItaniumBasedSystems(); break ;
                }
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;
            } else if (sysVerName == "Windows Server 2008 R2") {
                clear();
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                string editionWinSer2008[9] = { 
                    "1.Web Edition", 
                    "2.HPC Edition", 
                    "3.Standard", 
                    "4.Standard (Without Hyper-V)", 
                    "5.Enterprise", 
                    "6.Enterprise (Without Hyper-V)", 
                    "7.DataCenter", 
                    "8.DataCenter (Without Hyper-V)",
                    "9.forItaniumBasedSystems"
                };
                for (int i = 0; i <= 8; i++) cout << editionWinSer2008[i] << "\n";
                cout << "Please enter your OS edition:";
                int sysVersionName;
                cin >> sysVersionName;
                Sleep(1000); clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                switch (sysVersionName)
                {
                    case 1: keyWindows.keyWindowsServer.keyWinSer2008.Web(); break ;
                    case 2: keyWindows.keyWindowsServer.keyWinSer2008.HPC(); break ;
                    case 3: keyWindows.keyWindowsServer.keyWinSer2008.Standard(); break ;
                    case 4: keyWindows.keyWindowsServer.keyWinSer2008.StandardwithoutHyperV(); break ;
                    case 5: keyWindows.keyWindowsServer.keyWinSer2008.Enterprise(); break ;
                    case 6: keyWindows.keyWindowsServer.keyWinSer2008.EnterprisewithoutHyperV(); break ;
                    case 7: keyWindows.keyWindowsServer.keyWinSer2008.Datacenter(); break ;
                    case 8: keyWindows.keyWindowsServer.keyWinSer2008.DatacenterwithoutHyperV(); break ;
                    default: keyWindows.keyWindowsServer.keyWinSer2008.forItaniumBasedSystems(); break ;
                }
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ; 
        } }
        else if (op == 4)
        {
        	DWORD dwMajorVer, dwMinorVer, dwBuildNumber;
            GetNtVersionNumbers(dwMajorVer, dwMinorVer, dwBuildNumber);
            string sysVerName = GetServerVersionName(dwMajorVer, dwMinorVer, dwBuildNumber);
            bool iswow64 = isWow64();
            string isWow64 = iswow64 ? "x64" : "x86";
            if (sysVerName == "Windows 10 LTSC 2021" || sysVerName == "Windows 10 LTSC 2019")
            {
                cout << "Detected " << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build " << dwBuildNumber << "...\n\n" ;
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                keyWindows.keyWin10LTSCLTSB.LongTermServicingChannel2019_2021();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ; 
            }
            else if (sysVerName == "Windows 10 LTSB 2016")
            {
                cout << "Detected" << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build" << dwBuildNumber << "...\n\n";
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                keyWindows.keyWin10LTSCLTSB.LongTermServicingBranch2016();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar()) continue ;
            }
            else
            {
                cout << "Detected" << sysVerName << " " << isWow64 << " v" << dwMajorVer << "." << dwMinorVer << " Build" << dwBuildNumber << "...\n\n";
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /upk");
                keyWindows.keyWin10LTSCLTSB.LongTermServicingBranch2015();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /skms kms.loli.beer");
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /ato");   
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar()) continue ;
            }
        }
        else if (op == 5)
        {
            clear();
            int activeMessageLevel;
            printf("1.Activation status expiration date\n2.Activation status\n3.Detailed activation status\n\nPlease select the information you want to view:");
            scanf("%d", &activeMessageLevel);
            cout << "\n\n";
            if (activeMessageLevel == 1) 
            {
                clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /xpr");
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;
            } else if (activeMessageLevel == 2) {
                clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /dli");
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;
            } else {
                clear();
                system("cscript //nologo %windir%\\System32\\slmgr.vbs /dlv");
                cout << "\n\nPress any key to continue";
                for (int i = 1; i <= 3; i++)
                {
                    Sleep(200);
                    printf(".");
                }
                if (getchar() && getchar())
                    continue ;
            }
        }
        else // case 6: exit
        {
            clear();
            cout << "Press any key to exit";
            for (int i = 1; i <= 3; i++)
            {
                Sleep(200);
                printf(".");
            }
            while (true)
                if (getchar() && getchar())
                    return 0;
        }
    }
    return 0;
}

/*
    ArchLinux:
                    -`
                   .0+`
                  `000/
                 `+oooo:
                `+oooooo:
                -+oooooo+:
              `/:-:++oooo+:
             `/++++/+++++++：
            `/++++++++++++++:
           `/+++ooooooooooooo/`
          ./ooosssso++osssssso+`
         .oossssso-````/ossssss+`
        -osssssso.      :ssssssso.
       :osssssss/        osssso+++. 
      /ossssssss/        +ssssooo/-  
    `/ossssso+/:-        -:/+osssso+-
   `+sso+:-`                 `.-/+oso:
  `++:.                           `-/+/ 
  .`                                 `/ 
*/
