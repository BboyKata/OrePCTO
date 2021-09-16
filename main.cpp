#include <iostream>
#define oreLimite 80
#define alunniTotali 4

using namespace std;

struct Alunno{
    int matricola;
    string cognome;
    string nome;
    int annoNascita;
    int orePCTO;
};

void inserimento(Alunno alunni[]){
    for(int i=0; i<alunniTotali; i++){
        cout<<"Alunni inseriti: "<<i<<endl;
        cout<<"Inserisci nome: ";
        cin>>alunni[i].nome;
        cout<<"Inserisci cognome: ";
        cin>>alunni[i].cognome;
        cout<<"Inserisci matricola: ";
        cin>>alunni[i].matricola;
        cout<<"Inserisci anno di nascita: ";
        cin>>alunni[i].annoNascita;
        cout<<"Inserisci quante ore di PCTO ha fatto: ";
        cin>>alunni[i].orePCTO;
        cout<<endl;
    }
}

void visualizza(Alunno alunni[]){
    for(int i=0; i<alunniTotali; i++){
        cout<<"Alunno numero: "<<i<<endl;
        cout<<"Nome: "<<alunni[i].nome<<endl;
        cout<<"Cognome: "<<alunni[i].cognome<<endl;
        cout<<"Matricola: "<<alunni[i].matricola<<endl;
        cout<<"Anno di nascita: "<<alunni[i].annoNascita<<endl;
        cout<<"Ore di PCTO ha fatto: "<<alunni[i].orePCTO<<endl;
        cout<<endl;
    }
}

int alunniSottoLimiteOrario(Alunno alunni[])
{
    int nAlunni = 0;
    for(int i=0; i<alunniTotali;i++){
        if(alunni[i].orePCTO<oreLimite){
            nAlunni++;
        }
    }
    return nAlunni;
}

float alunniSottoLimiteOrarioPerc(Alunno alunni[])
{
    float perc = (alunniSottoLimiteOrario(alunni)*100)/alunniTotali;

    return perc;
}

int alunniSopraLimiteOrario(Alunno alunni[])
{
    int nAlunni = 0;
    for(int i=0; i<alunniTotali;i++){
        if(alunni[i].orePCTO>oreLimite){
            nAlunni++;
        }
    }
    return nAlunni;
}

float alunniSotpraLimiteOrarioPerc(Alunno alunni[])
{
    float perc = (alunniSopraLimiteOrario(alunni)*100)/alunniTotali;

    return perc;
}

int alunniEsattoLimiteOrario(Alunno alunni[])
{
    int nAlunni = 0;
    for(int i=0; i<alunniTotali;i++){
        if(alunni[i].orePCTO==oreLimite){
            nAlunni++;
        }
    }
    return nAlunni;
}

float alunniEsattoLimiteOrariooLimiteOrarioPerc(Alunno alunni[])
{
    float perc = (alunniEsattoLimiteOrario(alunni)*100)/alunniTotali;

    return perc;
}

int main()
{
    Alunno alunni[4]; int scelta;
    do{
        cout<<"Operazioni Alunni PCTO disponibili:\n0)Inserimento;\n1)Visualizzazione;\n2)Numero alunni sotto limite orario;\n3)Percentuale alunni sotto limite orario\n";
        cout<<"4)Numero alunni con limite orario esatto;\n5)Percentuale alunni con limite orario esatto;\n6)Numero alunni sopra il limite orario;\n7)Percentuali alunni sopra il limite orario;\n8)Esci.\nScegliere operazione: ";
        cin>>scelta;
        system("cls");
        cout<<endl;
        switch(scelta){
        case 0:
            inserimento(alunni);
            break;
        case 1:
            visualizza(alunni);
            break;
        case 2:
            cout<<"Alunni sotto il limite orario: "<<alunniSottoLimiteOrario(alunni)<<endl;
            break;
        case 3:
            cout<<"Percentuale alunni sotto il limite orario: "<<alunniSottoLimiteOrarioPerc(alunni)<<endl;
            break;
        case 4:
            cout<<"Alunni con limite orario esatto: "<<alunniEsattoLimiteOrario(alunni)<<endl;
            break;
        case 5:
            cout<<"Percentuale alunni con limite orario esatto: "<<alunniEsattoLimiteOrariooLimiteOrarioPerc(alunni)<<endl;
            break;
        case 6:
            cout<<"Alunni sopra il limite orario: "<<alunniSopraLimiteOrario(alunni)<<endl;
            break;
        case 7:
            cout<<"Percentuale alunni sopra il limite orario: "<<alunniSotpraLimiteOrarioPerc(alunni)<<endl;
            break;
        case 8:
            cout<<"Arrivederci"<<endl;
            break;
        default:
            cout<<"Errore di inserimento"<<endl;

            }
        cout<<endl;
    }while(scelta != 8);

    return 0;
}
