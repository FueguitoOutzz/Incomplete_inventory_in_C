//21.440.487-7 Renato Chavez Molina
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//Empresa Akme-Departamento TI Stock de productos
//-Login/-Agregar un producto/-listar los productos/-eliminar/-busqueda de marca todo en el momento y cantidad disponible
	
	
	
	//Structs de todo
	typedef struct inventario_de_monitor{
	
		int identificador;
		char marca[20];
		char modelo[50];
		float tamanio;
}MONITOR;

	typedef struct inventario_de_mouse{
	
		int identificador;
		char marca[20];
		char modelo[50];
}MOUSE;

	typedef struct inventario_de_teclado{
	
		int identificador;
		char marca[20];
		char modelo[50];
		char idioma[20];
}KEYBOARD;

	typedef struct inventario_de_notebooks{
		int identificador;
		char marca[20];
		char modelo[50];
		int ram;
		char procesador[30];	
		float tamanio;
}NOTEBOOK;

	typedef struct inventario_de_pc_de_escritorio{
		int identificador;
		char marca[20];
		char modelo[50];
		int ram;
		char procesador[30];
		KEYBOARD tecladopc;
		MOUSE mousepc;
		MONITOR monitorpc;
	}PC;

	typedef struct usuario{
		int identificador;
		char nombredeusuario[30];
		char contrasenia[20];
		char nombre[20];
		char apellido_materno[20];
		char apellido_paterno[20];
	}NICKNAME;
	
	NICKNAME usuario; //Prototipo de usuario
	MONITOR monitor[10]; //Prototipo monitor
	MOUSE mouse[10]; //Prototipo mouse
	KEYBOARD keyboard[10]; //Prototipo keyboard
	NOTEBOOK notebook[10]; //Prototipo notebook
	PC pc[10]; //Prototipo pc


	int login();//Prototipo de login
	void mostrar_usuario();//Prototipo usuario
	
	void mostrar_monitor();//Prototipo monitor
	void actualizar_monitor();//Prototipo de acutalizar monitor
	void mostrar_mouse();//Prototipo mouse aqui lo deje
	
	void mostrar_keyboard();//Prototipo keyboard
	
	void mostrar_notebook();//Prototipo notebook
	
	void mostrar_pc();//Prototipo PC
	
	void mostrar_opciones();//Prototipo de opciones dentro del menu
	void mostrar_enlis();//Prototipo de enlistar
	void mostrar_eliminar();//Eliminar
	void mostrar_menu();//Prototipo del menu
	
	
	int main(){
		mostrar_monitor();
		mostrar_mouse();
		mostrar_keyboard();
		mostrar_notebook();
		mostrar_pc();
		system("cls");
		int menu,opa,opac,oen,oe,era, xd=0,i; //menu's
		int cmon=3,cmou=3,ckey=3,cnot=3,cpc=3;//Contadores
		int ac;
		char ene=164;
		//Mostrar user and pass
		printf("User:Luz Password:Brindo18\nSi entendio el mensaje\n");
		system("pause");
		system("cls");
		//Login
		do{
			xd=login();
		}while(xd==0);
	
	
	
		do{
			system("cls");
			mostrar_usuario();//Mostrando el user
			mostrar_menu();//Mostrando el menu en pantalla
			scanf("%d",&menu);
			switch(menu){
			
			case 1:
					mostrar_usuario();
					printf("-----------------------Agregar producto-----------------------");
					mostrar_opciones();
					scanf("%d", &opa);
						switch(opa){
							case 1:
							mostrar_usuario();
								printf("-----------------------Seccion Monitor-----------------------");
								printf("\n||ID||: ");
								scanf("%d", &monitor[cmon].identificador);
								printf("\n||Marca||: ");
								fflush(stdin);
								gets(monitor[cmon].marca);
								printf("\n||Modelo||: ");
								gets(monitor[cmon].modelo);
								printf("\n||Tama%co||: ",ene);
								scanf("%f",&monitor[cmon].tamanio);
								cmon++;
							system("pause");
							break;
							case 2: 
							mostrar_usuario();
								printf("-----------------------Seccion Mouse-----------------------");
								printf("\n||ID||: ");
								scanf("%d", &mouse[cmou].identificador);
								printf("\n||Marca||: ");
								fflush(stdin);
								gets(mouse[cmou].marca);
								printf("\n||Modelo||: ");
								gets(mouse[cmou].modelo);
								cmou++;
							system("pause");
							break;
							case 3:
							mostrar_usuario();
								printf("-----------------------Seccion Teclado-----------------------");
								printf("\n||ID||: ");
								scanf("%d", &keyboard[ckey].identificador);
								printf("\n||Marca||: ");
								fflush(stdin);
								gets(keyboard[ckey].marca);
								printf("\n||Modelo||: ");
								gets(keyboard[ckey].modelo);
								printf("\n||Idioma||: ");
								gets(keyboard[ckey].idioma);
								ckey++;
							system("pause");
							break;
							case 4:
							mostrar_usuario();
								printf("-----------------------Seccion Notebook-----------------------");
								printf("\n||ID||: ");
								scanf("%d", &notebook[cnot].identificador);
								printf("\n||Marca||: ");
								fflush(stdin);
								gets(notebook[cnot].marca);
								printf("\n||Modelo||: ");
								gets(notebook[cnot].modelo);
								printf("\n||Ram||: ");
								scanf("%d", &notebook[cnot].ram);
								printf("\n||Procesador||: ");
								fflush(stdin);
								gets(notebook[cnot].procesador);
								printf("\n||Tama%co||: ",ene);
								scanf("%f",&notebook[cnot].tamanio);
								cnot++;
							system("pause");
							break;
							case 5:
							mostrar_usuario();
								printf("-----------------------Seccion PC-----------------------");
								printf("\n||ID||: ");
								scanf("%d", &pc[cpc].identificador);
								printf("\n||Marca||: ");
								fflush(stdin);
								gets(pc[cpc].marca);
								printf("\n||Modelo||: ");
								gets(pc[cpc].modelo);
								printf("\n||Ram||: ");
								scanf("%d", &pc[cpc].ram);
								printf("\n||Procesador||: ");
								fflush(stdin);
								gets(pc[cpc].procesador);
								printf("\n||Monitor pc identificador||: ");
								scanf("%d",&pc[cpc].monitorpc.identificador);
								printf("\n||Monitor pc marca||: ");
								fflush(stdin);
								gets(pc[cpc].monitorpc.marca);
								printf("\n||Monitor pc modelo||: ");
								gets(pc[cpc].monitorpc.modelo);
								printf("\n||Monitor pc tama%co||: ",ene);
								scanf("%f",&pc[cpc].monitorpc.tamanio);
								printf("\n||Mouse pc identificador||: ");
								scanf("%d",&pc[cpc].mousepc.identificador);
								printf("\n||Mouse pc marca||: ");
								fflush(stdin);
								gets(pc[cpc].mousepc.marca);
								printf("\n||Mouse pc modelo||: ");
								gets(pc[cpc].mousepc.modelo);
								printf("\n||Teclado pc identificador||: ");
								scanf("%d",&pc[cpc].tecladopc.identificador);
								printf("\n||Teclado pc marca||: ");
								fflush(stdin);
								gets(pc[cpc].tecladopc.marca);
								printf("\n||Teclado pc modelo||: ");
								gets(pc[cpc].tecladopc.modelo);
								printf("\n||Teclado pc idioma||: ");
								gets(pc[cpc].tecladopc.idioma);
								cpc++;
							system("pause");
							break;
							
							default:
							system("cls");
							printf("Numero ingresado incorrecto, intente nuevamente\n");
							system("pause");
						}
						break;
			case 2:
					mostrar_usuario();
					printf("-----------------------Actualizar producto-----------------------");
					mostrar_opciones();
					scanf("%d", &opac);
						switch(opac){
							case 1:
							mostrar_usuario();
							for(i=0;i<cmon;i++){
								printf("%d %s %s %.1f",monitor[i].identificador,monitor[i].marca, monitor[i].modelo,monitor[i].tamanio);
								printf("\n----------------------------------------------\n");
							}
							scanf("%d",&ac);
							
							system("pause");
							break;
						}
					break;
			case 3:
					mostrar_usuario();
					mostrar_opciones();
					mostrar_enlis(oen,0,cmon,cmou,ckey,cnot,cpc);
						break;
			case 4:
					mostrar_usuario();
					mostrar_opciones();
					mostrar_enlis(oen,0,cmon,cmou,ckey,cnot,cpc);
					mostrar_eliminar(era);
					break;
			case 5:
					mostrar_usuario();
					printf("No disponible");
					system("pause");
					break;
			case 6:
						system("cls");
					printf("________Programa terminado________");
						return 0;
			default:
					system("cls");
						printf("Numero ingresado incorrecto, intente nuevamente\n");
						system("pause");
					break;
				getch();
				
			}
		}while(1);
		
	}
	//Login
	int login(){
		char usuario[3];
		char contrasena[8];
		char ene=164;
		int xd=0;
			printf("|||Iniciar sesion|||\n");
			printf("Nombre de usuario:");
			scanf("%s",usuario);
			printf("Contrase%ca:",ene);
			scanf("%s",contrasena);
		
		if (strcmp(usuario, "Luz")==0 && strcmp(contrasena, "Brindo18")==0){
			printf("Welcome!!\n");
			xd=1;
		}else{
			printf("Error de registro, intente nuevamente\n");
		}
		return xd;
	}
	//Funcion del usuario
	void mostrar_usuario(){
			system("cls");
			printf("-----------------------\n");
			usuario.identificador= 001;
			strcpy(usuario.nombre, "Luciano");
			strcpy(usuario.apellido_paterno, "Jerez");
			strcpy(usuario.apellido_materno, "Abarzua");
			strcpy(usuario.nombredeusuario, "Luz");
			strcpy(usuario.contrasenia, "Brindo18");

			printf("ID:%d\nUser:%s\nNombre:%s %s %s",usuario.identificador,usuario.nombredeusuario,usuario.nombre,usuario.apellido_paterno,usuario.apellido_materno);
			printf("\n-----------------------\n");
	}
	///101-Monitor
	void mostrar_monitor(){
			printf("-----------------------");
			monitor[0].identificador=101;
			strcpy(monitor[0].marca,"LG");
			strcpy(monitor[0].modelo, "20MK400HB");
			monitor[0].tamanio=20;
			printf("-----------------------");
			monitor[1].identificador=102;
			strcpy(monitor[1].marca,"ASUS");
			strcpy(monitor[1].modelo, "VP249QGR");
			monitor[1].tamanio=24;
			printf("-----------------------");
			monitor[2].identificador=103;
			strcpy(monitor[2].marca,"Samsung");
			strcpy(monitor[2].modelo, "C24F390");
			monitor[2].tamanio=24;
			printf("-----------------------");
	}
	//201-Mouse
		void mostrar_mouse(){
			printf("-----------------------");
			mouse[0].identificador=201;
			strcpy(mouse[0].marca,"Logitech");
			strcpy(mouse[0].modelo, "G203");
			printf("-----------------------");
			mouse[1].identificador=202;
			strcpy(mouse[1].marca,"HP Gaming");
			strcpy(mouse[1].modelo, "M100");
			printf("-----------------------");
			mouse[2].identificador=203;
			strcpy(mouse[2].marca,"Urbano Design");
			strcpy(mouse[2].modelo, "M872");
			printf("-----------------------");
	}
	//301-Keyboard
		void mostrar_keyboard(){
			printf("-----------------------");
			keyboard[0].identificador=301;
			strcpy(keyboard[0].marca,"Yindiao");
			strcpy(keyboard[0].modelo, "K300");
			strcpy(keyboard[0].idioma, "ES");
			printf("-----------------------");
			keyboard[1].identificador=302;
			strcpy(keyboard[1].marca,"HP Gaming");
			strcpy(keyboard[1].modelo, "M100");
			strcpy(keyboard[1].idioma, "EN");
			printf("-----------------------");
			keyboard[2].identificador=303;
			strcpy(keyboard[2].marca,"Logitech");
			strcpy(keyboard[2].modelo, "G213");
			strcpy(keyboard[2].idioma, "EN");
			printf("-----------------------");
	}
	//401-Notebook
		void mostrar_notebook(){
			printf("-----------------------");
			notebook[0].identificador=401;
			strcpy(notebook[0].marca, "Acer");
			strcpy(notebook[0].modelo, "NITRO 5");
			notebook[0].ram=16;
			strcpy(notebook[0].procesador, "AMD Ryzen 5 2500U");
			notebook[0].tamanio=16;
			printf("-----------------------");
			notebook[1].identificador=402;
			strcpy(notebook[1].marca, "Lenovo");
			strcpy(notebook[1].modelo, "IdeaPad Gaming 3");
			notebook[1].ram=16;
			strcpy(notebook[1].procesador, "AMD Ryzen 5 4600H");
			notebook[1].tamanio=16;
			printf("-----------------------");
			notebook[2].identificador=403;
			strcpy(notebook[2].marca, "Dell");
			strcpy(notebook[2].modelo, "Inspiron 3511");
			notebook[2].ram=8;
			strcpy(notebook[2].procesador, "Intel Core i3 1115G4");
			notebook[2].tamanio=15;
		printf("-----------------------");
		}
	//501-PC
		void mostrar_pc(){
			printf("-----------------------");
			pc[0].identificador=501;
			strcpy(pc[0].marca, "HP");
			strcpy(pc[0].modelo, "All in One");
			pc[0].ram=8;
			strcpy(pc[0].procesador, "Intel Core i5 7600");
			pc[0].monitorpc=monitor[0];
			pc[0].mousepc=mouse[0];
			pc[0].tecladopc=keyboard[0];
			printf("-----------------------");
			pc[1].identificador=502;
			strcpy(pc[1].marca, "Apple");
			strcpy(pc[1].modelo, "IMac");
			pc[1].ram=8;
			strcpy(pc[1].procesador, "Apple M-Series M1");
			pc[1].monitorpc=monitor[1];
			pc[1].mousepc=mouse[1];
			pc[1].tecladopc=keyboard[1];
			printf("-----------------------");
			pc[2].identificador=503;
			strcpy(pc[2].marca, "Dell");
			strcpy(pc[2].modelo, "All in One");
			pc[2].ram=16;
			strcpy(pc[2].procesador, "AMD Ryzen 5 2600");
			pc[2].monitorpc=monitor[2];
			pc[2].mousepc=mouse[2];
			pc[2].tecladopc=keyboard[2];
			printf("-----------------------");
		}
	//Enlistar
		void mostrar_enlis(int oen,int i, int cmon, int cmou, int ckey, int cnot, int cpc){
					scanf("%d",&oen);
					switch(oen){
						case 1:
							mostrar_usuario();
							printf("\nStock %d/10\n",cmon);
							for(i=0;i<cmon;i++){
								printf("\n----------------------------------------------\n");
								printf("|%d| %s %s %.1f",monitor[i].identificador,monitor[i].marca, monitor[i].modelo,monitor[i].tamanio);
								printf("\n----------------------------------------------\n");
							}
							system("pause");
						break;
						case 2:
							mostrar_usuario();
							printf("\nStock %d/10\n",cmou);
							printf("\n----------------------------------------------\n");
							for(i=0;i<cmou;i++){
								printf("|%d| %s %s",mouse[i].identificador,mouse[i].marca,mouse[i].modelo);
								printf("\n----------------------------------------------\n");
							}
							system("pause");
						break;
						case 3: 
							mostrar_usuario();
							printf("\nStock %d/10\n",ckey);
							for(i=0;i<ckey;i++){
								printf("\n----------------------------------------------\n");
								printf("|%d| %s %s %s",keyboard[i].identificador,keyboard[i].marca,keyboard[i].modelo,keyboard[i].idioma);
								printf("\n----------------------------------------------\n");
							}
							system("pause");
						break;
						case 4:
							mostrar_usuario();
							printf("\nStock %d/10\n",cnot);
							for(i=0;i<cnot;i++){
								printf("\n----------------------------------------------\n");
								printf("|%d| %s %s %s %d GB %.1f",notebook[i].identificador,notebook[i].marca,notebook[i].modelo,notebook[i].procesador,notebook[i].ram,notebook[i].tamanio);
								printf("\n----------------------------------------------\n");
							}
							system("pause");
						break;
						case 5:
							mostrar_usuario();
							printf("\nStock %d/10\n",cpc);
							for(i=0;i<cpc;i++){
								printf("\n----------------------------------------------\n");
								printf("|%d| %s %s %s %d\nMonitor:%s %s\nMouse:%s %s\nTeclado:%s %s %s",pc[i].identificador,pc[i].marca,pc[i].modelo,pc[i].procesador,pc[i].ram,pc[i].monitorpc.marca,pc[i].monitorpc.modelo,pc[i].mousepc.marca,pc[i].mousepc.modelo,pc[i].tecladopc.marca,pc[i].tecladopc.modelo,pc[i].tecladopc.idioma);
								printf("\n----------------------------------------------\n");
							}
							system("pause");
						break;
						default:
						system("cls");
						printf("Numero ingresado incorrecto, intente nuevamente\n");
						system("pause");
					break;
					}
					
		}
	//Eliminar opciones
	void mostrar_eliminar(int era,int i){
					printf("Que producto desea eliminar: ");
					scanf("%d",&era);
					era=era-1;
	}
	//Menu de opciones
	void mostrar_opciones(){
			printf("-----------------------\nQue opcion desea:\n1)Monitor\n2)Mouse\n3)Teclado\n4)Notebook\n5)PC\n>");
		}
	//Funcion del menu
	void mostrar_menu(){
		printf("________Menu________\n");
		printf("1.-Agregar producto\n2.-Actualizar producto\n3.-Enlistar los productos\n4.-Eliminar producto\n5.-Buscar producto\n6.-Salir del programa\n________________\nOpcion:");
	}
