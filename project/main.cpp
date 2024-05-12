#include <iostream>
// hiearchie
#include "Zoo.h" // 1 - hlavní zoo
#include "Worker.h" // 2 - pracovnici
#include "Exposition.h" // 3 - expozice
#include "Enclosure.h" // 4 - výběhy
#include "Printable.h" // 5 - čistě abstraktní třída
#include "Animal.h" // 6 - zvířata -> parrent
#include "Mammal.h" // 7 - savci -> child
#include "Bird.h" // 8 - ptáci -> child
#include "Fish.h" // 9 - ryby -> child


int main() {
    // Vytvoření zoo
    Zoo myZoo;

    // Vytvoření pracovníků
    cout << "Workers" << endl << endl;

    Worker* w1 = new Worker("John","Vedoucí"); // buď vytvoříme pracovníka předem

    myZoo.addWorker(w1);
    myZoo.addWorker("Iveta", "Uklízeč"); // nebo ho můžeme vypsat ručně
    myZoo.addWorker("Míra", "Uklízeč");
    myZoo.addWorker("Vendelín", "Uklízeč");
    myZoo.addWorker("Petr", "Vychovatel");
    myZoo.addWorker("Filip", "Vychovatel");
    myZoo.addWorker("David", "Krmič");
    myZoo.addWorker("Míka", "Uklízeč");
    myZoo.addWorker("Radomír", "Vychovatel");


    myZoo.getWorker(1)->changeProfession("Vychovatel"); // změna profese
    myZoo.getWorker(8)->changeProfession("Krmič");

    myZoo.removeWorker(8); // smažeme pracovníka, dostal výpověď :)

    // vypíše počet pracovníků, jejich jméno a profesi
    cout << "Počet pracovníků: " << myZoo.getWorkerCount() << endl;

    for(int i = 0; i < myZoo.getWorkerCount();i++) {
        cout << myZoo.getWorker(i)->getName() << " " << myZoo.getWorker(i)->getProfession() << endl;
    }
    getchar();

    //AddExpositions
    cout << "Expozice" << endl << endl;

    Exposition* exp1 = new Exposition("Africa"); // přidání expozice předem

    myZoo.addExposition(exp1);
    myZoo.addExposition("Antartica"); // nebo zase ručně
    myZoo.addExposition("Evropa");

    myZoo.removeExposition(2);


    cout << "Počet expozicí: " << myZoo.getExpositionsCount() << endl;
    for(int i = 0; i < myZoo.getExpositionsCount();i++) {
        cout << myZoo.getExposition(i)->getName() << endl;
    }

    //AddEnclosures
    int n;
    cout << endl << "Vypište číslo, pro kterou expozici, chcete vědět výběhy." << endl;
    scanf("%d", &n);
    cout << endl << myZoo.getExposition(n)->getName() << " Výběhy" << endl << endl;

    //vytvoření výběhů
    for(int i = 0; i < myZoo.getExpositionsCount(); i++) {
        for(int j = 0; j < 5;j++) {
            string box = "Box " + to_string(j);
            myZoo.getExposition(i)->addEnclosure(box);
        }
    }

    for(int i = 0; i < myZoo.getExposition(n)->getEnclosuresCount();i++) {
        cout << i+1 << ": " << myZoo.getExposition(n)->getEnclosure(i)->getName() << endl;
    }

    //AddAnimal

    vector<Animal*> ani;
    Mammal* mam1 = new Mammal("Lev",8,42);
    Mammal* mam2 = new Mammal("Lev",5,37);
    Bird* bir = new Bird("Sup",11,351);
    Fish* fis = new Fish("Ryba",3,123);
    ani.push_back(mam1);
    ani.push_back(mam2);
    ani.push_back(bir);
    ani.push_back(fis);
    
    for(int i = 0; i < 5;i++) {
        myZoo.getExposition(0)->getEnclosure(i)->addAnimal(ani);
    }

    ani.clear();
    mam1 = new Mammal("Polární medvěd",8,42);
    mam2 = new Mammal("Polární medvěd",5,37);
    bir = new Bird("Tučnák",11,351);
    fis = new Fish("Kosatka",7,513);
    ani.push_back(mam1);
    ani.push_back(mam2);
    ani.push_back(bir);
    ani.push_back(fis);
    
    for(int i = 0; i < 5;i++) {
        myZoo.getExposition(1)->getEnclosure(i)->addAnimal(ani);
    }    

    int m;
    cout << endl << "Vypište číslo, pro který box, chcete vědět zvířata." << endl;
    scanf("%d", &m);

    for(int i = 0; i < myZoo.getExposition(n)->getEnclosure(m)->getAnimalCount();i++) {
        cout << myZoo.getExposition(n)->getEnclosure(m)->getAnimal(i)->getSpecies() << endl;
        cout << myZoo.getExposition(n)->getEnclosure(m)->getAnimal(i)->printInfo() << endl;
        cout << myZoo.getExposition(n)->getEnclosure(m)->getAnimal(i)->printSpecific1() << endl;
        cout << myZoo.getExposition(n)->getEnclosure(m)->getAnimal(i)->printSpecific2() << endl;
    }



    getchar();

    return 0;
}

//g++ -o main main.cpp Zoo.cpp Worker.cpp Exposition.cpp Enclosure.cpp Animal.cpp Mammal.cpp Bird.cpp Fish.cpp && ./main