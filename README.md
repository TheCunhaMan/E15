# E15

Development of the concept:

TARGET GROUP:
  - utilizadores da Smart Home;
  - técnico de manutenção;
  
NEEDS:
  - Regular temperatura, iluminação;
  - Segurança:
    - Controlar alarme, entradas na casa
    (Utilizador presente/utilizador ausente)
  - Controlo remoto sobre as funcionalidades da casa (electrodomésticos  etc);
  
 PRODUCT:
  - Software da Smart Home;
  - Ter diferentes perfis para diferentes actores (permissões e utilizações distintas);
  
  GOALS:
    - Aumentar a eficiência energética;
    - Ser de utilização fácil e intiutiva;
    - Utilização livre/costumizavel;
  
  
  
  
  
  
  
ACTORES:
  - Administrador;
  - Técnico Manutenção;
  - Utilizador*  
 
 *Utilizador - Casos de uso:
    - Modo presente:
     - utilização simples (on/off);
     - configuração (definir parametros (ex:regular temperatura);
   - Modo ausente;
    
    
  
  Telos B sensor measure functions:
  
// Hex to dec:

unsigned long hex2int(char *a, unsigned int len)
{
    int i;
    unsigned long val = 0;

    for(i=0;i<len;i++)
       if(a[i] <= 57)
        val += (a[i]-48)*(1<<(4*(len-1-i)));
       else
        val += (a[i]-55)*(1<<(4*(len-1-i)));

    return val;
}
  
