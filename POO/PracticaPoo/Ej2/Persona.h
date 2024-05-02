#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
    int dni;
    char sexo;
    double peso;
    double altura;

    void comprobarSexo();

public:
    Persona();
    Persona(std::string nombre, int edad);
    Persona(std::string nombre, int edad, int dni, char sexo, double peso, double altura);

    std::string getNombre() const;
    void setNombre(std::string nombre);
    int getEdad() const;
    void setEdad(int edad);
    int getDni() const; 
    char getSexo() const;
    void setSexo(char sexo);
    double getPeso() const;
    void setPeso(double peso);
    double getAltura() const;
    void setAltura(double altura);

    int calcularIMC();
    static int generarDNI();
    bool esMayorDeEdad();
};
void mostrarInformacionPersona(const Persona &persona);//sobrecargar operadores para hacer un buen cout

#endif 
