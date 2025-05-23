#include <iostream>
#include <string.h>

using namespace std;

void menu();

void sacar_notacion()
{
    float numero = 0, cambio = 0, parte_decimal = 0, numero_cambio = 0;
        int parte_entera = 0, iteraciones = 0, numero_entero;
        char resultados[20], notacion_cientifica[40];
        char resultados_juntos[20];
        char numero_final[40];
        //limpia el buffer del registro
        for (int i = 0; i < 64; resultados[i++] = '\0')
            ;
        for (int i = 0; i < 64; notacion_cientifica[i++] = '\0')
            ;
        for (int i = 0; i < 64; resultados_juntos[i++] = '\0')
            ;
        for (int i = 0; i < 64; numero_final[i++] = '\0')
            ;
        cout << "coma flotante binario" <<endl;
        cout << "Introduce el numero" <<endl;
        cin >> numero_cambio;
        numero_entero = numero_cambio;
        numero = numero_entero;
        while (numero > 1)
        {
            cambio = numero;
            cambio = cambio/2;
            numero = cambio;
            cout <<numero<<"/ 2"<<endl;
            parte_entera = numero;
            parte_decimal = numero;
            cout << "Numero divicion resultado:  "<<numero<<endl;
            parte_decimal = parte_decimal - parte_entera;
            if(parte_decimal >= 0.5)
            {
                resultados[iteraciones] = '1';
            }
            else
            {
                resultados[iteraciones] = '0';
            }
            cout << "Resultados de 1 o 0:      "<<resultados[iteraciones]<<endl;
            cout <<endl;
            iteraciones++;
        }
        strrev(resultados);
        for (int x = iteraciones-1; x > -1; x--)
        {
            numero_final[x] = resultados[x];
        }
        cout << "numero final diviciones: "<<numero_final<<endl;
        cout <<endl;
        cout << "Parte punto decimal"<<endl;
        float resultado = numero_cambio;
            parte_entera = numero_cambio;
            parte_decimal = numero_cambio;
            parte_decimal = parte_decimal - parte_entera;
            numero_cambio = parte_decimal;
        for (int z = 0; z < 6; z++)
        {
            if (numero_cambio >= 1)
            {
                numero_cambio = parte_decimal;
            }
                cambio = numero_cambio;
                cout <<cambio<<"* 2"<<endl;
                cambio = cambio*2;
                numero_cambio = cambio;
                parte_entera = numero_cambio;
                parte_decimal = numero_cambio;
                cout << "Numero :  "<<numero_cambio<<endl;
                parte_decimal = parte_decimal - parte_entera;
                if(parte_entera >= 1)
                {
                    resultados_juntos[z] = '1';
                }
                else
                {
                    resultados_juntos[z] = '0';
                }
                cout << "Resultado binario:  "<<resultados_juntos[z]<<endl;

        }
        cout << "Resultado binario final:  "<<resultados_juntos<<endl;
        strcat(numero_final,resultados_juntos);
        cout <<endl;
        cout << "Notacion cientifica:  "<<numero_final<<endl;
}

void final_135()
{
    float numero = 0, cambio = 0, parte_decimal = 0, numero_cambio = 0;
        int parte_entera = 0, iteraciones = 0, numero_entero;
        char resultados[20], notacion_cientifica[40];
        char resultados_juntos[20];
        char numero_final[40];
        //limpia el buffer del registro
        for (int i = 0; i < 64; resultados[i++] = '\0')
            ;
        for (int i = 0; i < 64; notacion_cientifica[i++] = '\0')
            ;
        for (int i = 0; i < 64; resultados_juntos[i++] = '\0')
            ;
        for (int i = 0; i < 64; numero_final[i++] = '\0')
            ;
            cout <<endl;
        cout << "coma flotante binario" <<endl;
        numero_cambio = 127 + 5;
        numero_entero = numero_cambio;
        numero = numero_entero;
        cout << "127 + 5 = 132"<<endl;
        while (numero > 1)
        {
            cambio = numero;
            cambio = cambio/2;
            numero = cambio;
            parte_entera = numero;
            parte_decimal = numero;
            cout << "Resultado:  "<<numero<<endl;
            parte_decimal = parte_decimal - parte_entera;
            if(parte_decimal >= 0.5)
            {
                resultados[iteraciones] = '1';
            }
            else
            {
                resultados[iteraciones] = '0';
            }
            cout << "Resultados de 1 o 0: "<<resultados[iteraciones]<<endl;
            cout <<endl;
            iteraciones++;
        }
        strrev(resultados);
        for (int x = iteraciones-1; x > -1; x--)
        {
            numero_final[x] = resultados[x];
        }
        cout << "numero final 8 bits: "<<numero_final<<endl;
        cout <<endl;
}


int main()
{
    menu();
    return 0;
}

void menu()
{
    int opc;
    do{
        sacar_notacion();
        final_135();
    cout << "Desea salir precione 0"<<endl;
    cin >> opc;
    }while(opc != 0);
}
