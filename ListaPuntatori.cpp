#include <iostream>

// Definizione della classe Lista come template
template <typename T>
class ListaPuntatori {
  private:
    // Definizione della struttura del nodo
    struct Nodo {
        T valore;      // Valore del nodo
        Nodo* next;    // Puntatore al nodo successivo
    };

    Nodo* head;       // Puntatore alla testa della lista
    int lung;         // Lunghezza effettiva della lista

  public:
    // Costruttore
    ListaPuntatori(){
        head = nullptr;
        lung=0;
    }

    // Distruttore per liberare la memoria
    ~ListaPuntatori() {
        while (head != nullptr) {
            Nodo* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Verifica se la lista è vuota
    bool listavuota() const {
        return lung == 0;
    }

    // Legge un elemento dalla lista
    T leggilista(int p) {
        if (p < 1 || p > lung) {
            std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
            return T();
        }

        Nodo* corrente = head;
        for (int i = 1; i < p; i++) {
            corrente = corrente->next;
        }
        return corrente->valore;
    }

    // Scrive un elemento nella lista
    void scrivilista(T elem, int p) {
        if (p < 1 || p > lung) {
            std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
            return;
        }

        Nodo* corrente = head;
        for (int i = 1; i < p; i++) {
            corrente = corrente->next;
        }
        corrente->valore = elem;
    }

    // Restituisce la posizione del primo elemento
    int primolista() const {
        return head;
    }

    // Verifica se si è arrivati alla fine della lista
    bool finelista(int p) const {
        return p == lung;
    }

    // Restituisce la posizione successiva
    int succlista(int p) const {
        Nodo* corrente = head;
        for (int i = 1; i < p-1; i++) {
            corrente = corrente->next;
        }
        return corrente->next;
    }

    // Restituisce la posizione precedente
    int predlista(int p) const {
        Nodo* corrente = head;
        for (int i = 1; i < p-2; i++) {
            corrente = corrente->next;
        }
        return corrente->next;
    }

    // Inserisce un elemento nella lista
    void inslista(T elem, int p) {
        if (p < 1 || p > lung + 1) {
            std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
            return;
        }

        Nodo* nuovo = new Nodo{elem, nullptr};

        if (p == 1) {
            nuovo->next = head;
            head = nuovo;
        } else {
            Nodo* corrente = head;
            for (int i = 1; i < p - 1; i++) {
                corrente = corrente->next;
            }
            nuovo->next = corrente->next;
            corrente->next = nuovo;
        }

        lung++;
    }

    // Cancella un elemento dalla lista
    void canclista(int p) {
        if (p < 1 || p > lung) {
            std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
            return;
        }

        Nodo* toDelete = nullptr;

        if (p == 1) {
            toDelete = head;
            head = head->next;
        } else {
            Nodo* corrente = head;
            for (int i = 1; i < p - 1; i++) {
                corrente = corrente->next;
            }
            toDelete = corrente->next;
            corrente->next = toDelete->next;
        }

        delete toDelete;
        lung--;
    }

    // Restituisce la lunghezza della lista
    int lunghezza() const {
        return lung;
    }

    // Trova il massimo valore nella lista
    T massimo(){

        if(listavuota()){
            std::cout << "Errore: lista vuota." << std::endl;
            return T();
        }

        T max=leggilista(1);
        for(int i=1; !finelista(i-1); i++){
            if(leggilista(i)>max){
                max=leggilista(i);
            }
        }
        return max;
    };
    T minimo(){
        if(listavuota()){
            std::cout << "Errore: lista vuota." << std::endl;
            return T();
        }
        T min=leggilista(1);
        for(int i=1; !finelista(i-1); i++){
            if(leggilista(i)<min){
                min=leggilista(i);
            }
        }
        return min;
    };

    T somma(){
        
        if(listavuota()){
            std::cout << "Errore: lista vuota." << std::endl;
            return T();
        }
        T somma=0;
        for(int i=1; !finelista(i-1); i++){
            somma = somma + leggilista(i);
        }
        return somma;
    };

    bool contiene(const T& elem){
        
        if(listavuota()){
            std::cout << "Errore: lista vuota." << std::endl;
            return false;
        }

        for(int i=1; !finelista(i-1); i++){
            if(leggilista(i)==elem){
                return true;
            }
        }
        return false;
    };

    int contaOccorrenze(const T& elem){
        
        if(listavuota()){
            std::cout << "Errore: lista vuota." << std::endl;
            return 0;
        }
        int occ=0;
        for(int i=1; !finelista(i-1); i++){
            if(leggilista(i)==elem){
                occ++;
            }
        }
        return occ;
    };
};
