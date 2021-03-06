#include "model.h"

Model::Model()
{
    methode = CUDA;
    nombre = 0;
    temps = -1;
}

int Model::getMethode() {
    return methode;
}

long double Model::getNombre() {
    return nombre;
}

QList<long double> Model::getListFacteursPremiers() {
    return listFacteursPremiers;
}

int Model::getTempsExecution() {
    return temps;
}

void Model::setMethode(int m) {
    methode = m;
}

void Model::setNombre(long double n) {
    nombre = n;
}

void Model::setListFacteursPremiers(QList<long double> l) {
    listFacteursPremiers = l;
}

void Model::setTempsExecution(int t) {
    temps = t;
}

int Model::getNbreInstruction() {
    return nbre_instructions;
}

void Model::setNbreInstruction(int nbrInstruction) {
    nbre_instructions = nbrInstruction;
}

double Model::getNbreInstrParSec() {
    if (temps == 0) {
        return 0;
    }
    return (nbre_instructions/temps);
}

QString Model::getTitre() {
    return titre;
}

void Model::setTitre(QString titre) {
    this->titre = titre;
}


void Model::reinitialiser() {
    methode = CUDA;
    nombre = 0;
    temps = 0;
    nbre_instructions = 0;
    listFacteursPremiers.clear();
    //listFacteursPremiers.append(5);
    //listFacteursPremiers.append(2);
}
