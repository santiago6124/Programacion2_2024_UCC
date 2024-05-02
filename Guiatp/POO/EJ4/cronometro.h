class Cronometro {
private:
    int horas;
    int minutos;
    int segundos;

public:
    // Constructor que inicializa a cero el cronómetro
    Cronometro();

    // Método para resetear el cronómetro
    void Reset();

    // Sobrecarga del operador ++
    Cronometro& operator++(); // Pre-incremento

    // Función para mostrar el tiempo del cronómetro
    void MostrarTiempo();
};