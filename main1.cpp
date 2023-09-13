#include<string.h>
#include"programa1.cpp"

void nuevoEmpleado();

int main(){

    empleado jefePlanta(1234,"juanito","casa",300,"Patron");
    empleado jefePersonal(5678,"Pedrito","chan",250,"jefe planta");

    int opc;
    std::string nuevoDom , nuevoJef;
    int c;
    float aumento; 

    do
    {
        std::cin.ignore();
        std::cout<<"\t --- Menu de operaciones --- "<<std::endl;
        std::cout<<"[1] - Cambiar domicilio "<<std::endl;
        std::cout<<"[2] - Actualizar sueldo "<<std::endl;
        std::cout<<"[3] - Imprimir datos "<<std::endl;
        std::cout<<"[4] - Cambiar jefe "<<std::endl;
        std::cout<<"[5] - Ingresar nuevo empleado"<<std::endl;
        std::cout<<"[0] - Salir"<<std::endl;
        std::cout<<"Seleccione una operacion: ";std::cin>>opc;

        switch (opc)
        {
        case 1:
            std::cout<<"Ingrese la clave del trabajador: ";std::cin>>c;
            if(jefePlanta.getClave() == c){
                std::cout<<"Ingrese el nuevo domicilio: ";
                std::cin.ignore();
                std::getline(std::cin,nuevoDom);
                jefePlanta.cambiaDomicilio(nuevoDom);
            }
            if(jefePersonal.getClave() == c){
                std::string nuevoDom;
                std::cin.ignore();
                std::cout<<"Ingrese el nuevo domicilio: ";
                std::getline(std::cin,nuevoDom);
                jefePlanta.cambiaDomicilio(nuevoDom);
            }
        case 2: 
            std::cout<<"Actualizar el sueldo"<<std::endl;
            std::cout<<"Ingrese la clave del trabajador: ";std::cin>>c;
            if(jefePlanta.getClave() == c){
                std::cout<<"Ingrese el porcentaje de aumento: ";
                std::cin>>aumento;
                jefePlanta.ActualSueldo(aumento);
            }
            if(jefePersonal.getClave() == c){
                std::string nuevoDom;
                std::cout<<"Ingrese el porcentaje de aumento: ";
                std::cin>>aumento;
                jefePlanta.ActualSueldo(aumento);
            }
            break;
        case 3: 
            std::cout<<"Ingrese la clave del trabajador: ";std::cin>>c;
            if(jefePlanta.getClave() == c){
                jefePlanta.imprime(jefePlanta);
            }
            if(jefePersonal.getClave() == c){
                jefePersonal.imprime(jefePersonal);
            }
            break;
        case 4: 
            std::cout<<"Ingrese la clave del trabajador: ";std::cin>>c;
            if(jefePlanta.getClave() == c){ 
                std::cin.ignore();
                std::cout<<"Ingrese el nuevo jefe: "<<std::endl;
                std::getline(std::cin,nuevoJef);
                jefePlanta.cambiaReportaA(nuevoJef);
            }
            if(jefePersonal.getClave() == c){
                std::cin.ignore();
                std::cout<<"Ingrese el nuevo jefe: "<<std::endl;
                std::getline(std::cin,nuevoJef);
                jefePersonal.cambiaReportaA(nuevoJef);
            }
            break;

        case 5:
            nuevoEmpleado();
            break;
        case 0:
            break;
            
        default:
            std::cout << "Opcion invalida. Por favor, ingrese una opcion valida." << std::endl;
        }
        
    } while (opc != 0);
    
}


void nuevoEmpleado(){
    empleado nuevo_empleado;
    std::cin>>nuevo_empleado;

}