### Obiettivi del Task

#### 1. Creazione della classe `Pila`
La classe `Pila` deve rappresentare una struttura dati LIFO (Last In, First Out). Utilizzare una implementazione con vettore o con liste puntate (è possibile riutilizzare la classe `ListaPuntatori` della scorsa lezione).

Implementare i seguenti operatori di base:
- `push(T elem)` – Aggiunge un elemento alla pila.
- `pop()` – Rimuove l’elemento in cima alla pila e lo restituisce. Gestire eventuali errori (ad esempio, pila vuota).
- `top()` – Restituisce l’elemento in cima alla pila senza rimuoverlo.
- `isEmpty()` – Restituisce `true` se la pila è vuota, altrimenti `false`.
- `size()` – Restituisce il numero di elementi nella pila.

#### 2. Creazione della classe `Coda`
La classe `Coda` deve rappresentare una struttura dati FIFO (First In, First Out). Utilizzare una implementazione con vettore circolare o con liste puntate (è possibile riutilizzare la classe `ListaPuntatori` della scorsa lezione).

Implementare i seguenti operatori di base:
- `enqueue(T elem)` – Aggiunge un elemento alla fine della coda.
- `dequeue()` – Rimuove l’elemento in testa alla coda e lo restituisce. Gestire eventuali errori (ad esempio, coda vuota).
- `front()` – Restituisce l’elemento in testa alla coda senza rimuoverlo.
- `isEmpty()` – Restituisce `true` se la coda è vuota, altrimenti `false`.
- `size()` – Restituisce il numero di elementi nella coda.

#### 3. Programma `main`
Nel programma principale, testare le due classi con operazioni di base per assicurarsi che funzionino correttamente. (È possibile prendere spunto dal `main` della lezione di `ListeVettori`).

#### 4. Implementazione della funzione `valuta_polacca`
Implementare una funzione fuori dal `main` basandosi sullo pseudocodice visto a lezione dell'algoritmo `double valuta_polacca(post: coda)`. Testare la funzione nel `main`.

![Screenshot 2024-11-28 200238](https://github.com/user-attachments/assets/133e92ad-5811-43c3-b2b7-e274f77d24e4)
