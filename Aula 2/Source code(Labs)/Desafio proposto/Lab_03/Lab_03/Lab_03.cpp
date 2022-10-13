/*
2022, www.github.com/keowu
Be Free! Share your Mind !
*/
#include <iostream>
#include <Windows.h>
#include <urlmon.h>

//Oi amigo, para compilar por conta dirija-se até as configurações do projeto -> Vinculador -> Entrada -> Dependências adicioanis -> Editar -> coloque Urlmon.lib

const char* g_information = "The Ransonware Here is a Lie, go analyze another stuffs !";

auto main( void ) -> int {
   
    std::operator<<( std::cout, "[ ! ] Cuidado, ao pressionar uma tecla voce \"Baixara\" um \"Sample\" de Ransonware, tem certeza ?" );
    std::cin.get( );

    //https://learn.microsoft.com/en-us/previous-versions/windows/internet-explorer/ie-developer/platform-apis/ms775123(v=vs.85)
    auto hRes = URLDownloadToFile( //Retorna um Handle Para o Resultado, mais conhecido como HRES!

        _In_opt_ NULL,
        _In_opt_ L"https://i3.ytimg.com/vi/dQw4w9WgXcQ/maxresdefault.jpg",
        _In_opt_ L"C:\\SampleDoRansonwareDoSeuZeDoFinanceiro.png",
        _In_opt_ NULL,
        _In_opt_ NULL

    );

    if ( hRes != S_OK ) return -1;

    std::printf("[ :) ] Oh, não, todos os seus arquivos foram criptografados, agora diga adeus!\n");

    return WN_SUCCESS;
}