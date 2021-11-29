#include <iostream>

using namespace std;

float ancho=0,lar=0,alt=0,aux=0,m3=0,m2=0;
float cal,calaer,are,cem,cas,pie,sup,ladcomun,ladhueco,bloque;
float xx,yy,hierro6,hierro8,hierro10,alam;
float tcal=0,tcalaer=0,tare=0,tcem=0,tcas=0,tpie=0,tladcomun=0,tladhueco=0,tbloque=0,thierro6=0,thierro8=0,thierro10=0,talam=0;
float ancho2=0,lar2=0,alt2=0,aux2=0,m22=0;
float sol35=0,mon35=0,sol70=0,mon70=0,placa=0,omega=0,t1=0,t2=0,fijaciones=0,masilla=0,cinta=0;
float tsol35=0,tmon35=0,tsol70=0,tmon70=0,tplaca=0,tomega=0,tt1=0,tt2=0,tfijaciones=0,tmasilla=0,tcinta=0;
int cantidad=0;
string tarea;

void zapata(){
	gotoxy(72,3);cin>>lar;
	gotoxy(92,3);cin>>ancho;
	gotoxy(110,3);cin>>alt;
	m3=lar*ancho*alt;
	cal=(67.5*m3)/30;
    cem=(18*m3)/50;
    are=0.425*m3;
    cas=0.85*m3;
    tarea="Zapata corrida";
      }
void viga_fundacion(){
	gotoxy(72,4);cin>>lar;
	cem=(12*lar)/50;
	are=0.026*lar;
	pie=0.026*lar;
	hierro10=(4*lar)/12;
	hierro6=(3.5*lar)/12;
	alam=0.150*lar;
	tarea="Viga de fundacion";
   }
void pilotines(){
    gotoxy(72,5);cin>>lar;
	gotoxy(100,5);cin>>cantidad;
	aux=lar*cantidad;
	cem=(12*aux)/50;
	are=0.026*aux;
	pie=0.026*aux;
	hierro10=(4*aux)/12;
	hierro6=(3.5*aux)/12;
	alam=0.150*aux;
	tarea="Pilotines";
	}
