#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>  
#include<windows.h> 
#include "funciones.h"
using namespace std;
		   
    float honorariospyd=0,total_art29=0,total_computoypresup=0,incisoa=2230,incisob=12265.01,informetec=0,monto_demolicion=0,suplemento_demolicion=0,direccion_demolicion;
    long long valor=0,monto_obra=0,proyecto=0,direccion=0,siguientes=0,direccion_eje=0,direccion_sep=0,monto_obrafinal=0,total_contrato=0,caitba=0;
	float sup_cub=0,sup_scub=0,cep=0,timbrado=0,total_gastos=0,coeficiente=0;
	float hasta=0,porc=0,total_siguientes=0,total_hasta=0;
	float tablapyd[5][3]={2230000.04,8.5,189550,
                          11140000.04,8,902350,
				         22277500.04,7.5,737662.5,
				         66827500.04,7,4856162.5,
				        222752500.04,6.5,14991287.5};
	float tablamed[4][3]={446000.01,1.25,5575,
                         2228000.01,1,23395,
				         4455500.01,0.7,38987.5,
				        11138000.01,0.5,72400};	
	float tablacon[5][3]={1650000,1.7,28050,
                          8250000,1.6,133650,
				         16500000,1.5,257400,
				         49500000,1.4,716400,
				        165000000,1.3,2220900};
				        
void mostrar_ceptimbrado();	
void borrar_fondosubmenu();	   

