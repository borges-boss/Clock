#include <iostream>

using namespace std;
class Relogio {

  private:
    int hora, minuto, segundo;

  private:
    int horario[3];

  public:
    Relogio(int hora, int minuto, int segundo) {
      this -> hora = hora;
      this -> minuto = minuto;
      this -> segundo = segundo;
    }

  public:
    Relogio() {
      hora = 0;
      minuto = 0;
      segundo = 0;
    }

  public:
    void setHora(int hora, int minuto, int segundo) {
      this -> hora = hora;
      this -> minuto = minuto;
      this -> segundo = segundo;

      horario[0] = hora;
      horario[1] = minuto;
      horario[2] = segundo;
    }

  public:
    int * getHora() {
      return horario;
    }

  public:
    void avancarRelogio() {
      segundo++;

      if (segundo > 59) {
        segundo = 0;
        minuto++;
        if (minuto > 59) {
          minuto = 0;
          hora++;
          if (hora > 23) {
            hora = 0;
          }
        }
      }
      setHora(hora, minuto, segundo); 
    }
};

int main(void) {

  Relogio * r = new Relogio(10, 59, 59);
  r -> avancarRelogio();
  cout << r -> getHora()[0] << ":" << r -> getHora()[1] << ":" << r -> getHora()[2];
}