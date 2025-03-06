#include <iostream>
#include <string>
class Carte
{
private:
  std::string nume;
  std::string autor;
  float pret;
  int nr;
  public:
  Carte(std::string nume, std::string autor, float pret, int nr):nume(nume), autor(autor), pret(pret),nr(nr){}
  void afisare()
  {
      std::cout<<nume<<" "<<autor<<" "<<pret<<" "<<nr<<std::endl;
  }
  
  float get_pret()
  {
      return pret;
  }
  int get_nr()
  {
      return nr;
  }
  std::string get_nume()
  {
      return nume;
  }
};
class Lib
{
    private:
    int n;
    Carte *v[20];
    public:
    Lib(int n, Carte *v[])
    {
        this->n=n;
        for(int i=0;i<this->n;i++)
        {
            this->v[i]=new Carte(*v[i]);
        }
    }
};
int main()
{
   std::string tnume,tautor;
   float tpret;
   int tnr;
   int tn;
   float target;
   Carte *tv[20];
   std::cin>>target>>tn;
   std::cin.ignore();
   for(int i=0;i<tn;i++)
   {
       std::getline(std::cin, tnume);
       std::getline(std::cin, tautor);
       std::cin>>tpret>>tnr;
       std::cin.ignore();
       tv[i]=new Carte(tnume,tautor,tpret,tnr);
   }
   int test;
   std::cin>>test;
   if(test==1)
   {    std::cout<<target<<std::endl;
       for(int i=0;i<tn;i++)
       {
           tv[i]->afisare();
       }
   }
   if(test==2)
   {
       float pretm;
       int nrm;
       std::cin>>pretm>>nrm;
       for(int i=0;i<tn;i++)
       {
           if(tv[i]->get_pret()<=pretm&&tv[i]->get_nr()<=nrm)
           {
               tv[i]->afisare();
           }
       }
   }
   if(test==3)
   {
       int c;
       std::cin>>c;
       for(int i=0;i<tn;i++)
       {
           if(tv[i]->get_nr()<c)
           {
               std::cout<<tv[i]->get_nume()<<" "<<tv[i]->get_pret()<<" "<<tv[i]->get_pret()/2<<std::endl;
           }
       }
   }
   
   if(test==4)
   {
       float s=0;
       for(int i=0;i<tn;i++)
       {
          s=s+ tv[i]->get_pret();
          
       }
       float ma=s/tn;
      std::cout<< int(target/ma);
       
   }
 
    return 0;
}
