#include"programa2.cpp"


int main(){


    Materia Programacion(42664,"Programacion","Pedrito","Programacion para estudiantes");
    Materia BaseDeDatos(78088,"Base de datos", "Juanito","Bases de datos para estudiantes");
    int x;


    std::cout<<"ingrese la clave: \n";std::cin>>x;
    Programacion.CambiaClave(x);
    std::cin.ignore();

    
    std::string nuevoProfe;
    std::cout<<"Ingrese el nombre del profesor: \n";std::cin>>nuevoProfe;
    BaseDeDatos.CambiaProfesor(nuevoProfe);


    std::cout<<BaseDeDatos;
    
}