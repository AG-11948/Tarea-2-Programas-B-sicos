#include <iostream>
#include <conio.h> 
#include <string>
#include <cstdlib>
#include <vector>
#include<windows.h>
#include <cmath>
#include <stdio.h>

using namespace std;


string num_a_letras(int num) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    if (num == 0) {
        return "cero";
    } else if (num <= 9) {
        return unidades[num];
    } else if (num < 20) {
        return especiales[num - 10];
    } else if (num <= 99) {
        int decena = num / 10;
        int unidad = num % 10;
        if (unidad == 0) {
            return decenas[decena];
        } else {
            return decenas[decena] + " y " + unidades[unidad];
        }
    } else {
        return "fuera de rango";
    }
}

string decimalEnLetras(int decimal) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    if (decimal == 0) {
        return "cero";
    } else if (decimal <= 9) {
        return unidades[decimal];
    } else if (decimal < 20) {
        return especiales[decimal - 10];
    } else if (decimal <= 99) {
        int decena = decimal / 10;
        int unidad = decimal % 10;
        if (unidad == 1) {
            return decenas[decena];
        } else {
            return decenas[decena] + " y " + unidades[unidad];
        }
    } else {
        return "fuera de rango";
    }
}

string decimalToHexadecimal(int decimal) {
    string hexadecimal = ""; 
    string digitos_hexadecimales = "0123456789ABCDEF"; 

    while (decimal > 0) {
        int residuo = decimal % 16; 
        hexadecimal = digitos_hexadecimales[residuo] + hexadecimal; 
        decimal /= 16; 
    }

    return hexadecimal;
}

void gotoxy (int x1, int y1){
     HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x1 ;
     dwPos.Y = y1;
     SetConsoleCursorPosition(hcon, dwPos);
}

char opcion;
int x=10, y=10;

class Cajero {
private:
    std::string num_cuenta;
    std::string pin;
    double saldo;
    double limite_diario;

public:
    Cajero(std::string cuenta, std::string clave, double s, double limite) {
        num_cuenta = cuenta;
        pin = clave;
        saldo = s;
        limite_diario = limite;
    }

    void retirar(double cantidad) {
        if (cantidad <= saldo && cantidad <= limite_diario) {
            saldo -= cantidad;
            std::cout << "Retiraste $" << cantidad << ". Tu saldo actual es $" << saldo << std::endl;
        } else {
            std::cout << "No es posible retirar esa cantidad. Por favor intenta de nuevo." << std::endl;
        }
    }

    double get_saldo() {
        return saldo;
    }
};

float fahrenheitACelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8f;
}

float celsiusAFahrenheit(float celsius) {
    return (celsius * 1.8f) + 32;
}

