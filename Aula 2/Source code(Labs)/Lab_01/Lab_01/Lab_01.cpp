/*
2022, www.github.com/keowu
Be Free! Share your Mind !
*/
#include <iostream>
#include <Windows.h>

/*
* 
* As strings mais utilizadas no Windows são as seguintes:
   LPSTR = char*
LPCSTR = const char*
LPWSTR = wchar_t*
LPCWSTR = const wchar_t*
LPTSTR = char* ou wchar_t* depende do _UNICODE
LPCTSTR = const char* ou const wchar_t* depending depende do _UNICODE
* é muito importante entende-las quase a maioria das API's do Windows sem o Prefixo Ex não suporta const char* como argumento, justamente por questão de UNICODE
* queremos que nosso Software funcione bem em multiplos idiomas, não ?
*/
auto main( ) -> int {
    
    //https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
    MessageBox(

        _In_opt_ NULL,  //Handle para janela, também conhecido como HWND
        _In_opt_ L"Sou o Lab 01 ?", // LPCTSTR = Long P‌ointer to a C‌onst T‌CHAR STR‌ing (Não se preocupe, um ponteiro longo é o mesmo que um ponteiro. Havia dois tipos de ponteiros em janelas de 16 bits.)
        _In_opt_ L"Hello World !", // LPCTSTR = Long P‌ointer to a C‌onst T‌CHAR STR‌ing (Não se preocupe, um ponteiro longo é o mesmo que um ponteiro. Havia dois tipos de ponteiros em janelas de 16 bits.)
        _In_opt_ MB_OK // Flags de tipo, eles são macros que depois de passados como parâmetors são expandidos, isso é muito comum na Windows API, você pode concatena-los com "|" or.

    );

    std::cin.get( );

    return WN_SUCCESS;
}