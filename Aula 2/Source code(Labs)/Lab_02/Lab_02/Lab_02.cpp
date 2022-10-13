/*
2022, www.github.com/keowu
Be Free! Share your Mind !
*/
#include <iostream>
#include <Windows.h>

class lab02 {

public:
    auto showMessage( _In_ LPCSTR tchTexto ) -> bool {

        return MessageBoxA( _In_opt_ NULL, _In_opt_ tchTexto, _In_opt_ ":)", _In_opt_ MB_OK ) == IDOK;
    };

};


auto main( void ) -> int {
    
   lab02( ).showMessage( "LAB02 Muhaha !" );

   return WN_SUCCESS;
}