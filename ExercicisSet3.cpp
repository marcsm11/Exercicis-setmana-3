#include <iostream>
#include <string>

using namespace std;

// Exercici 1
//Generar una classe Persona que permeti :
//•	Crear una persona indicant el seu nom i edat
//•	Mostrar totes les dades d’una persona
//•	Comprovar si és major d’edat

class Persona
{
private:
    string nom;
    int edat;

public:
    Persona(string nomInicial, int edatInicial)
    {
        nom = nomInicial;
        edat = edatInicial;
    }

    void mostrarDades()
    {
        cout << "Nom: " << nom << ", Edat: " << edat << " anys" << endl;
    }

    bool esMajorEdat()
    {
        return edat >= 18;
    }
};

int main()
{
    Persona persona1("Anna", 20);
    Persona persona2("Marc", 15);

    persona1.mostrarDades();
    if (persona1.esMajorEdat())
    {
        cout << "Es major d'edat" << endl;
    }
    else
    {
        cout << "No es major d'edat" << endl;
    }

    cout << endl;

    persona2.mostrarDades();
    if (persona2.esMajorEdat())
    {
        cout << "Es major d'edat" << endl;
    }
    else
    {
        cout << "No es major d'edat" << endl;
    }

    return 0;
}

//Exercici 2
//Generar una classe Rectangle perquè permeti :
//•	Crear un rectangle indicant amplada i alçada.
//•	Calcular l'àrea.
//•	Calcular el perímetre.
//•	Mostrar les dimensions del rectangle

class Rectangle 
{
 private: 

     int amplada;
     int alcada;

public:
    Rectangle(int a, int b) {

        amplada = a;
        alcada = b; 
    }

    int calcularArea() {

        int area = amplada * alcada;
        return area;
    }

    int calcularPerimetre() {

        int perimetre = 2 * (amplada + alcada);
        return perimetre;
    }
    void mostrarDades() {

        cout << "Àrea: " << calcularArea() << endl;
        cout << "Perímetre: " << calcularPerimetre() << endl;
    }
};

int main() {

    Rectangle rectangle1(40, 20);

    rectangle1.calcularArea();
    rectangle1.calcularPerimetre();
}

//Exercici 3
//Generar una classe Llum perquè permeti :
//•	Crear una llum apagada.
//• Encendre - la.
//•	Apagar - la.
//•	Consultar si està encesa.

class Llum {

private:
    bool encesa;

public:
    Llum()
    {
        encesa = false; // Es crea apagada
    }

    void encendre()
    {
        encesa = true;
    }

    void apagar()
    {
        encesa = false;
    }

    bool estaEncesa()
    {
        return encesa;
    }
};

int main()
{
    Llum llum1;

    cout << "Està encesa? " << (llum1.estaEncesa() ? "Sí" : "No") << endl;

    llum1.encendre();
    cout << "Després d'encendre, està encesa? " << (llum1.estaEncesa() ? "Sí" : "No") << endl;

    llum1.apagar();
    cout << "Després d'apagar, està encesa? " << (llum1.estaEncesa() ? "Sí" : "No") << endl;

    return 0;
}
// Exercici 4
//Generar una classe Termòmetre perquè permeti:
//- Crear un termòmetre amb una temperatura inicial.
//- Consultar la temperatura.
//- Modificar la temperatura(No permetre temperatures inferiors a - 50 °C ni superiors a 60 °C)


class Termometre
{
private:
    double temperatura;

public:
    Termometre(double tempInicial)
    {
        if (tempInicial >= -50.0 && tempInicial <= 60.0)
        {
            temperatura = tempInicial;
        }
        else
        {
            temperatura = 0.0; // Valor de seguretat si la inicial no és vàlida
        }
    }

    double consultarTemperatura()
    {
        return temperatura;
    }

    void modificarTemperatura(double novaTemp)
    {
        if (novaTemp >= -50.0 && novaTemp <= 60.0)
        {
            temperatura = novaTemp;
        }
        else
        {
            cout << "Error: La temperatura ha d'estar entre -50 °C i 60 °C." << endl;
        }
    }
};

int main()
{
    Termometre t(21.5);

    cout << "Temperatura actual: " << t.consultarTemperatura() << " °C" << endl;

    t.modificarTemperatura(35.0);
    cout << "Nova temperatura: " << t.consultarTemperatura() << " °C" << endl;

    t.modificarTemperatura(100.0); // No s'aplicarà
    cout << "Temperatura final: " << t.consultarTemperatura() << " °C" << endl;

    return 0;
}
//Exercici 5
//Generar una classe Jugador que tingui :
//- nom
//- punts
//- vides
//Ha de permetre :
//- Crear un jugador amb un nom, sense punts i 10 vides.
//- Afegir punts.
//- Perdre una vida.
//- Consultar els punts.
//- Consultar les vides.
//- Saber si el jugador està viu.

