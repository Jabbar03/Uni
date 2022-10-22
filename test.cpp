#include <iostream>
using namespace std;
const int len=20;
int age_tot=0;
const int n_stud=3;

//struct studente
struct student {
  char name[len];
  char surname[len];
  int sum_mark;
  int n_mark;
};

//funzione nome
student name(student tmp) {
  int i=0;
  bool flag=false;
  cout << "Inserire il nome dello studente, inserire 0 al termine: " << "\n";
  while(!flag) {
    cin >> tmp.name[i];
    if(tmp.name[i]=='0') flag=true;
    i++;
  }
  flag=false;  i=0;
  cout << "Inserire il cognome dello studente, inserire 0 al termine: " << "\n";
  while(!flag) {
    cin >> tmp.name[i];
    if(tmp.name[i]=='0') flag=true;
    i++;
  }
  return(tmp);
}

//inserimento studente: voti ed età
student new_stud() {
  student tmp;
  int age;
  tmp.n_mark=0;
  tmp.sum_mark=0;
  cout << "Inserire l'eta' dello studente: " << endl;
  cin >> age;
  age_tot += age;
  tmp = name(tmp);
  return(tmp);
}

//funzione nuovo voto
student new_mark(student S) {
  int m;
  bool flag=true;
  cout << "Inserire il voto dell'esame (fra 0 e 30):  " << "\n";
    cin >> m;
    if((m>=0)&&(m<=30)) {
      S.n_mark++;
      S.sum_mark += m;}
  return(S);
}

//funzione media voti
double avg_mark(student S) {
  return(S.sum_mark/double(S.n_mark));
}

//funzione media età studenti
double avg_age(student S) {
  return(age_tot/double(n_stud));
}

int main() {
  student A = new_stud();
  new_mark(A);
  new_mark(A);
  new_mark(A);
  cout << avg_mark(A) << endl;
}
