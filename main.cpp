#include"Estudiante.cpp"
#include<iostream>
using namespace std;
main(){
	string carne,carrera,seccion,nombres,apellidos,res;
	int telefono,anio;
	cout<<"Ingrese No. de Carne: ";
	cin>>carne;
	cout<<"Ingrese Carrera: ";
	cin>>carrera;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;
	cout<<"Ingrese Numero de Anio que Cursa: ";
	cin>>anio;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	system ("cls");
	Estudiante obj = Estudiante(nombres,apellidos,telefono,carne,carrera,seccion,anio);

	cout<<obj.getCarne()<<endl;
	cout<<obj.getCarrera()<<endl;
	cout<<obj.getSeccion()<<endl;
	cout<<obj.getAnio()<<endl;
	cout<<obj.getNombres()<<endl;
	cout<<obj.getApellidos()<<endl;
	cout<<obj.getTelefono()<<endl;
	
		cout<<"Desea modificar el registro? s/n "<<endl;
	cin>>res;
	if (res=="s"){
	
	cout<<"--------- Modificar ------------"<<endl;
cout<<"Ingrese No. de Carne: ";
	cin>>carne;
	cout<<"Ingrese Carrera: ";
	cin>>carrera;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;
	cout<<"Ingrese Anio: ";
	cin>>anio;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	obj.setCarne(carne);
	obj.setCarrera(carrera);
	obj.setSeccion(seccion);
	obj.setAnio(anio);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setTelefono(telefono); }
	
	
}