void encadenados(){
	gotoxy(72,7);cin>>lar;
	gotoxy(93,7);cin>>xx;
	gotoxy(99,7);cin>>yy;
	m3=(lar*xx*yy)/10000;
	cem=(300*m3)/50;
	are=0.65*m3;
	pie=0.65*m3;
	hierro8=(4*lar)/12;
	hierro6=(2.5*lar)/12;
	tarea="Encadenados";
}
void refuerzo_vertical(){
	gotoxy(72,8);cin>>lar;
	gotoxy(93,8);cin>>xx;
	gotoxy(99,8);cin>>yy;
	m3=(lar*xx*yy)/10000;
	cem=(300*m3)/50;
	are=0.65*m3;
	pie=0.65*m3;
	hierro8=(4*lar)/12;
	hierro6=(2.5*lar)/12;
	tarea="Refuerzo vertical";
}
void contrapiso(){
	gotoxy(72,10);cin>>lar;
	gotoxy(92,10);cin>>ancho;
	gotoxy(110,10);cin>>alt;
	m3=lar*ancho*alt;
	cal=(67.5*m3)/30;
	cem=(18*m3)/50;
	are=0.425*m3;
	cas=0.850*m3;
	tarea="Contrapiso";
}
void Carpeta_hidrofuga(){
	gotoxy(72,11);cin>>lar;
	gotoxy(92,11);cin>>ancho;
	m2=lar*ancho;
	cem=(10.88*m2)/50;
	are=0.024*m2;
	tarea="Carpeta hidrofuga";
}
void Alisado_cemento(){
	gotoxy(72,12);cin>>lar;
	gotoxy(92,12);cin>>ancho;
	m2=lar*ancho;
	cem=(10.88*m2)/50;
	are=0.024*m2;
	tarea="Alisado de cemento";
}
void Mosaicos_Baldosas(){
    gotoxy(72,13);cin>>lar;
	gotoxy(92,13);cin>>ancho;
	m2=lar*ancho;
	calaer=(5.9*m2)/30;
	cem=(3.1*m2)/50;
	are=0.0304*m2;
	tarea="Colocar mosaicos/baldosas";
}
void Azotado_hidrofugo(){
    gotoxy(76,15);cin>>sup;
	cem=(2.71*sup)/50;
	are=0.006*sup;
	tarea="Azotado hidrofugo";
}
void Revoque_grueso(){
	gotoxy(76,16);cin>>sup;
	cal=(3.6*sup)/30;
	cem=(1.85*sup)/50;
	are=0.017*sup;
	tarea="Revoque grueso";
}
void Revoque_fino(){
	gotoxy(76,17);cin>>sup;
	calaer=(1.6*sup)/30;
	cem=(0.45*sup)/50;
	are=0.006*sup;
	tarea="Revoque fino";
}
void Tabique_comun(){
	gotoxy(72,18);cin>>lar;
	gotoxy(91,18);cin>>ancho;
	m2=lar*ancho;
	cal=(2*m2)/30;
	cem=(2.1*m2)/50;
	are=0.010*m2;
	ladcomun=30*m2;
	tarea="Tabique ladrillo comun";
}
void Tabique_hueco(){
	gotoxy(72,19);cin>>lar;
	gotoxy(91,19);cin>>ancho;
	m2=lar*ancho;
	cal=(3.4*m2)/30;
	cem=(3.5*m2)/50;
	are=0.016*m2;
	ladhueco=15.5*m2;
	tarea="Tabique ladrillo hueco";
}
void Tabique_cemento(){
	gotoxy(72,20);cin>>lar;
	gotoxy(91,20);cin>>ancho;
	m2=lar*ancho;
	cal=(1.25*m2)/30;
	cem=(2.75*m2)/50;
	are=0.013*m2;
	bloque=12.5*m2;
    tarea="Tabique bloque cemento";
}
void pared_15comun(){
	gotoxy(72,21);cin>>lar;
	gotoxy(91,21);cin>>ancho;
	m2=lar*ancho;
	cal=(7.3*m2)/30;
	cem=(7.5*m2)/50;
	are=0.035*m2;
	ladcomun=60*m2;
	tarea="Pared ladrillo comun 15cm";
}
void pared_30comun(){
	gotoxy(72,22);cin>>lar;
	gotoxy(91,22);cin>>ancho;
	m2=lar*ancho;
	cal=(19.1*m2)/30;
	cem=(9.9*m2)/50;
	are=0.09*m2;
	ladcomun=120*m2;
	tarea="Pared ladrillo comun 30cm";
	
}
void pared_hueco(){
	gotoxy(72,23);cin>>lar;
	gotoxy(91,23);cin>>ancho;
	m2=lar*ancho;
	cal=(7.8*m2)/30;
	cem=(8*m2)/50;
	are=0.037*m2;
	ladhueco=15.5*m2;
	tarea="Pared ladrillo hueco";
}
void pared_cemento(){
	gotoxy(72,24);cin>>lar;
	gotoxy(91,24);cin>>ancho;
	m2=lar*ancho;
	cal=(1.5*m2)/30;
	cem=(3.3*m2)/50;
	are=0.015*m2;
	bloque=12.5*m2;
	tarea="Pared bloque cemento";
}
void totales(){
	tare+=are;
	tcal+=cal;
	tcalaer+=calaer;
	tcem+=cem;
	tpie+=pie;
	tcas+=cas;
	thierro6+=hierro6;
	thierro8+=hierro8;
	thierro10+=hierro10;
	talam+=alam;
	tladcomun+=ladcomun;
	tladhueco+=ladhueco;
	tbloque+=bloque;
}
void totales_2(){
	tsol35+=sol35;
	tmon35=mon35;
	tsol70+=sol70;
	tmon70+=mon70;
	tplaca+=placa;
	tomega+=omega;
	tt1+=t1;
	tt2+=t2;
	tfijaciones+=fijaciones;
	tmasilla+=masilla;
	tcinta+=cinta;
}
void cieloraso_juntatomada(){
	gotoxy(72,3);cin>>lar2;
	gotoxy(92,3);cin>>ancho2;
	m22=lar2*ancho2;
	sol35=m22/1.97;
	mon35=m22/0.8;
	placa=m22/2.67;
	t1=(m22*10)/100;
	t2=(m22*30)/100;
	masilla=(m22*1.8)/32;
	cinta=(m22*3.3)/75;
	fijaciones=(m22*3.5)/100;
	tarea="cieloraso con junta tomada";
      }