class Jugador
{
private:
    string nom;
    int punts;
    int vides;

public:
    Jugador(string nomInicial)
    {
        nom = nomInicial;
        punts = 0;
        vides = 10;
    }

    void afegirPunts(int p)
    {
        punts += p;
    }

    void perdreVida()
    {
        if (vides > 0)
        {
            vides--;
        }
    }

    int consultarPunts()
    {
        return punts;
    }

    int consultarVides()
    {
        return vides;
    }

    bool estaViu()
    {
        return vides > 0;
    }
};

int main()
{
    Jugador j1("Mario");

    cout << "Punts inicials: " << j1.consultarPunts() << endl;
    cout << "Vides inicials: " << j1.consultarVides() << endl;

    j1.afegirPunts(50);
    j1.perdreVida();

    cout << "Punts actuals: " << j1.consultarPunts() << endl;
    cout << "Vides actuals: " << j1.consultarVides() << endl;
    cout << "Està viu? " << (j1.estaViu() ? "Sí" : "No") << endl;

    return 0;
}

//Exercici 6
//Generar una classe Producte que tingui :
//- nom
//- preu
//- estoc
//Ha de permetre :
//- Crear un producte.
//- Consultar el preu.
//- Canviar el preu.
//- Afegir unitats a l'estoc.
//- Vendre una unitat(impedir vendre si no hi ha estoc)

class Producte
{
private:
    string nom;
    double preu;
    int estoc;

public:
    Producte(string nomInicial, double preuInicial, int estocInicial)
    {
        nom = nomInicial;
        preu = preuInicial;
        estoc = estocInicial;
    }
    double consultarPreu()
    {


        return preu;
    }
    void canviarPreu(double nouPreu)
    {
        if (nouPreu >= 0)
        {

            preu = nouPreu;
        }
    }
    void afegirEstoc(int quantitat)
    {
        if (quantitat > 0)
        {
            estoc += quantitat;
        }
    }
    bool vendreUnitat()
    {
        if (estoc > 0)
        {
            estoc--;
            return true;
        }


        cout << "Error: No hi ha estoc suficient de " << nom << "." << endl;
        return false;
    }
    int consultarEstoc()
    {
        return estoc;
    }
};

int main()
{
    Producte p1("Ratolí", 15.99, 2);

    cout << "Preu inicial: " << p1.consultarPreu() << " €" << endl;
    p1.canviarPreu(12.50);
    cout << "Nou preu: " << p1.consultarPreu() << " €" << endl;

    p1.vendreUnitat(); // Queda 1
    p1.vendreUnitat(); // Queda 0
    p1.vendreUnitat(); // Intenta vender sin stock

    p1.afegirEstoc(10);
    cout << "Estoc actualitzat: " << p1.consultarEstoc() << " unitats." << endl;

    return 0;
}

//Exercici 7
//Generar una classe Reserva d'una habitació d'hotel:
//- nom del client
//- nombre de nits
//- preu per nit
//- estat de la reserva
//Ha de permetre :
//- Crear una reserva.
//- Consultar el nom del client.
//- Canviar el nombre de nits.
//- Calcular el preu total.
//- Cancel·lar la reserva.
//- Consultar si la reserva està activa.
//- No permetre modificar les nits si la reserva està cancel·lada.

class Reserva
{
private:
    string nomClient;
    int nombreNits;
    double preuPerNit;
    bool activa;

public:
    Reserva(string nom, int nits, double preu)
    {
        nomClient = nom;
        nombreNits = nits;
        preuPerNit = preu;
        activa = true; // Se crea activa por defecto
    }

    string consultarNomClient()
    {
        return nomClient;
    }

    void canviarNombreNits(int novesNits)
    {
        if (!activa)
        {
            cout << "Error: No es poden modificar les nits d'una reserva cancel·lada." << endl;
            return;
        }

        if (novesNits > 0)
        {
            nombreNits = novesNits;
        }
    }

    double calcularPreuTotal()
    {
        return nombreNits * preuPerNit;
    }

    void cancellarReserva()
    {
        activa = false;
    }

    bool estaActiva()
    {
        return activa;
    }
};

int main()
{
    Reserva r1("Joan Garcia", 3, 80.0);

    cout << "Client: " << r1.consultarNomClient() << endl;
    cout << "Preu total (3 nits): " << r1.calcularPreuTotal() << " €" << endl;

    r1.canviarNombreNits(5);
    cout << "Preu total actualitzat (5 nits): " << r1.calcularPreuTotal() << " €" << endl;

    r1.cancellarReserva();
    cout << "Reserva activa? " << (r1.estaActiva() ? "Sí" : "No") << endl;

    // Intentar modificar noches tras cancelar
    r1.canviarNombreNits(7);

    return 0;
}