void calculo_pyd(){
     	monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
		if (monto_obra<tablapyd[0][0])
		{monto_obrafinal=monto_obra*tablapyd[0][1]/100;	 
		hasta=tablapyd[0][0];
		total_hasta=0;
		total_siguientes=0;
		porc=tablapyd[0][1];	
		}
		else if(monto_obra<tablapyd[1][0])
	    {siguientes=monto_obra-tablapyd[0][0];
	    total_siguientes=siguientes*tablapyd[1][1]/100;
	    monto_obrafinal=tablapyd[0][2]+total_siguientes;
	    hasta=tablapyd[0][0];
	    total_hasta=tablapyd[0][2];
	    porc=tablapyd[1][1];
		}
		else if(monto_obra<tablapyd[2][0])
		{siguientes=(monto_obra-tablapyd[1][0]);
		total_siguientes=siguientes*tablapyd[2][1]/100;
	    monto_obrafinal=tablapyd[1][2]+total_siguientes;
	    hasta=tablapyd[1][0];
	    total_hasta=tablapyd[1][2];
	    porc=tablapyd[2][1];
		}
		else if(monto_obra<tablapyd[3][0])
		{siguientes=(monto_obra-tablapyd[2][0]);
		total_siguientes=siguientes*tablapyd[3][1]/100;
	    monto_obrafinal=tablapyd[2][2]+total_siguientes;
	    hasta=tablapyd[2][0];
	    total_hasta=tablapyd[2][2];
	    porc=tablapyd[3][1];
		}
		else if(monto_obra<tablapyd[4][0])
		{siguientes=(monto_obra-tablapyd[4][0]);
		total_siguientes=siguientes*tablapyd[4][1]/100;
	    monto_obrafinal=tablapyd[3][2]+total_siguientes;
	    hasta=tablapyd[3][0];
	    total_hasta=tablapyd[3][2];
	    porc=tablapyd[4][1];
		}
}
void calculo_medicion(){
		monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
		if (monto_obra<tablamed[0][0])
		{monto_obrafinal=monto_obra*tablamed[0][1]/100;
		hasta=tablapyd[0][0];
		total_hasta=0;
		total_siguientes=0;
		porc=tablapyd[0][1];
		}
		else if(monto_obra<tablamed[1][0])
		{siguientes=(monto_obra-tablamed[0][0]);
		total_siguientes=siguientes*tablamed[1][1]/100;
	    monto_obrafinal=tablamed[0][2]+total_siguientes;
	    hasta=tablamed[0][0];
	    total_hasta=tablamed[0][2];
	    porc=tablamed[1][1];
		}
		else if(monto_obra<tablamed[2][0])
		{siguientes=(monto_obra-tablamed[1][0]);
		total_siguientes=siguientes*tablamed[2][1]/100;
	    monto_obrafinal=tablamed[1][2]+total_siguientes;
	    hasta=tablamed[1][0];
	    total_hasta=tablamed[1][2];
	    porc=tablamed[2][1];
		}
		else if(monto_obra<tablamed[3][0])
		{siguientes=(monto_obra-tablamed[2][0]);
		total_siguientes=siguientes*tablamed[3][1]/100;
	    monto_obrafinal=tablamed[2][2]+total_siguientes;
	    hasta=tablamed[2][0];
	    total_hasta=tablamed[2][2];
	    porc=tablamed[3][1];
		}
}
void calculo_construccion(){
		monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
		if (monto_obra<tablacon[0][0])
		{monto_obrafinal=monto_obra*tablacon[0][1]/100;
		hasta=tablapyd[0][0];
		total_hasta=0;
		total_siguientes=0;
		porc=tablapyd[0][1];
		}
		else if(monto_obra<tablacon[1][0])
		{siguientes=(monto_obra-tablacon[0][0]);
		total_siguientes=siguientes*tablacon[1][1]/100;
	    monto_obrafinal=tablacon[0][2]+total_siguientes;
	    hasta=tablacon[0][0];
	    total_hasta=tablacon[0][2];
	    porc=tablacon[1][1];
		}
		else if(monto_obra<tablacon[2][0])
		{siguientes=(monto_obra-tablacon[1][0]);
		total_siguientes=siguientes*tablacon[2][1]/100;
	    monto_obrafinal=tablacon[1][2]+total_siguientes;
	    hasta=tablacon[1][0];
	    total_hasta=tablacon[1][2];
	    porc=tablacon[2][1];
		}
		else if(monto_obra<tablacon[3][0])
		{siguientes=(monto_obra-tablacon[2][0]);
		total_siguientes=siguientes*tablacon[3][1]/100;
	    monto_obrafinal=tablacon[2][2]+total_siguientes;
	    hasta=tablacon[2][0];
	    total_hasta=tablacon[2][2];
	    porc=tablacon[3][1];
		}
		else if(monto_obra<tablacon[4][0])
		{siguientes=(monto_obra-tablacon[4][0]);
		total_siguientes=siguientes*tablacon[4][1]/100;
	    monto_obrafinal=tablacon[3][2]+total_siguientes;
	    hasta=tablacon[3][0];
	    total_hasta=tablacon[3][2];
	    porc=tablacon[4][1];
		}
}
void mostrar_resultadospyd1(){
	direccion_eje=0;
	monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
    proyecto=monto_obrafinal*0.6;
    direccion=monto_obrafinal*0.4;
	direccion_sep=direccion;	
    total_contrato=proyecto+direccion+direccion_sep;
    if (total_contrato<18288){
                              cep=1120;
                             }
		  else if (total_contrato<83520){
		  	                  cep=2088;
		                     }
		  else  cep=total_contrato*0.035;
                timbrado=total_contrato*0.011;
                caitba=total_contrato*0.1;
	            total_gastos=cep+timbrado+caitba;
    cuadro(9,46,8,66);
    gotoxy(77,7);cout<<"MOSTRANDO HONORARIOS"<<endl;
    gotoxy(69,9);printf("Monto de la obra                 $");
    cout.precision(7);
    gotoxy(69,10);cout<<"Hasta $ "<<hasta;gotoxy(102,10);cout<<"$ "<<total_hasta;
    gotoxy(69,11);cout<<"el "<<porc<<"% s/los sig. $ "<<siguientes;
	gotoxy(102,11);cout<<"$ "<<total_siguientes;
	gotoxy(69,12);cout<<"                         Total   $ ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
    gotoxy(104,12);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	gotoxy(69,13);cout<<"Proyecto  60%                    $";
	gotoxy(69,14);cout<<"Direccion 40%                    $";
	gotoxy(69,15);cout<<"Suplemento dir. cont. separado   $";
	gotoxy(69,16);cout<<"TOTAL CONTRATO                   $";
	mostrar_ceptimbrado();
    cout.precision(7);
   	gotoxy(104,9);cout<<monto_obra; 
   	gotoxy(104,13);cout<<proyecto;
   	gotoxy(104,14);cout<<direccion;
	gotoxy(104,15);cout<<direccion_sep;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,16);cout<<total_contrato;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	cout.precision(5);
	gotoxy(104,21);cout<<cep;
	gotoxy(104,22);cout<<timbrado;
	gotoxy(104,23);cout<<caitba;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,24);cout<<total_gastos;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	getch();
}
void mostrar_resultadospyd2(){
	direccion_sep=0;
	monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
    proyecto=monto_obrafinal*0.5;
    direccion=monto_obrafinal*0.3;	
    direccion_eje=direccion*2;
    total_contrato=proyecto+direccion+direccion_eje;
    if (total_contrato<18288){
                              cep=1120;
                             }
		  else if (total_contrato<83520){
		  	                  cep=2088;
		                     }
		  else  cep=total_contrato*0.025;
                timbrado=total_contrato*0.011;
                caitba=total_contrato*0.1;
	            total_gastos=cep+timbrado+caitba;
    cuadro(9,46,8,66);
    gotoxy(77,7);cout<<"MOSTRANDO HONORARIOS"<<endl;
    gotoxy(69,9);printf("Monto de la obra                 $");
    cout.precision(7);
    gotoxy(69,10);cout<<"Hasta $ "<<hasta;gotoxy(102,10);cout<<"$ "<<total_hasta;
    gotoxy(69,11);cout<<"el "<<porc<<"% s/los sig. $ "<<siguientes;
	gotoxy(102,11);cout<<"$ "<<total_siguientes;
	gotoxy(69,12);cout<<"                         Total   $ ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
    gotoxy(104,12);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	gotoxy(69,13);printf("Proyecto  50%                    $");
	gotoxy(69,14);printf("Direccion 30%                    $");
	gotoxy(69,15);printf("Suplemento dir. ejecutiva        $");
	gotoxy(69,16);printf("TOTAL CONTRATO                   $");
	mostrar_ceptimbrado();
	cout.precision(7);
   	gotoxy(104,9);cout<<monto_obra; 
   	gotoxy(104,13);cout<<proyecto;
   	gotoxy(104,14);cout<<direccion;
    gotoxy(104,15);cout<<direccion_eje;
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,16);cout<<total_contrato;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	cout.precision(5);
	gotoxy(104,21);cout<<cep;
	gotoxy(104,22);cout<<timbrado;
	gotoxy(104,23);cout<<caitba;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,24);cout<<total_gastos;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	getch();
}
void mostrar_resultadospyd3(){
	direccion_eje=0;
	direccion_sep=0;
	monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
    proyecto=monto_obrafinal*0.6;
    direccion=monto_obrafinal*0.4;	
    total_contrato=proyecto+direccion;
    cep=total_contrato*0.025;
	timbrado=total_contrato*0.011;
	if (total_contrato<18288){
                              cep=1120;
                             }
		  else if (total_contrato<83520){
		  	                  cep=2088;
		                     }
		  else  cep=total_contrato*0.025;
                timbrado=total_contrato*0.011;
                caitba=total_contrato*0.1;
	            total_gastos=cep+timbrado+caitba;
    cuadro(9,46,8,66);
    gotoxy(77,7);cout<<"MOSTRANDO HONORARIOS"<<endl;
    gotoxy(69,9);printf("Monto de la obra                 $");
    cout.precision(7);
    gotoxy(69,10);cout<<"Hasta $ "<<hasta;gotoxy(102,10);cout<<"$ "<<total_hasta;
    gotoxy(69,11);cout<<"el "<<porc<<"% s/los sig. $ "<<siguientes;
	gotoxy(102,11);cout<<"$ "<<total_siguientes;
	gotoxy(69,12);cout<<"                         Total   $ ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
    gotoxy(104,12);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	gotoxy(69,13);printf("Proyecto  60%                    $");
	gotoxy(69,14);printf("Direccion 40%                    $");
	gotoxy(69,15);printf("TOTAL CONTRATO                   $");
	mostrar_ceptimbrado();
	cout.precision(7);
   	gotoxy(104,9);cout<<monto_obra; 
   	gotoxy(104,13);cout<<proyecto;
   	gotoxy(104,14);cout<<direccion;
   	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,15);cout<<total_contrato;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	cout.precision(5);
	gotoxy(104,21);cout<<cep;
	gotoxy(104,22);cout<<timbrado;
	gotoxy(104,23);cout<<caitba;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,24);cout<<total_gastos;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	getch();
}
void mostrar_resultados_art29(float computoypresup){
    cuadro(6,46,10,66);
    total_computoypresup=computoypresup*10/100;
    gotoxy(77,9);cout<<"MOSTRANDO RESULTADOS"<<endl;
    gotoxy(69,11);printf("Monto de la obra                $");
	gotoxy(69,12);printf("Articulo (29) 10%               $");
	gotoxy(69,14);printf("TOTAL A PAGAR                   $");
	cout.precision(7);
	gotoxy(103,11);cout<<computoypresup; 
	gotoxy(103,12);cout<<total_computoypresup;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(103,14);cout<<total_computoypresup;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
    getch();
}
void mostrar_resultados_art29bis(){
    cuadro(6,46,10,66);
	monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
    total_art29=monto_obra*10/100;
    gotoxy(77,9);cout<<"MOSTRANDO RESULTADOS"<<endl;
    gotoxy(69,11);printf("Monto de la obra                $");
	gotoxy(69,12);printf("Articulo (29) 10%               $");
	gotoxy(69,14);printf("TOTAL A PAGAR                   $");
    	cout.precision(7);
   	gotoxy(103,11);cout<<monto_obra; 
   	gotoxy(103,12);cout<<total_art29;
   	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
   	gotoxy(103,14);cout<<total_art29; 
   	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	getch();
}
void mostrar_resultadosmed(float monto_obrafinal){
	monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
	informetec=incisoa+incisob;
    total_contrato=monto_obrafinal+informetec;
	if (total_contrato<18288){
                              cep=1120;
                             }
		  else if (total_contrato<83520){
		  	                  cep=2088;
		                     }
		  else  cep=total_contrato*0.035;
                timbrado=total_contrato*0.011;
                caitba=total_contrato*0.1;
	            total_gastos=cep+timbrado+caitba;
    cuadro(9,46,8,66);
    gotoxy(77,7);cout<<"MOSTRANDO HONORARIOS"<<endl;
    gotoxy(69,9);printf("Monto de la obra                 $");
    cout.precision(7);
    gotoxy(69,10);cout<<"Hasta $ "<<hasta;gotoxy(102,10);cout<<"$ "<<total_hasta;
    gotoxy(69,11);cout<<"el "<<porc<<"% s/los sig. $ "<<siguientes;
	gotoxy(102,11);cout<<"$ "<<total_siguientes;
	gotoxy(69,12);cout<<"                         Total   $ ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
    gotoxy(104,12);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	gotoxy(69,13);cout<<"Medicion                         $";
	gotoxy(69,14);cout<<"Informe Tecnico                  $";
	gotoxy(69,15);cout<<"TOTAL CONTRATO                   $";
	mostrar_ceptimbrado();
	cout.precision(7);
   	gotoxy(104,9);cout<<monto_obra; 
   	gotoxy(104,13);cout<<monto_obrafinal;
   	gotoxy(104,14);cout<<informetec;
   	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,15);cout<<total_contrato;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	 	cout.precision(5);
	gotoxy(104,21);cout<<cep;
	gotoxy(104,22);cout<<timbrado;
	gotoxy(104,23);cout<<caitba;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,24);cout<<total_gastos;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	getch();
}   
void mostrar_resultadosdemolicion(float coeficiente){
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
		monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
		monto_demolicion=monto_obrafinal*coeficiente;
		direccion_demolicion=monto_demolicion*0.16;
		suplemento_demolicion=direccion_demolicion*2;
	    total_contrato=suplemento_demolicion+direccion_demolicion;	
    if (total_contrato<18288){
                              cep=1120;
                             }
		  else if (total_contrato<83520){
		  	                  cep=2088;
		                     }
		  else  cep=total_contrato*0.025;
                timbrado=total_contrato*0.011;
                caitba=total_contrato*0.1;
	            total_gastos=cep+timbrado+caitba;
    cuadro(8,46,9,66);
    gotoxy(77,8);cout<<"MOSTRANDO HONORARIOS"<<endl;
    gotoxy(69,10);printf("Monto de la obra                 $");
    cout.precision(7);
    gotoxy(69,11);cout<<"Hasta $ "<<hasta;gotoxy(102,11);cout<<"$ "<<total_hasta;
    gotoxy(69,12);cout<<"el "<<porc<<"% s/los sig. $ "<<siguientes;
	gotoxy(102,12);cout<<"$ "<<total_siguientes;
	gotoxy(69,13);cout<<"                         Total   $ ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,13);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	gotoxy(69,14);cout<<"Direccion de demolicion  (16%)   $";
	gotoxy(69,15);cout<<"Suplemento dir. ejecutiva        $";
	gotoxy(69,16);cout<<"TOTAL CONTRATO                   $";
	mostrar_ceptimbrado();
	cout.precision(7); 
   	gotoxy(104,10);cout<<monto_obra; 
   	gotoxy(104,14);cout<<direccion_demolicion;
    gotoxy(104,15);cout<<suplemento_demolicion;
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,16);cout<<total_contrato;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	cout.precision(5);
	gotoxy(104,21);cout<<cep;
	gotoxy(104,22);cout<<timbrado;
	gotoxy(104,23);cout<<caitba;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,24);cout<<total_gastos;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	getch();
}
void mostrar_resultadoscon(){
	 monto_obra=(sup_cub*valor)+(sup_scub*(valor/2));
     total_contrato=monto_obrafinal;
	 if (total_contrato<18288){
                              cep=1120;
                             }
		  else if (total_contrato<83520){
		  	                  cep=2088;
		                     }
		  else  cep=total_contrato*0.025;
                timbrado=total_contrato*0.011;
                caitba=total_contrato*0.1;
	            total_gastos=cep+timbrado+caitba;
    cuadro(8,46,9,66);
    gotoxy(77,8);cout<<"MOSTRANDO HONORARIOS"<<endl;
    gotoxy(69,10);printf("Monto de la obra                 $");
    cout.precision(7);
    gotoxy(69,11);cout<<"Hasta $ "<<hasta;gotoxy(102,11);cout<<"$ "<<total_hasta;
    gotoxy(69,12);cout<<"el "<<porc<<"% s/los sig. $ "<<siguientes;
	gotoxy(102,12);cout<<"$ "<<total_siguientes;
	gotoxy(69,13);cout<<"                         Total   $ ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,13);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	gotoxy(69,14);printf("Construccion                     $");
	gotoxy(69,15);printf("TOTAL CONTRATO                   $");
	mostrar_ceptimbrado();
	cout.precision(7);
	gotoxy(104,10);cout<<monto_obra; 
	gotoxy(104,14);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,15);cout<<monto_obrafinal;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	cout.precision(5);
	gotoxy(104,21);cout<<cep;
	gotoxy(104,22);cout<<timbrado;
	gotoxy(104,23);cout<<caitba;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(104,24);cout<<total_gastos;
	 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
	getch();
}
void mostrar_resultados(string tarea,float are,float cal,float calaer,float cem,float pie,float cas,float hierro6,float hierro8,float hierro10,float alam,float ladcomun,float ladhueco,float bloque ){
	cuadro(18,65,7,20);
    system("color 0f");
    gotoxy(21,8); cout<<"                                                                "<<endl;
	gotoxy(21,9); cout<<"                                                                "<<endl;
    gotoxy(21,10);cout<<"                                                                "<<endl;
	gotoxy(21,11);cout<<"                                                                "<<endl;
	gotoxy(21,12);cout<<"                                                                "<<endl;
	gotoxy(21,13);cout<<"                                                                "<<endl;
	gotoxy(21,14);cout<<"                                                                "<<endl;
	gotoxy(21,15);cout<<"                                                                "<<endl;
	gotoxy(21,16);cout<<"                                                                "<<endl;
	gotoxy(21,17);cout<<"                                                                "<<endl;
	gotoxy(21,18);cout<<"                                                                "<<endl;
	gotoxy(21,19);cout<<"                                                                "<<endl;
	gotoxy(21,20);cout<<"                                                                "<<endl;
	gotoxy(21,21);cout<<"                                                                "<<endl;
    gotoxy(21,22);cout<<"                                                                "<<endl;
	gotoxy(21,23);cout<<"                                                                "<<endl;
    gotoxy(21,24);cout<<"                                                                "<<endl;
	 boton(2,11,11,67);
     boton(2,11,14,67);
     boton(2,11,17,67);                                                                                     
  	gotoxy(22,9);cout<<"MOSTRANDO RESULTADOS PARCIALES";
	gotoxy(22,10);cout<<"Tarea: "<<tarea<<endl;  
	cout.precision(2);                                                                                     
	gotoxy(22,11);cout<<"arena:              ";gotoxy(51,11);cout<<" m3"<<endl;
	gotoxy(22,12);cout<<"cal:                ";gotoxy(51,12);cout<<" bolsas"<<endl;
    gotoxy(22,13);cout<<"cal aerea:          ";gotoxy(51,13);cout<<" bolsas"<<endl;
    gotoxy(22,14);cout<<"cemento:            ";gotoxy(51,14);cout<<" bolsas"<<endl;
	gotoxy(22,15);cout<<"piedra:             ";gotoxy(51,15);cout<<" m3"<<endl;;
	gotoxy(22,16);cout<<"cascote:            ";gotoxy(51,16);cout<<" m3"<<endl;
	gotoxy(22,17);cout<<"hierro 6:           ";gotoxy(51,17);cout<<" varillas"<<endl;
	gotoxy(22,18);cout<<"hierro 8:           ";gotoxy(51,18);cout<<" varillas"<<endl;
	gotoxy(22,19);cout<<"hierro 10:          ";gotoxy(51,19);cout<<" varillas"<<endl;
	gotoxy(22,20);cout<<"alambre negro:      ";gotoxy(51,20);cout<<" kg"<<endl;
	cout.precision(5);  
	gotoxy(22,21);cout<<"ladrillos comunes:  ";gotoxy(51,21);cout<<" unidades"<<endl;
	gotoxy(22,22);cout<<"ladrillos huecos:   ";gotoxy(51,22);cout<<" unidades"<<endl;
	gotoxy(22,23);cout<<"ladrillos bloque:   ";gotoxy(51,23);cout<<" unidades"<<endl;	
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(41,11);cout<<are;
	gotoxy(41,12);cout<<cal;
	gotoxy(41,13);cout<<calaer;
    gotoxy(41,14);cout<<cem;
	gotoxy(41,15);cout<<pie;
	gotoxy(41,16);cout<<cas;
	gotoxy(41,17);cout<<hierro6;
	gotoxy(41,18);cout<<hierro8;
	gotoxy(41,19);cout<<hierro10;
	gotoxy(41,20);cout<<alam;
	cout.precision(5);  
	gotoxy(41,21);cout<<ladcomun;
	gotoxy(41,22);cout<<ladhueco;
	gotoxy(41,23);cout<<bloque;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
}
void  mostrar_resultados_2(string tarea,float sol35,float mon35,float sol70,float mon70,float placa,float omega,float t1,float t2,float fijaciones,float masilla,float cinta){
	cuadro(18,65,7,20);
    system("color 0f");
    gotoxy(21,8); cout<<"                                                                "<<endl;
	gotoxy(21,9); cout<<"                                                                "<<endl;
    gotoxy(21,10);cout<<"                                                                "<<endl;
	gotoxy(21,11);cout<<"                                                                "<<endl;
	gotoxy(21,12);cout<<"                                                                "<<endl;
	gotoxy(21,13);cout<<"                                                                "<<endl;
	gotoxy(21,14);cout<<"                                                                "<<endl;
	gotoxy(21,15);cout<<"                                                                "<<endl;
	gotoxy(21,16);cout<<"                                                                "<<endl;
	gotoxy(21,17);cout<<"                                                                "<<endl;
	gotoxy(21,18);cout<<"                                                                "<<endl;
	gotoxy(21,19);cout<<"                                                                "<<endl;
	gotoxy(21,20);cout<<"                                                                "<<endl;
	gotoxy(21,21);cout<<"                                                                "<<endl;
    gotoxy(21,22);cout<<"                                                                "<<endl;
	gotoxy(21,23);cout<<"                                                                "<<endl;
    gotoxy(21,24);cout<<"                                                                "<<endl;
	 boton(2,11,11,67);
     boton(2,11,14,67);
     boton(2,11,17,67);                                                                                     
  	gotoxy(22,9);cout<<"MOSTRANDO RESULTADOS PARCIALES";
	gotoxy(22,10);cout<<"Tarea: "<<tarea<<endl;                                                                                     
	gotoxy(22,11);cout<<"Solera 35mm                  ";gotoxy(56,11);cout<<" un"<<endl;
	gotoxy(22,12);cout<<"Montante 34mm                ";gotoxy(56,12);cout<<" un"<<endl;
    gotoxy(22,13);cout<<"Solera 70mm                  ";gotoxy(56,13);cout<<" un"<<endl;
    gotoxy(22,14);cout<<"Montante 69mm                ";gotoxy(56,14);cout<<" un"<<endl;
	gotoxy(22,15);cout<<"Omega                        ";gotoxy(56,15);cout<<" un"<<endl;;
	gotoxy(22,16);cout<<"Placa yeso (1.2/0.9)         ";gotoxy(56,16);cout<<" un"<<endl;
	gotoxy(22,17);cout<<"Tornillos T1                 ";gotoxy(56,17);cout<<" un x100"<<endl;
	gotoxy(22,18);cout<<"Tornillos T2                 ";gotoxy(56,18);cout<<" un x100"<<endl;
	gotoxy(22,19);cout<<"Fijaciones (tarugo+tormillo) ";gotoxy(56,19);cout<<" un x100"<<endl;
	gotoxy(22,20);cout<<"Masilla                      ";gotoxy(56,20);cout<<" un x32g"<<endl;
	gotoxy(22,21);cout<<"Cinta tramada/papel          ";gotoxy(56,21);cout<<" un x75mts"<<endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	cout.precision(3);  
	gotoxy(51,11);cout<<sol35;
	gotoxy(51,12);cout<<mon35;
	gotoxy(51,13);cout<<sol70;
    gotoxy(51,14);cout<<mon70;
	gotoxy(51,15);cout<<omega;
	gotoxy(51,16);cout<<placa;
	gotoxy(51,17);cout<<t1;
	gotoxy(51,18);cout<<t2;
	gotoxy(51,19);cout<<fijaciones;
	gotoxy(51,20);cout<<masilla;
	gotoxy(51,21);cout<<cinta;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);	
}
void mostrar_ceptimbrado(){
	cuadro(5,46,20,66);
    gotoxy(74,19);cout<<"MOSTRANDO GASTOS PROFESIONAL"<<endl;
    gotoxy(69,21);cout<<"C.E.P.                           $";
	gotoxy(69,22);cout<<"Timbrado  (1,1%)                 $";
	gotoxy(69,23);cout<<"Aportes C.A.I.T.B.A.             $";
   	gotoxy(69,24);cout<<"TOTAL GASTOS                     $";
}
void mostrar_ventana_deseaguardar(){
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(67,4);cout<<"      Desea guardar el computo? (s/n)        ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
}
void fondo_menu_ppal(){
	system("cls");
	system ("color 0f");
	cuadro(26,115,2,2);
	gotoxy(4,3);cout<<"<<< Sistema de calculos para MMO & ARQ >>>";
	gotoxy(4,27);cout<<"Creado por: MMO Gustavo Daniel Beltran - mat: 47820 - cel: (0223) 155-827063 - e-mail: gustavodbeltran@gmail.com"<<endl;
	cuadro(15,38,7,36);
	boton(2,31,9,40);
    boton(2,31,12,40);
    boton(2,31,15,40);
    boton(2,31,18,40);
    gotoxy(43,10);printf("enerar computo de materiales");
	gotoxy(43,13);printf("uscar un computo guardado");
	gotoxy(43,16);printf("alcular tareas profesionales");
	gotoxy(43,19);printf("alir del sistema");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),75);
    gotoxy(42,10);printf("G");
    gotoxy(42,13);printf("B");
    gotoxy(42,16);printf("C");
    gotoxy(42,19);printf("S");
    gotoxy(119,29);
}
void fondo_sub_menu1(){
	system ("color 0f");
	cuadro(10,32,8,77);
	boton(2,29,9,78);
    boton(2,29,12,78);
    boton(2,29,15,78);
    gotoxy(81,10);printf("onstruccion tradicional");
	gotoxy(81,13);printf("teel framming / en seco");
	gotoxy(81,16);printf("olver al menu");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),75);
    gotoxy(80,10);printf("C");
    gotoxy(80,13);printf("S");
    gotoxy(80,16);printf("V");
    gotoxy(119,29);
}
void fondo_sub_menu3(){
	system ("color 0f");
	borrar_fondosubmenu();
	cuadro(19,32,5,77);
	boton(2,29,6,78);
    boton(2,29,9,78);
    boton(2,29,12,78);
    boton(2,29,15,78);
    boton(2,29,18,78);
    boton(2,29,21,78);
    gotoxy(81,7);printf("royecto y direccion");
    gotoxy(81,10);cout<<"emolicion";
	gotoxy(81,13);printf("edicion e inf. tecnico");
	gotoxy(81,16);printf("rticulo 29");
	gotoxy(81,19);printf("onstruccion");
	gotoxy(81,22);printf("olver al menu");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),75);
    gotoxy(80,7);printf("P");
    gotoxy(80,10);cout<<"D";
    gotoxy(80,13);printf("M");
    gotoxy(80,16);printf("A");
    gotoxy(80,19);printf("C");
    gotoxy(80,22);printf("V");
    gotoxy(119,29);
}
void fondo_computos(){
	cuadro(27,118,0,0);
   	gotoxy(58,0);cout<<"[ SISTEMA DE COMPUTO DE MATERIALES CONSTRUCCION TRADICIONAL]"<<endl;
    gotoxy(2,2);cout<<"     <<CIMIENTOS>>"<<endl;
	gotoxy(2,3);cout<<"1.-  zapata corrida de hormigon de cascote               largo (mts) [_____] ancho (mts) [____] alto (mts) [____]"<<endl;
	gotoxy(2,4);cout<<"2.-  Viga de fundacion 20x20                             largo (mts) [_____] "<<endl;
	gotoxy(2,5);cout<<"3.-  Pilotines de 25 cm de diametro                      largo (mts) [_____] cantidad (unidades) [_____]"<<endl;
	gotoxy(2,6);cout<<"     <<ENCADENADOS>>"<<endl;
	gotoxy(2,7);cout<<"4.-  Inferior/superior/vigas                             largo (mts) [_____] seccion (cm) [___] [___]"<<endl;
  	gotoxy(2,8);cout<<"5.-  Refuerzo vertical/columnas                          largo (mts) [_____] seccion (cm) [___] [___]"<<endl;
  	gotoxy(2,9);cout<<"     <<PISOS>>"<<endl;
	gotoxy(2,10);cout<<"6.-  Contrapiso                                          largo (mts) [_____] ancho (mts) [_____] alto (mts) [____]"<<endl;
	gotoxy(2,11);cout<<"7.-  Carpeta hidrofuga s/contrapiso (espesor 2cm)        largo (mts) [_____] ancho (mts) [_____]"<<endl;
  	gotoxy(2,12);cout<<"8.-  Alisado de cemento para piso (espesor 2cm)          largo (mts) [_____] ancho (mts) [_____]"<<endl;
	gotoxy(2,13);cout<<"9.-  Colocacion de Mosaicos y Baldosas (espesor 1/2cm)   largo (mts) [_____] ancho (mts) [_____]"<<endl;
	gotoxy(2,14);cout<<"     <<PAREDES>>"<<endl;
	gotoxy(2,15);cout<<"10.- Azotado hidrofugo bajo revoque                      superficie (m2) [_____]"<<endl;
	gotoxy(2,16);cout<<"11.- Revoque grueso (espesor 1.5)                        superficie (m2) [_____]"<<endl;
	gotoxy(2,17);cout<<"12.- Revoque fino   (espesor 0.5 cm)                     superficie (m2) [_____]"<<endl;
	gotoxy(2,18);cout<<"13.- Tabique de canto (ladrillo comun)                   largo (mts) [_____] alto (mts) [_____]"<<endl;
	gotoxy(2,19);cout<<"14.- Tabique de 10    (ladrillo hueco)                   largo (mts) [_____] alto (mts) [_____]"<<endl;
    gotoxy(2,20);cout<<"15.- tabique de 10    (bloque cemento)                   largo (mts) [_____] alto (mts) [_____]"<<endl;
	gotoxy(2,21);cout<<"16.- Pared de 15      (ladrillo comun)                   largo (mts) [_____] alto (mts) [_____]"<<endl;
	gotoxy(2,22);cout<<"17.- Pared de 30      (ladrillo comun)                   largo (mts) [_____] alto (mts) [_____]"<<endl;
	gotoxy(2,23);cout<<"18.- Pared 12/18/25   (ladrillo hueco)                   largo (mts) [_____] alto (mts) [_____]"<<endl;
    gotoxy(2,24);cout<<"19.- Pared de 20      (bloque cemento)                   largo (mts) [_____] alto (mts) [_____]"<<endl; 
	gotoxy(20,26);cout<<"INGRESE EL COMPUTO QUE DESEA REALIZAR (cero para salir):  [__]";
}
void fondo_computos_2(){
	cuadro(27,118,0,0);
   	gotoxy(60,0);cout<<"[ SISTEMA DE COMPUTO DE MATERIALES CONSTRUCCION EN SECO ]"<<endl;
    gotoxy(2,2); cout<<"     <<CIELORASOS>>"<<endl;
	gotoxy(2,3); cout<<"1.-  Cieloraso con junta tomada                          largo (mts) [_____] ancho (mts) [____]"<<endl;
	gotoxy(2,4); cout<<"2.-  Cieloraso desmontable                               largo (mts) [_____] ancho (mts) [____]"<<endl;
	gotoxy(2,6); cout<<"     <<TABIQUES>>"<<endl;
	gotoxy(2,7); cout<<"3.-  Tabique solera 35mm (placa una sola cara)           alto (mts)  [_____] largo (mts) [____]"<<endl;
  	gotoxy(2,8); cout<<"4.-  Tabique solera 35mm (placa dos caras)               alto (mts)  [_____] largo (mts) [____]"<<endl;
  	gotoxy(2,9); cout<<"5.-  Tabique solera 70mm (placa dos caras)               alto (mts)  [_____] largo (mts) [____]"<<endl;
	gotoxy(2,10);cout<<"6.-  Tabique solera 70mm (placa dos caras)               alto (mts)  [_____] largo (mts) [____]"<<endl;
    gotoxy(2,12); cout<<"     <<REVESTIMIENTOS>>"<<endl;
  	gotoxy(2,13);cout<<"7.-  Revestimiento pared (perfil omega)                  alto (mts)  [_____] largo (mts) [____]"<<endl;
	gotoxy(20,15);cout<<"INGRESE EL COMPUTO QUE DESEA REALIZAR (cero para salir):  [__]";
}
void borrar_fondosubmenu(){
	system ("color 0f");
	gotoxy(77,9); printf("                                   ");
	gotoxy(77,10);printf("                                   ");
	gotoxy(77,11);printf("                                   ");
	gotoxy(77,12);printf("                                   ");
	gotoxy(77,13);printf("                                   ");
	gotoxy(77,14);printf("                                   ");
	gotoxy(77,15);printf("                                   ");
	gotoxy(77,16);printf("                                   ");
	gotoxy(77,17);printf("                                   ");
	gotoxy(77,18);printf("                                   ");
	gotoxy(77,19);printf("                                   ");
}
void ventana_guardar_volver_cancelar(){
	gotoxy(69,12);printf("uardar   ");
	gotoxy(69,15);printf("gregar   ");
	gotoxy(69,18);printf("ancelar  ");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),75);
    gotoxy(68,12);printf("G");
    gotoxy(68,15);printf("A");
    gotoxy(68,18);printf("C");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
}

