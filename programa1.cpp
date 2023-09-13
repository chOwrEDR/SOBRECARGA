#include<iostream>
#include<string>



class empleado{
    private:

        int ClaveEmpleado;
        std::string nombre;
        std::string domicilio;
        float sueldo;
        std::string ReportaA;
    
    public:
        empleado();
        empleado(int, std::string,std::string, float,std::string);
        void imprime(empleado&);
        void cambiaDomicilio(std::string);
        void cambiaReportaA(std::string);
        void ActualSueldo(float);

        void setClave(int);
        void setNombre(std::string);
        void setDomicilio(std::string);
        void setSueldo(float);
        void setReporta(std::string);

        int getClave();
        std::string getNombre();
        std::string getDomicilio();
        float getSueldo();
        std::string getReporta();

        bool operator==(const empleado& )const;
        bool operator!=(const empleado&)const;
        bool operator<(const empleado&)const;
        bool operator>(const empleado&)const;

        friend std::istream& operator >>(std::istream& is, empleado& emp);

        friend std::ostream& operator<<(std::ostream& os, const empleado& emp){
        os << "Clave: " << emp.ClaveEmpleado << std::endl;
        os << "Nombre: " << emp.nombre << std::endl;
        os << "Domicilio: " << emp.domicilio << std::endl;
        os << "Sueldo: " << emp.sueldo << std::endl;
        os << "Jefe: " << emp.ReportaA << std::endl;
        return os;
    }


};

void empleado::setClave(int num){ ClaveEmpleado = num;}

void empleado::setNombre(std::string nom){nombre = nom;}

void empleado::setDomicilio(std::string dom){domicilio = dom;}

void empleado::setSueldo(float sue){sueldo = sue;}

void empleado::setReporta(std::string repor){ReportaA = repor;}

int empleado::getClave(){return ClaveEmpleado;}

std::string empleado::getNombre(){return nombre;}

std::string empleado::getDomicilio(){return domicilio;}

float empleado::getSueldo(){return sueldo;}

std::string empleado::getReporta(){return ReportaA;}







empleado::empleado(){
    ClaveEmpleado = 0;
    nombre = "";
    domicilio = "";
    sueldo = 0.0;
    ReportaA = "";

}

empleado::empleado(int C, std::string N, std::string D, float S, std::string R){
    ClaveEmpleado  = C;
    nombre = N;
    domicilio = D;
    sueldo = S;
    ReportaA = R;
}



void empleado::imprime(empleado&emp){
    std::cout<<"\t --- Informacion del empleado --- "<<std::endl;
    std::cout<<emp;

}


void empleado::cambiaDomicilio(std::string nuevoDom){
    std::cout<<"Domicilio actual: "<<domicilio<<std::endl;
    domicilio = nuevoDom;
    std::cout<<"Nuevo domicilio: "<<nuevoDom;
}


void empleado::ActualSueldo(float sal){
    std::cin.ignore();
    std::cout<<"El sueldo actual del empleado es: "<<sueldo<<std::endl;

    float sueldoActual;
    sueldoActual = sueldo;
    float aumento = sueldoActual * sal/100;
    float nueSueldo = sueldo + aumento;
    sueldo = nueSueldo;
    std::cout<<"El nuevo sueldo es: "<<nueSueldo<<std::endl;

   
}


void empleado::cambiaReportaA(std::string nuevoJefe){
    std::cout<<"Jefe actual: "<<ReportaA<<std::endl;
    ReportaA = nuevoJefe;
    std::cout<<"Nuevo jefe: "<<ReportaA<<std::endl;
}


//operadores

bool empleado::operator==(const empleado& other) const {
    return this->ClaveEmpleado == other.ClaveEmpleado;
}

bool empleado::operator!=(const empleado& other) const {
    return !(*this == other);
}

bool empleado::operator<(const empleado& other) const {
    return this->sueldo < other.sueldo;
}

bool empleado::operator>(const empleado& other) const {
    return this->sueldo > other.sueldo;
}


std::istream& operator>>(std::istream& is, empleado& emp) {
    std::cout<<"Clave: ";
    is.ignore();
    is >> emp.ClaveEmpleado;
    std::cout<<"Nombre: ";
    is.ignore();
    getline(is, emp.nombre);
    std::cout<<"Domicilio: ";
    is.ignore();
    getline(is,emp.domicilio);
    std::cout<<"Sueldo: ";
    is.ignore();
    is >> emp.sueldo;
    std::cout<<"Reporta a: ";
    is.ignore();
    getline(is, emp.ReportaA);
    return is;
}