int main()
{
    int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        cout << "\n\nAllan Fernado Garcia Camargo" << endl;
        cout << "No.Carnet = 1290-22-11948" << endl;
        cout << "Programacion 1 / Seccion-A" << endl;
        cout << "******Tarea 2: Programas Basicos*******" << endl;
        cout << "Acontinuacion se encuentra un menu de opciones donde cada opcion es un programa diferente, elige la opcion que desees." << endl;
        cout << "\n\nMenu de Opciones de Programas" << endl;
        cout << "1. Programa 1" << endl;
        cout << "2. Programa 2" << endl;
        cout << "3. Programa 3" << endl;
        cout << "4. Programa 4" << endl;
        cout << "5. Programa 5" << endl;
        cout << "6. Programa 6" << endl;
        cout << "7. Programa 7" << endl;
        cout << "8. Programa 8" << endl;
        cout << "9. Programa 9" << endl;
        cout << "10. Programa 10" << endl;
        cout << "11. Programa 11" << endl;
        cout << "12. Programa 12" << endl;
        cout << "13. Programa 13" << endl;
        cout << "14. Programa 14" << endl;
        cout << "15. Programa 15" << endl;
        cout << "16. Programa 16" << endl;
        cout << "17. Programa 17" << endl;
        cout << "18. Programa 18" << endl;
        cout << "19. Programa 19" << endl;
        cout << "20. Programa 20" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
            	cout<<"******** Programa 1 *********"<<endl;
            	cout<<"******** Programa Suma, Resta, Multiplicacion y Division de dos numeros *********\n"<<endl;
            	{
                  int num1 = 10;
                  int num2 = 5;
                  int suma = num1 + num2;
                  std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

                  int resta = num1 - num2;
                  std::cout << "La resta de " << num1 << " y " << num2 << " es: " << resta << std::endl;

                  int multiplicacion = num1 * num2;
                  std::cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << multiplicacion << std::endl;

                  int division = num1 / num2;
                  std::cout << "La division de " << num1 << " y " << num2 << " es: " << division << std::endl;
                }             
                
                system("pause>nul");
                break;
                
            case 2:
            	cout<<"******** Programa 2 *********"<<endl;
            	cout<<"******** Programa Determinar si un numero es par o impar *********\n"<<endl;
            	{
            	   int numero = 55;

                   if (numero % 2 == 0) {
                   std::cout << "El numero " << numero << " es par." << std::endl;
                   } else {
                   std::cout << "El numero " << numero << " es impar." << std::endl;
                       }
				}

                system("pause>nul");
                break;
                
            case 3:
            	cout<<"******** Programa 3 *********"<<endl;
            	cout<<"******** Programa Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa *********\n"<<endl;
            	{
            		double km = 10;
                    double millas = km / 1.609;
                    std::cout << km << " kilometros equivalen a " << millas << " millas." << std::endl;

                    double metros = 100;
                    double pulgadas = metros / 0.0254;
                    std::cout << metros << " metros equivalen a " << pulgadas << " pulgadas." << std::endl;

                    double libras = 150;
                    double kilos = libras / 2.205;
                    std::cout << libras << " libras equivalen a " << kilos << " kilos." << std::endl;

                    kilos = 75;
                    libras = kilos * 2.205;
                    std::cout << kilos << " kilos equivalen a " << libras << " libras." << std::endl;
            	}
                system("pause>nul");           
                break;
                
            case 4:
            	cout<<"******** Programa 4 *********"<<endl;
            	cout<<"******** Programa Determinar si una palabra o un número es palindromo. *********\n"<<endl;
            	    {
            		string plb;
	                string plbr;
	                int i = 0;
	                cout << "Ingresar palabra a verificar: ";
	                cin >> plb;
	                for (i = plb.size() - 1; i >= 0 ; i--){
		            plbr += plb[i];
	                }
		
	                if (plb == plbr){
		            cout << "La Palabra " << plb << " es palindroma";
	                } else {
		            cout << "La Palabra " << plb << " no es palindroma";
	                }
                }  
                system("pause>nul");              
                break;
            case 5:
            	cout<<"******** Programa 5 *********"<<endl;
            	cout<<"******** Programa Conversion de numeros arabigos a romanos (minimo 1,000) *********\n"<<endl;
            	{
            		int numero,unidades,decenas,centenas,millar;
	                cout << "Digite un numero: ";
	                cin >> numero;
	                cout << "El numero en romano es: " << numero;
	
	                unidades = numero%10; numero /= 10;
	                decenas = numero%10; numero /= 10;
	                centenas = numero%10; numero /= 10;
	                millar = numero%10; numero /= 10;
	
	                switch(millar){
		               case 1: cout<< "M"; break;
		               case 2: cout<< "MM"; break;
		               case 3: cout<< "MMM"; break;
	               }
	
	                switch(centenas){
		               case 1: cout<< "C"; break;
		               case 2: cout<< "CC"; break;
		               case 3: cout<< "CCC"; break;
		               case 4: cout<< "CD"; break;
		               case 5: cout<< "D"; break;
		               case 6: cout<< "DC"; break;
		               case 7: cout<< "DCC"; break;
		               case 8: cout<< "DCCC"; break;
		               case 9: cout<< "CM"; break;
	               }
	               
				   switch(decenas){
		               case 1: cout<< "X"; break;
		               case 2: cout<< "XX"; break;
		               case 3: cout<< "XXX"; break;
		               case 4: cout<< "XL"; break;
		               case 5: cout<< "L"; break;
		               case 6: cout<< "LX"; break;
		               case 7: cout<< "LXX"; break;
		               case 8: cout<< "LXXX"; break;
		               case 9: cout<< "XC"; break;
	               }
	                
					switch(unidades){
		               case 1: cout<< "I"; break;
		               case 2: cout<< "II"; break;
		               case 3: cout<< "III"; break;
		               case 4: cout<< "IV"; break;
		               case 5: cout<< "V"; break;
		               case 6: cout<< "VI"; break;
		               case 7: cout<< "VII"; break;
		               case 8: cout<< "VIII"; break;
		               case 9: cout<< "IX"; break;
	               }
                }  
                system("pause>nul");               
                break;
            case 6:
            	cout<<"******** Programa 6 *********"<<endl;
            	cout<<"******** Programa Conversion de numeros enteros a letras *********\n"<<endl;
            	{
            		int num;
                    cout << "Ingrese un numero entre 0 y 99: ";
                    cin >> num;
                    cout << num_a_letras(num) << endl;
                }  
                system("pause>nul");                
                break;
            case 7:
            	cout<<"******** Programa 7 *********"<<endl;
            	cout<<"******** Programa Conversion de numeros enteros con decimal a letras *********\n"<<endl;
            	{
            	    int entero;
                    int decimal;
                    cout << "Ingrese el numero entero: ";
                    cin >> entero;
                    cout << "Ingrese la parte decimal: ";
                    cin >> decimal;
                    string enteroEnLetras = decimalEnLetras(entero);

                    cout << "El numero en letras es: " << enteroEnLetras << " punto " << decimalEnLetras << endl;	
                }  
                system("pause>nul");           
                break;
            case 8:
            	cout<<"******** Programa 8 *********"<<endl;
            	cout<<"******** Programa Una tabla de multiplicar *********\n"<<endl;
            	{
            		int n = 10; 
                    for (int i = 1; i <= n; i++) { 
                    for (int j = 1; j <= n; j++) { 
                        cout << i * j << "\t"; 
                    }
                        cout << endl; 
                    }
                }  
                system("pause>nul");                 
                break;
            case 9:
            	cout<<"******** Programa 9 *********"<<endl;
            	cout<<"******** Programa Todas las tablas de multiplicar del 1 al 10 *********\n"<<endl;
            	{
            		int n = 10; 
                    for (int i = 1; i <= n; i++) { 
                        cout << "Tabla del " << i << ":" << endl; 
                    for (int j = 1; j <= n; j++) { 
                        cout << i << " x " << j << " = " << i * j << endl; 
                   }
                   cout << endl; 
                   }
                }  
                system("pause>nul");                
                break;
            case 10:
            	cout<<"******** Programa 10 *********"<<endl;
            	cout<<"******** Programa sobre Crear de forma grafica la multiplicacion manual *********\n"<<endl;
            	{
                    int num1 = 56;
                    int num2 = 89;

                    int product = num1 * num2;
                    std::cout << "   " << num1 << std::endl;
                    std::cout << " x " << num2 << std::endl;
                    std::cout << "------" << std::endl;

                    for (int i = 0; i < 2; i++) {
                    int digit2 = num2 % 10;
                    num2 /= 10;

                    int carry = 0;
                    int line = 0;

                    for (int j = 0; j < 2; j++) {
                    int digit1 = num1 % 10;
                    num1 /= 10;

                    int result = digit1 * digit2 + carry;
                    carry = result / 10;
                    int remainder = result % 10;

                    std::cout << " ";
                    for (int k = 0; k < 2 - j; k++) {
                    std::cout << " ";
                    }
                    std::cout << remainder;

                    if (j == 1) {
                    std::cout << "  " << line << std::endl;
                    } else {
                    std::cout << " " << line << std::endl;
                    }

           
                    }
                    std::cout << "------" << std::endl;
                    std::cout << "  " << carry << " ";
                    if (i == 0) {
                    std::cout << std::endl;
                    } else {
                    std::cout << product << std::endl;
                    }
                 }

                }  
                system("pause>nul");               
                break;
            case 11:
            	cout<<"******** Programa 11 *********"<<endl;
            	cout<<"******** Programa Conversión de numeros decimales a binario *********\n"<<endl;
            	{
            		int decimal;
                   
                    vector<int>binario;
                    cout << "Ingrese un numero decimal: ";
                    cin >> decimal;

                    while (decimal > 0) {
                    int residuo = decimal % 2;
                    binario.push_back(residuo);
                    decimal /= 2;
                    }

                    cout << "El numero binario es: ";
                    for (int i = binario.size() - 1; i >= 0; i--) {
                    cout << binario[i];
                    }
                    cout << endl;
                }  
                system("pause>nul");               
                break;
            case 12:
            	cout<<"******** Programa 12 *********"<<endl;
            	cout<<"******** Programa Conversion de numeros decimales a hexadecimales *********\n"<<endl;
            	    {
            		int decimal = 2555; 
                    string hexadecimal = decimalToHexadecimal(decimal);

                    cout << "El numero " << decimal << " en hexadecimal es: " << hexadecimal << endl;
                }  
                system("pause>nul");               
                break;
            case 13:
            	cout<<"******** Programa 13 *********"<<endl;
            	cout<<"******** Programa Crear Figuras Geometricas Basicas *********\n"<<endl;
            	{
            		    cout<<"Se dibujara un triangulo......."<<endl;
                        for(int i=0; i<7;i++){
                        for(int j=0; j<7-i;j++){
                        cout<<" ";
                        }
                        for(int x=0;x<i*2+1;x++){
                        cout<<"*";
                        }
                        cout<<"\n";
                        }   
                }  
                system("pause>nul");               
                break;
            case 14:
            	cout<<"******** Programa 14 *********"<<endl; // para mover el cursor son con las letras "W,S,A,D"
            	cout<<"******** Programa Mover un punto en toda la pantalla *********\n"<<endl;
            	{
            		while(opcion!='z')
                    {
                     system ("cls");
                     gotoxy(x,y); cout<<"*";
                     opcion=getch();
                     switch(opcion)
                        {
                     case 'w': y--; break;
                     case 's': y++; break; 
                     case 'a': x--; break; 
                     case 'd': x++; break;
                        }
                    }
                  return 0;
                }  
                system("pause>nul");               
                break;
            case 15:
            	cout<<"******** Programa 15 *********\n"<<endl;
            	cout<<"******** Programa Simulacion de un Cajero (Automata) *********\n"<<endl;
            	{
            		Cajero mi_cajero("123456789", "1234", 20000.0, 20000.0);
                    int opcion = 0;
                    double cantidad = 0.0;

                    std::cout << "Bienvenido a su cajero automatico. " << std::endl;

                    while (opcion != 4) {
                    std::cout << " Que deseas hacer?  " << std::endl;
                    std::cout << "1. Consultar saldo" << std::endl;
                    std::cout << "2. Retirar efectivo" << std::endl;
                    std::cout << "3. Cambiar PIN" << std::endl;
                    std::cout << "4. Salir" << std::endl;
                    std::cin >> opcion;

                    switch (opcion) {
                        case 1:
                           std::cout << "Tu saldo actual es $. " << mi_cajero.get_saldo() << std::endl;
                            break;
                        case 2:
                           std::cout << "Ingresa la cantidad que deseas retirar: ";
                           std::cin >> cantidad;
                           mi_cajero.retirar(cantidad);
                            break;
                        case 3:
                           std::cout << "Lo sentimos, la funcion para cambiar el PIN aun no esta disponible." << std::endl;
                            break;
                        case 4:
                           std::cout << "Gracias por utilizar nuestros servicios. ¡Hasta pronto!" << std::endl;
                            break;
                        default:
                           std::cout << "Opción invalida. Por favor intenta de nuevo." << std::endl;
                            break;
                       }
                   }

                }  
                system("pause>nul");               
                break;
            case 16:
            	cout<<"******** Programa 16 *********"<<endl;
            	cout<<"******** Programa Calcular la hipotenusa *********\n"<<endl;
            	{
            		double cateto1, cateto2, hipotenusa;

                    cout << "Ingrese la longitud del primer cateto: ";
                    cin >> cateto1;

                    cout << "Ingrese la longitud del segundo cateto: ";
                    cin >> cateto2;

                    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
                    cout << "La hipotenusa del triangulo es: " << hipotenusa << endl;

                }  
                system("pause>nul");               
                break;
            case 17:
            	cout<<"******** Programa 17 *********\n"<<endl;
            	cout<<"******** Programa Volumen de un Cono *********\n"<<endl;
            	    {
                        float r,h;
	                    float volumen;
	                    cout<<"ingrese el radio del cono: ";
	                    cin>>r;
	                    cout<<"ingrese el la altura del cono: ";
	                    cin>>h;
	                    volumen = ((3.14*(r*r))*h)/3;
	                    cout<<"El volumen del cono es: "<<volumen;
                        getch();
                }  
                system("pause>nul");               
                break;
            case 18:
            	cout<<"******** Programa 18 *********"<<endl;
            	cout<<"******** Programa Convercion de Temperaturas *********\n"<<endl;
            	{
            		    printf("30 grados C a F: %f\n", celsiusAFahrenheit(30.0f));
                        printf("86 grados F a C: %f\n", fahrenheitACelsius(86.0f));
                        float fahrenheit = 0, celsius = 0;// AquÃ­ almacenaremos las variables del usuario
                        printf("Dime los grados F:");
                        scanf("%f", &fahrenheit);
                        float equivalencia = fahrenheitACelsius(fahrenheit);
                        printf("Equivalen a %f\n", equivalencia);
                        printf("Dime los grados C:");
                        scanf("%f", &celsius);
                        equivalencia = celsiusAFahrenheit(celsius);
                        printf("Equivalen a %f\n", equivalencia);
                }  
                system("pause>nul");               
                break;
            case 19:
            	cout<<"******** Programa 19 *********"<<endl;
            	cout<<"******** Programa de Ordenamiento de numeros de Forma Desendente *********\n"<<endl;
            	{
            		int num1, num2, num3;
                    cout<<"INGRESE 3 NUMEROS: "<<endl;
                    cin>>num1;
                    cin>>num2;
                    cin>>num3;
                    cout<<endl;
 
                    if(num1>num2&&num1>num3){
 	             if(num2>num3){
 		          cout<<num1<<" "<<num2<<" "<<num3;
 	             }
 	               else if(num2<num3){
 		           cout<<num1<<" "<<num3<<" "<<num2;   
 	             }
               }
                 else if(num2>num3){
 	             if(num1>num3){
 	           	cout<<num2<<" "<<num1<<" "<<num3;
 	          }
                else if(num1<num3){
 		       cout<<num2<<" "<<num3<<" "<<num1;
 	              }
                }
                    else{
                  if(num1>num2){
 		          cout<<num3<<" "<<num1<<" "<<num2;
 	              }
 	               else if(num1<num2){
 		           cout<<num3<<" "<<num2<<" "<<num1;
 	              }
                 }
                }  
                system("pause>nul");               
                break;
            case 20:
            	cout<<"******** Programa 20 *********"<<endl;
            	cout<<"******** Programa de Conversion de Dolares a Quetzales *********\n"<<endl;
            	{
            		float dolar, quetzal, tipocambio;
                    cout<<"\nIntroduzca la cantidad en dolares ($): ";
                    cin>>dolar;
                    cout<<"\nIntroduzca el tipo de cambio en (Q): ";
                    cin>>tipocambio;
                    quetzal=dolar * tipocambio;
                    cout<<"\nConvertido en quetzales es: "<<quetzal;
                    cin.get();cin.get();
                }  
                system("pause>nul");               
                break;
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}
