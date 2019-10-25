/*Process Memory Operation*/

#include "header\pm_op.h"

/*得到最终内存地址*/
static DWORD getMemory(HANDLE hProcess,DWORD dwBaseAddr,int iLevel,DWORD dwSize,va_list argptr){
	DWORD dwTempAddr;
	dwTempAddr=dwBaseAddr;
	
	int i;
	if(iLevel!=0){
		for(i=0;i<iLevel;i++){
			ReadProcessMemory(hProcess,(LPVOID)dwTempAddr,&dwTempAddr,dwSize,NULL);
			dwTempAddr+=va_arg(argptr,DWORD);
		}
	}
	
	va_end(argptr);
	
	#if DEBUG
		int iValue;
		ReadProcessMemory(hProcess,(LPVOID)dwTempAddr,&iValue,dwSize,NULL);
		printf("偏移地址为：%x，读取的值为：%d\n",dwTempAddr,iValue);
	#endif
	
	return dwTempAddr;
}

/*读取并返回指定内存数据*/
DWORD readMemory(HANDLE hProcess,DWORD dwBaseAddr,int iLevel,DWORD dwSize,...){
	va_list argptr;
	va_start(argptr,dwSize);
	
	DWORD finalAddr;
	finalAddr=getMemory(hProcess,dwBaseAddr,iLevel,dwSize,argptr);
	
	va_end(argptr);
	
	DWORD dwValue;
	ReadProcessMemory(hProcess,(LPVOID)finalAddr,&dwValue,dwSize,NULL);
	
	return dwValue;
}

/*将数据写入指定内存*/
BOOL writeMemory(HANDLE hProcess,DWORD dwBaseAddr,int iLevel,DWORD dwValue,DWORD dwSize,...){
	va_list argptr;
	va_start(argptr,dwSize);
	
	DWORD finalAddr;
	finalAddr=getMemory(hProcess,dwBaseAddr,iLevel,dwSize,argptr);
	
	va_end(argptr);
	
	return WriteProcessMemory(hProcess,(LPVOID)finalAddr,&dwValue,dwSize,NULL);
}
