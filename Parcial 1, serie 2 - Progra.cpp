#include <iostream>
#include <string>
using namespace std;

//subclase de la clase Restaurante
class condimentos{
	private: //atributos
		string nombre;
		string color;
		string estado_materia;
		string empaque;
		float peso_ramas;
		
	public: //métodos
	condimentos(string, string, string, string, float);
	~condimentos();
	void sazonar_comida_salada();
	void sazonar_comida_dulce();
	void condimentar_comida();
};

//constructor
condimentos::condimentos(string _nombre, string _color, string _estado_materia, string _empaque, float _peso_ramas){
	nombre = _nombre;
	color = _color;
	estado_materia = _estado_materia;
	empaque = _empaque;
	peso_ramas = _peso_ramas;
	cout<<"Se creó el objeto " <<nombre <<endl; 
}

//destructor
condimentos::~condimentos(){
	cout<< "Se destruyó el objeto "<<nombre <<endl;
}

void condimentos::sazonar_comida_salada(){
	cout <<"La " <<nombre <<" es de color "<<color<<" en estado "<<estado_materia<< " viene en "<<empaque<< " de "<<peso_ramas<< " libras."<<endl;
}
void condimentos::sazonar_comida_dulce(){
	cout <<"El " <<nombre <<" es de color "<<color<<" en estado "<<estado_materia<< " viene en "<<empaque<< " de "<<peso_ramas<< " libras."<<endl;
}
void condimentos::condimentar_comida(){
	cout <<"La hoja de " <<nombre <<" es de color "<<color<<" en estado "<<estado_materia<< " viene en "<<empaque<< " de "<<peso_ramas<< " ramas."<<endl;
}

int main(){
	condimentos sal = condimentos("sal","blanco","sólido", "bolsa", 3);
	sal.sazonar_comida_salada();
	
	condimentos azucar = condimentos("azucar","morena","sólido", "bolsa", 6);
	azucar.sazonar_comida_dulce();
	
	condimentos tomillo = condimentos("tomillo", "verde", "sólido", "manojos", 3);
	tomillo.condimentar_comida();
	
	condimentos pimienta = condimentos("pimienta", "negro", "sólido", "sobre", 0.002);
	pimienta.sazonar_comida_salada();
	
	condimentos salsa_chicharronera = condimentos("salsa chicharronera", "verde", "líquido", "frasco", 0.65);
	salsa_chicharronera.sazonar_comida_salada();
	
	system ("pause");
	return 0;
}	