void ventana_nosepudoabrirelarchivo(){
	system("color 0f");
	cuadro(4,45,11,30);
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),75);
	gotoxy(31,12);cout<<"                                            ";
	gotoxy(31,13);cout<<"                                            ";
	gotoxy(31,14);cout<<"                                            ";
	gotoxy(31,13);cout<<"    << NO SE PUDO ABRIR EL ARCHIVO >>";
	getch();
}
void ventana_elarchivoseguardocorrectamente(){
	system("color 0f");
	cuadro(4,45,11,30);
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(31,12);cout<<"                                            ";
	gotoxy(31,13);cout<<"                                            ";
	gotoxy(31,14);cout<<"                                            ";
	gotoxy(31,13);cout<<"  << EL ARCHIVO SE GUARDO CORRECTAMENTE >>  ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
    gotoxy(119,29);getch();
}
void ventana_salida(){
	system("cls");
	system("color 0f");
	cuadro(8,80,10,24);
	gotoxy(35,13);cout<<"<< saliste de SISTEMA DE COMPUTO DE MATERIALES >> ";
	gotoxy(45,14);cout<<"<<   Tus datos no se han guardado     >> ";
	gotoxy(78,14);	getch();
}
void ventana_elarchivoseguardocorrectamente_pyd(){
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(67,4);cout<<"  << EL ARCHIVO SE GUARDO CORRECTAMENTE >>   ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
    gotoxy(119,29);getch();	
}
void ventana_guardar_archivo(){
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(31,12);cout<<"                                            ";
	gotoxy(31,13);cout<<"                                            ";
	gotoxy(31,14);cout<<"                                            ";
	gotoxy(31,13);cout<<"      Guardar como: ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
}
void ventana_guardar_archivo_pyd(){
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(67,4);cout<<"      Guardar como:                         ";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
}
void ventana_salida_pyd(){
	system("cls");
	cuadro(8,80,10,24);
	gotoxy(35,13);cout<<"<< saliste de SISTEMA DE CALCULO DE HONORARIOS >> ";
	gotoxy(45,14);cout<<"<<   Tus datos no se han guardado     >> ";
	gotoxy(78,14);	getch();
}

