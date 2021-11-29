#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>  
#include <windows.h> 
#include <fstream>
#include "mmosis.h"
#include "calculos.h"
#include "ficheros.h"

using namespace std;

int contrasenia,categoria;
char usuario[20],sn;
int opcion;
char tecla,nombrecomputo[20];
long long computoypresup;	

void menu_ppal();
void sub_menu1();
void computos();
void computos_2();
void guardar_volver_cancelar();
void guardar_archivo();
void salida();
void sub_menu2();
void sub_menu3();
void pyd();
void proyectoydireccion();
void verificar();
void verificar2();
void guardar_volver_cancelar_2();
void desea_guardar_pyd();
void guardar_archivo_pyd();
void salida_pyd();
void art_29();
void ingresar_sup();
void desea_guardar_art29();
void desea_guardar_art29bis();
void guardar_archivo_art29();
void medicion();
void desea_guardarmed();
void guardar_archivo_med();
void demolicion();
void desea_guardardemolicion();
void guardar_archivo_demolicion();
void imprimir_contrato_tareas();
void desea_modificar();
void contrato();
void desea_imprimir_contrato();
void construccion();
void desea_guardarcon();

int main () {
	login();
    menu_ppal();	
return 0;
}
void menu_ppal(){
	fondo_menu_ppal();
		while(tecla!=27){
		tecla=getch();
		if(tecla==0)
		tecla=getch();
		else 
		switch(tecla)
		{case 71:
			sub_menu1();
			break;
		case 103:
			sub_menu1();
			break;
		case 66:
		   sub_menu2();
			break;
		case 98:
		sub_menu2();
		case 67:
		    sub_menu3();
			break;
		case 99:
		    sub_menu3();
			break;
		case 83:
			system("cls");
			login();
			break;
		case 115:
			system("cls");
			login();
			break;
		}
	}	
}
void sub_menu1(){
	fondo_sub_menu1();
  		while(tecla!=27){
		tecla=getch();
		if(tecla==0)
		tecla=getch();
		else 
		switch(tecla)
		{case 67:
			computos();
			break;
		case 99:
			computos();
			break;
		case 83:
		    computos_2();
			break;
		case 115:
	    	computos_2();
		case 86:
		    menu_ppal();
			break;
		case 118:
		    menu_ppal();
			break;
		
		}
	} 
}
	void computos(){
	ancho=0,lar=0,alt=0,aux=0,m3=0,m2=0;
    cal=0,calaer=0,are=0,cem=0,cas=0,pie=0,sup=0,ladcomun=0,ladhueco=0,bloque=0;
    xx=0,yy=0,hierro6=0,hierro8=0,hierro10=0,alam=0;
	fflush(stdin);
	system("color 0f");
 do {
 	system("cls");
 	fondo_computos();
 	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(79,26);cin>>opcion;	fflush(stdin);
	switch (opcion){
		case 1 : 
		    zapata();
		    mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
		    totales();
		    guardar_volver_cancelar();
		    break;
		case 2: 
	     	viga_fundacion();
	       	mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
	        totales();
	      guardar_volver_cancelar();
	     	break;
	    case 3:
	    	pilotines();
	    	mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
	    	 totales();
	     guardar_volver_cancelar();
		   break;
		case 4:
			encadenados();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 5:
		    refuerzo_vertical();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
		     totales();
		 guardar_volver_cancelar();
			break;
		case 6:
			contrapiso();
		   	mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 7:
			Carpeta_hidrofuga();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 8:
		    Alisado_cemento();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
		     totales();
		 guardar_volver_cancelar();
			break;
		case 9:
		    Mosaicos_Baldosas();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque );
		     totales();
		 guardar_volver_cancelar();
			break;
		case 10:
		    Azotado_hidrofugo();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
		     totales();
		 guardar_volver_cancelar();
			break;
		case 11:
		    Revoque_grueso();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
		     totales();
			 guardar_volver_cancelar();
			break;
		case 12:
		    Revoque_fino();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
		     totales();
		 guardar_volver_cancelar();
			break;
		case 13:
			Tabique_comun(); 
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 14:
			Tabique_hueco();
	    	mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 15:
			Tabique_cemento();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
	     guardar_volver_cancelar();
			break;
		case 16:
			pared_15comun();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 17:
			pared_30comun();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 18:
			pared_hueco();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 19:
			pared_cemento();
			mostrar_resultados(tarea,are,cal,calaer,cem,pie,cas,hierro6,hierro8,hierro10,alam,ladcomun,ladhueco,bloque);
			 totales();
		 guardar_volver_cancelar();
			break;
		case 0:
			menu_ppal();
			break;
	}
} while (opcion <0 || opcion >19);
}
void guardar_volver_cancelar(){
	ventana_guardar_volver_cancelar();
    gotoxy(119,29);	fflush(stdin);
		while(tecla!=27){
		tecla=getch();
		if(tecla==0)
		tecla=getch();
		else 
		switch(tecla)
		{case 71:
			guardar_archivo();
			ventana_elarchivoseguardocorrectamente();
        	menu_ppal();
			break;
			case 103:
			guardar_archivo();
			ventana_elarchivoseguardocorrectamente();
        	menu_ppal();
			break;
		case 65:
			computos();
			break;
		case 97:
			computos();
			break;
		case 67:
			salida();
			menu_ppal();
			break;
		case 99:
			salida();
			menu_ppal();
			break;
		}
		salida();
	}	
}
void salida(){
	ventana_salida();
	menu_ppal();
}
void computos_2(){
	ancho=0,lar=0,alt=0,aux=0,m2=0;
    sol35=0,mon35=0,sol70=0,mon70=0,placa=0,omega=0,t1=0,t2=0,fijaciones=0,masilla=0,cinta=0;
	fflush(stdin);
	system("color 0f");
 do {
 	system("cls");
 	fondo_computos_2();
 	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),015);
	gotoxy(79,15);cin>>opcion;	fflush(stdin);
	switch (opcion){
		case 1 : 
		    cieloraso_juntatomada();
		    mostrar_resultados_2(tarea,sol35,mon35,sol70,mon70,placa,omega,t1,t2,fijaciones,masilla,cinta);
		    totales_2();
		    guardar_volver_cancelar_2();
		    break;
		case 2: 
		    menu_ppal();
	     	break;
	    case 3:
		    menu_ppal();
		   break;
		case 4:
		    menu_ppal();
			break;
		case 5:
		    menu_ppal();
			break;
		case 6:
		    menu_ppal();
			break;
		case 7:
		    menu_ppal();
			break;
	    case 0:
			menu_ppal();
			break;
	}
} while (opcion <0 || opcion >7);
}
void guardar_volver_cancelar_2(){
	ventana_guardar_volver_cancelar();
    gotoxy(119,29);	fflush(stdin);
		while(tecla!=27){
		tecla=getch();
		if(tecla==0)
		tecla=getch();
		else 
		switch(tecla)
		{case 71:
			guardar_archivo_2();
			ventana_elarchivoseguardocorrectamente();
        	menu_ppal();
			break;
		case 103:
			guardar_archivo_2();
			ventana_elarchivoseguardocorrectamente();
        	menu_ppal();
			break;
		case 65:
			computos_2();
			break;
		case 97:
			computos_2();
			break;
		case 67:
			salida();
			menu_ppal();
			break;
		case 99:
			salida();
			menu_ppal();
			break;
		}
		salida();
	}	
}
void sub_menu2(){
	leer_archivo();
	gotoxy(119,29);	getch();
	menu_ppal();
}
void sub_menu3(){
	fondo_sub_menu3();
    	while(tecla!=27){
		tecla=getch();
		if(tecla==0)
		tecla=getch();
		else 
		switch(tecla)
		{case 80:
			system("cls");
			pyd();
			break;
		case 112:
			system("cls");
			pyd();
			break;
		case 77:
	    	system("cls");
			medicion();
			break;
		case 109:
			system("cls");
			medicion();
			break;
		case 65:
		   system("cls");
			art_29();
			break;
		case 97:
		    system("cls");
			art_29();
			break;
		case 68:
		   system("cls");
			demolicion();
			break;
		case 100:
		    system("cls");
			demolicion();
			break;
		case 67:
		    system("cls");
			construccion();
			break;
		case 99:
		    system("cls");
			construccion();
			break;
		case 86:
		    menu_ppal();
			break;
		case 118:
		    menu_ppal();
			break;
		}
	}	
}
void pyd() {
	fondo_proyectoydireccion();
	proyectoydireccion();
	if (categoria==0){menu_ppal();
	}
    verificar();   
}
void proyectoydireccion(){
	monto_obra=0,proyecto=0,direccion=0,siguientes=0,direccion_eje=0,direccion_sep=0,monto_obrafinal=0,total_contrato=0,caitba=0;cep=0,timbrado=0,total_gastos=0;
	fflush(stdin);
	gotoxy(43,10);cin>>categoria;  
	switch (categoria){
		case 11 : 
		    gotoxy(12,27);cout<<"Valor de referencia: $ 22.275 (Vivienda de interes social de acceso justo al habitat ley 14.449)";
            valor=22275;
		    break;
		case 111: 
	     	gotoxy(12,27);cout<<"Valor de referencia: $ 3341.25 (Vivienda prefabricada de madera)";
            valor=3341.25;
	     	break;
	    case 112:
	    	gotoxy(12,27);cout<<"Valor de referencia: $ 1 (Vivienda menor de 70m2 individuales)";
            valor=1;
		   break;
		case 121:
			gotoxy(12,27);cout<<"Valor de referencia: $ 31.185 (Vivienda Unifamiliar categoria A no cumple ningun item)";
            valor=31185;
			break;
    	case 122:
		    gotoxy(12,27);cout<<"Valor de referencia: $ 35.640 (Vivienda Unifamiliar categoria B cumple 1 item)";
            valor=35640;
			break;
		case 123:
		    gotoxy(12,27);cout<<"Valor de referencia: $ 44.550 Vivienda Unifamiliar categoria C cumple 2 items)";
            valor=44550;
			break;
		case 124:
		    gotoxy(12,27);cout<<"Valor de referencia: $ 53.460 Vivienda Unifamiliar categoria D cumple 3 items)";
            valor=53460;
			break;
		case 125:
		    gotoxy(12,27);cout<<"Valor de referencia: $ 62.370 Vivienda Unifamiliar categoria E cumple 4 items)";
            valor=62370;
			break;
        case 131:
		    gotoxy(12,27);cout<<"Valor de referencia: $ 40.095 Vivienda Multifamiliar construcciones de hasta 4 niveles o plantas)";
            valor=40095;
			break;
		case 132:
		    gotoxy(12,27);cout<<"Valor de referencia: $ 44.550 Vivienda Multifamiliar construcciones de mas de 4 niveles o plantas)";
            valor=44550;
			break;
		case 133:
		    gotoxy(12,27);cout<<"Valor de referencia: $ 49.005 Vivienda Multifamiliar ubicada en country, barrio cerrado, club de campo)";
            valor=49005;
			break;
		case 0 :
			menu_ppal();
			break;	
		default :
			gotoxy(12,27);cout<<"Ingreso una categoria de obra invalida, ingrese nuevamente...";
			getch();
			proyectoydireccion();		
} 
}
void verificar(){
	gotoxy(43,13);cin>>sup_cub;    
	gotoxy(43,16);cin>>sup_scub; 
	calculo_pyd();
	gotoxy(48,19);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    calculo_pyd();
		    mostrar_resultadospyd1();
			desea_guardar_pyd();
		    break;
		case 115: 
		    calculo_pyd();
	     	mostrar_resultadospyd1();
	    	desea_guardar_pyd();	
	     	break;
	    case 78:
	    	verificar2();
		   break;
		case 110:
			verificar2();
			break;
}
}
}
void verificar2(){
	gotoxy(48,22);	
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    calculo_pyd();
		    mostrar_resultadospyd2();
			desea_guardar_pyd();
		    break;
		case 115: 
		    calculo_pyd();
	     	mostrar_resultadospyd2();
	    	desea_guardar_pyd();
	     	break;
	    case 78:
	    	mostrar_resultadospyd3();
	    	desea_guardar_pyd();
		   break;
		case 110:
			mostrar_resultadospyd3();
			desea_guardar_pyd();
			break;
}
}
}
void desea_guardar_pyd(){
	cuadro(4,46,2,66);
    char sn;
    mostrar_ventana_deseaguardar();
     gotoxy(104,4);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    guardar_archivo_pyd();
		    ventana_elarchivoseguardocorrectamente_pyd();
		    menu_ppal();
		    break;
		case 115: 
	     	guardar_archivo_pyd();
	     	ventana_elarchivoseguardocorrectamente_pyd();
	    	menu_ppal();
	     	break;
	    case 78:
	    	system("cls");
	    	menu_ppal();
		   break;
		case 110:
			system("cls");
			menu_ppal();
			break;	
}
}
}
void salida_pyd(){
	ventana_salida_pyd();
	menu_ppal();
}
void art_29(){
	fondo_art29();
		fflush(stdin);
	gotoxy(44,19);cin>>computoypresup;
		if (computoypresup!=0){ mostrar_resultados_art29(computoypresup);
	                        	desea_guardar_art29();
                           	  }
	    if (computoypresup==0){ proyectoydireccion();
	                            ingresar_sup();
	                            calculo_pyd();
	                            mostrar_resultados_art29bis();
	                            desea_guardar_art29bis(); 
					          }
}
void ingresar_sup(){
	gotoxy(43,13);cin>>sup_cub;    
	gotoxy(43,16);cin>>sup_scub; 
}
void desea_guardar_art29(){
   	cuadro(4,46,2,66);
    char sn;
    mostrar_ventana_deseaguardar();
     gotoxy(104,4);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    guardar_archivo_art29(computoypresup);
		    ventana_elarchivoseguardocorrectamente_pyd();
		    menu_ppal();
		    break;
		case 115: 
	     	guardar_archivo_art29(computoypresup);
	     	ventana_elarchivoseguardocorrectamente_pyd();
	    	menu_ppal();
	     	break;
	    case 78:
	    	menu_ppal();
		   break;
		case 110:
			menu_ppal();
			break;	
}
}
}
void desea_guardar_art29bis(){
   	cuadro(4,46,2,66);
    char sn;
    mostrar_ventana_deseaguardar();
     gotoxy(104,4);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    guardar_archivo_art29bis();
		    ventana_elarchivoseguardocorrectamente_pyd();
		    menu_ppal();
		    break;
		case 115: 
	     	guardar_archivo_art29bis();
	     	ventana_elarchivoseguardocorrectamente_pyd();
	    	menu_ppal();
	     	break;
	    case 78:
	    	menu_ppal();
		   break;
		case 110:
			menu_ppal();
			break;	
}
}
}
void medicion(){
    fondo_medicion();
    proyectoydireccion();
    ingresar_sup();
    calculo_medicion();
    mostrar_resultadosmed(monto_obrafinal);
    desea_guardarmed();
	getch();
    menu_ppal();
}
void desea_guardarmed(){
	cuadro(4,46,2,66);
    char sn;
    mostrar_ventana_deseaguardar();
     gotoxy(104,4);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    guardar_archivo_med();
		    ventana_elarchivoseguardocorrectamente_pyd();
		    menu_ppal();
		    break;
		case 115: 
	     	guardar_archivo_med();
	     	ventana_elarchivoseguardocorrectamente_pyd();
	    	menu_ppal();
	     	break;
	    case 78:
	    	menu_ppal();
		   break;
		case 110:
			menu_ppal();
			break;	
}
}
}
void demolicion(){
	char sn;
	fondo_demolicion();
    proyectoydireccion();
    ingresar_sup();
    calculo_pyd();
    gotoxy(43,19);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 66 : 
		    coeficiente=0.3;
		    mostrar_resultadosdemolicion(coeficiente);
		    desea_guardardemolicion();
		    break;
		case 98: 
	     	coeficiente=0.3;
	     	mostrar_resultadosdemolicion(coeficiente);
	       	desea_guardardemolicion();
	     	break;
	    case 82:
	    	coeficiente=0.45;
	    	mostrar_resultadosdemolicion(coeficiente);
	    	desea_guardardemolicion();
		   break;
		case 114:
			coeficiente=0.45;
			mostrar_resultadosdemolicion(coeficiente);
			desea_guardardemolicion();
			break;
    	case 77:
	    	coeficiente=0.6;
	    	mostrar_resultadosdemolicion(coeficiente);
	    	desea_guardardemolicion();
		   break;
		case 109:
			coeficiente=0.6;
			mostrar_resultadosdemolicion(coeficiente);
			desea_guardardemolicion();
			break;	
}
}
}
void desea_guardardemolicion(){
	cuadro(4,46,2,66);
    char sn;
    mostrar_ventana_deseaguardar();
     gotoxy(104,4);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    guardar_archivo_demolicion();
		    ventana_elarchivoseguardocorrectamente_pyd();
		    menu_ppal();
		    break;
		case 115: 
	     	guardar_archivo_demolicion();
	     	ventana_elarchivoseguardocorrectamente_pyd();
	    	menu_ppal();
	     	break;
	    case 78:
	    	menu_ppal();
		   break;
		case 110:
			menu_ppal();
			break;	
}
}
}

void construccion(){
	fondo_construccion();
    proyectoydireccion();
    ingresar_sup();
    calculo_construccion();
    mostrar_resultadoscon();
    desea_guardarcon();
	getch();
    menu_ppal();
}
void desea_guardarcon(){
	cuadro(4,46,2,66);
    char sn;
    mostrar_ventana_deseaguardar();
     gotoxy(104,4);
		while(sn!=27){
		sn=getch();
		if(sn==0)
		sn=getch();
		else 
	switch (sn){
		case 83 : 
		    guardar_archivo_con();
		    ventana_elarchivoseguardocorrectamente_pyd();
		    menu_ppal();
		    break;
		case 115: 
	     	guardar_archivo_con();
	     	ventana_elarchivoseguardocorrectamente_pyd();
	    	menu_ppal();
	     	break;
	    case 78:
	    	menu_ppal();
		   break;
		case 110:
			menu_ppal();
			break;	
}
}
}
