#include <iostream>

using namespace std;

int q,w,e,r;
char dia[3],mes[12],anio[5],vigencia[3];
char nombre_comitente[30],domicilio_comitente[30],dni_comitente[15];
char nombre_prof[30],domicilio_prof[30],titulo_prof[15],matricula_prof[15],dni_prof[15];
char tipo_obra[30],direccion_obra[30],partido_obra[30],tareas[40];
char cir[4],sec[4],man[4],fra[4],par[4];
void fondo();
void ingresar_datos_contrato();
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
void cuadro (int q,int w,int e,int r){
	gotoxy(r,e);printf("%c",201);
	for(int i=r+1;i<(r+w);i++){
		gotoxy(i,e);printf("%c",205);
			}
			printf("%c",187);
	for(int i=e+1;i<(e+q);i++){
	gotoxy(r,i);printf("%c",186);gotoxy(r+w,i);printf("%c",186);printf("%c",219);	
	gotoxy(r,e+q);printf("%c",200);
	}
	for(int i=r+1;i<(r+w);i++){
	gotoxy(i,e+q);printf("%c",205);
	gotoxy(i,e+q+1);printf("%c",223);
			}
	gotoxy(r+w,e+q);printf("%c",188);printf("%c",219);
	gotoxy(r+w,e+q+1);printf("%c",223);printf("%c",223);
}
void boton (int a,int b,int c,int d){
	gotoxy(d,c);printf("%c",218);
	for(int i=d+1;i<(d+b);i++){
		gotoxy(i,c);printf("%c",196);
			}
			printf("%c",191);
	for(int i=c+1;i<(c+a);i++){
	gotoxy(d,i);printf("%c",179);gotoxy(d+b,i);printf("%c",179);	
	gotoxy(d,c+a);printf("%c",192);
	}
	for(int i=d+1;i<(d+b);i++){
	gotoxy(i,c+a);printf("%c",196);			}
	gotoxy(d+b,c+a);printf("%c",217);
	gotoxy(d+b,c+a+1);
}
void login(){
	int contrasenia;
	char clave[]="coltec1371";
    char usuario[20];
	system("cls");
	system("color f1");
	cuadro(10,110,5,5);
   	gotoxy(7,6);cout<<"Sistema de calculos para MMO & ARQ                                   Creado por: MMO Gustavo Daniel Beltran"<<endl;
	gotoxy(7,7);cout<<"                                                                            mat: 47820"<<endl;
	gotoxy(7,8);cout<<"                                                                            cel: (0223) 155-827063"<<endl;
	gotoxy(7,9);cout<<"                                                                         e-mail: gustavodbeltran@gmail.com"<<endl;
	gotoxy(7,10);cout<<"___________________________________________________________________________________________________________";
	fflush(stdin);
	ingreso:
	system("color f1");
	gotoxy(7,12);cout<<"usuario:                         "<<endl;
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),75);
	gotoxy(16,12);cin.getline(usuario,20,'\n');
	if (strcmp(usuario,clave)!=0){
		
		goto ingreso;
	//	login();	
	}
    else SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),017);
         system("cls");
}
void fondo_proyectoydireccion(){
	fondo();
	cuadro(17,51,7,3);
	boton(2,45,9,7);
    boton(2,45,12,7);
    boton(2,45,15,7);
    boton(2,45,18,7);
     boton(2,45,21,7);
    cuadro(2,51,3,3);
    gotoxy(7,4);cout<<"          PROYECTO Y DIRECCION  "<<endl;
    gotoxy(9,10);printf("Categoria de obra      (0=salir) [     ]");
	gotoxy(9,13);printf("Superficie cubierta              [      ]m2");
	gotoxy(9,16);printf("Superficie semi cubierta         [      ]m2");
	gotoxy(9,19);printf("Suplemento dir. cont. separados (s/n) [ ]");
	gotoxy(9,22);printf("Suplemento dir. ejecutiva       (s/n) [ ]");
}
void fondo(){
	system("cls");
	cuadro(27,116,1,1);
	system("color 0f");
	gotoxy(79,1);cout<<"[ SISTEMA DE CALCULO DE HONORARIOS ]"<<endl; 
}
void fondo_art29(){
	fondo();
	cuadro(14,51,7,3);
	boton(2,45,9,7);
    boton(2,45,12,7);
    boton(2,45,15,7);
    boton(2,45,18,7);
    cuadro(2,51,3,3);
    gotoxy(7,4);  cout<<"         DETERMINACION DE ART. 29    "<<endl;
    gotoxy(9,10);printf("Categoria de obra      (0=salir) [     ]");
	gotoxy(9,13);printf("Superficie cubierta              [      ]m2");
	gotoxy(9,16);printf("Superficie semi cubierta         [      ]m2");
	gotoxy(9,19);printf("Monto de obra s/computo y presup [$       ]");
}
void fondo_medicion(){
	fondo();
	cuadro(11,51,7,3);
	boton(2,45,9,7);
    boton(2,45,12,7);
    boton(2,45,15,7);
    cuadro(2,51,3,3);
    gotoxy(7,4);  cout<<"       MEDICION e INFORME TECNICO    "<<endl;
    gotoxy(9,10);printf("Categoria de obra      (0=salir) [     ]");
	gotoxy(9,13);printf("Superficie cubierta              [      ]m2");
	gotoxy(9,16);printf("Superficie semi cubierta         [      ]m2");
}
void fondo_demolicion(){
	fondo();
	cuadro(14,51,7,3);
	boton(2,45,9,7);
    boton(2,45,12,7);
    boton(2,45,15,7);
    boton(2,45,18,7);
    cuadro(2,51,3,3);
    gotoxy(7,4);  cout<<"                DEMOLICION    "<<endl;
    gotoxy(9,10);printf("Categoria de obra      (0=salir) [     ]");
	gotoxy(9,13);printf("Superficie cubierta              [      ]m2");
	gotoxy(9,16);printf("Superficie semi cubierta         [      ]m2");
	gotoxy(9,19);printf("coeficiente (bueno/regular/malo) [ ]");
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),75);
	gotoxy(22,19);cout<<"b";
	gotoxy(28,19);cout<<"r";
	gotoxy(36,19);cout<<"m";
}
void fondo_construccion(){
	fondo();
	cuadro(11,51,7,3);
	boton(2,45,9,7);
    boton(2,45,12,7);
    boton(2,45,15,7);
    cuadro(2,51,3,3);
    gotoxy(7,4);  cout<<"               CONSTRUCCION    "<<endl;
    gotoxy(9,10);printf("Categoria de obra      (0=salir) [     ]");
	gotoxy(9,13);printf("Superficie cubierta              [      ]m2");
	gotoxy(9,16);printf("Superficie semi cubierta         [      ]m2");
}

