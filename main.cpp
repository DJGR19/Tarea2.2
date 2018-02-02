#include <iostream>
#include <string>
using namespace std;
int main(){
//EJERCICIO 2.23,2.24,2.25 <----- (PAGE 95 - PDF),4.13,4.15,4.16,4.26,4.30 <--- (PAGE 182 -PDF) EP!
int option=0;
int num;
int ventas = 0;
 int contao = 0;
	int mayoreo = 0;
	int menoreo= 10000;
	 int horaritario = 0;
	double pago = 0;
	double ordinario = 0;
	double extra = 0;
	double radio;
	double diametro = radio * 2;
	double circunferencia = diametro * 3.14159;
	double area = 3.14159 * (radio * radio);
	double klm;
	double litro;

	double totalL = 0;
	double totalK = 0;
while(option!=9){
cout<< "*******MENU*******\n";

cout<<"Seleccione una opcion deacuerdo al numero asignado\n 1.Numeros enteros mayores y menores\n 2.Numeros par o impares\n 3.Numeros multiplos\n 4.Kilometraje de Gasolina\n 5.Calculo de comisiones de venta\n 6.Calculo de salario\n 7.Verificacion de palindromos\n 8.Calcular el diametro, la cirfunferencia y el area de un circulo\n 9.Salir\n";
cin>> option;

switch(option)

{


case 1:



	for (int x = 0; x < 5; x++) {
		cout << "Ingrese el numero" << x + 1 << ": ";
		cin >> contao;

		if (contao < menoreo) {
			menoreo = contao;
		}

		if (contao > mayoreo) {
			mayoreo = contao;
		}
	}

	cout << "\n\nEl mayor de los numeros ingresados es el " << mayoreo << " y el menor es el " << menoreo <<"\n" ;



    break;


case 2:

   cout<<"Escriba un numero: ";
  cin>>num;

  if(num % 2 == 0){
        cout<<"El numero es par\n";
        }

   else{
     cout<<"El numero es impar\n";
     }


    break;

case 3:

     int n1,n2;
    cout << "Ingrese primer numero: ";
    cin >> n1;
    cout << "Ingrese segundo numero: ";
    cin >> n2;
    if(n1 > n2){

        if(n1%n2 == 0)
            cout << "\nEl numero " << n1<< " es multiplo de " << n2 <<"\n";
        else
            cout << "\nEl numero " << n1<< " nO es multiplo de " << n2 <<"\n";
    }
    else{
        if(n2%n1 == 0)
            cout << "\nEl numero " << n2<< " es multiplo de " << n1<<"\n";
        else
            cout << "\nEl numero " << n2 << " NO es multiplo de " << n1<<"\n";

    break;
case 4:


	do {
		cout << "\nIngrese los kilometros usados (-1 para salir): ";
		cin >> klm;

		if (klm == -1) {
			break;
		}

		cout << "Ingrese los litros: ";
		cin >> litro;

		totalL += litro;
		totalK += klm;

		cout << "KPL en este reabastecimiento: " << klm / litro << endl;
		cout << "Total KPL: " << totalK / totalL << endl;

	} while (klm != -1);
    break;
case 5:
while (ventas != -1) {
		cout << "Ingrese las ventas en dolares (-1 para salir): ";
		cin >> ventas;

		if (ventas == -1)
			break;

		cout << "El salario es $" << 200 + (ventas*0.09) << endl;
		cout << "" << endl;


    break;
case 6:


	while (horaritario != -1) {
		cout << "Ingrese las horas trabajadas (-1 para salir): ";
		cin >> horaritario;

		if (horaritario == -1) {
			break;
		}

		cout << "Ingresa la tarifa por hora del empleado ($00.00): ";
		cin >> pago;

		if (horaritario <= 40) {
			ordinario = horaritario * pago;
		}
		else {
			ordinario = 40 * pago;
			extra = (horaritario - 40) * (pago / 2);
		}

		cout << "El salario es $" << ordinario + extra << endl;
		cout << endl;
	}
    break;
case 7:


   int num, first, firstofall, second, third, thirdofall, fourth, fourthofall, e;
    cout<<"Ingrese 5 numeros enteros "<<endl;
cin>> num;
        first=num/10000;
        firstofall=num%10000;
        second=num%10;
 if(first=!second)
    cout<<"No es un palindromo"<<endl;
else{
        third=firstofall/1000;
        thirdofall=firstofall%1000;
        fourth=thirdofall/100;
        fourthofall=thirdofall%100;
        e=fourthofall/10;
 if (third==e)
    cout<<"Si es un palindromo"<<endl;
else
    cout<<"No es palindrome"<<endl;
}



    break;
case 8:


	cout << "Ingrese el radio del circulo: ";
	cin >> radio;


	cout << "." << endl;
	cout << "." << endl;
	cout << "." << endl;

	cout << "Radio: " << radio << endl;
	cout << "Diametro: " << diametro << endl;
	cout << "Circunferencia: " << circunferencia << endl;
	cout << "Area: " << area << endl;
    break;
case 9:
    break;
    }
}
}
}
}









