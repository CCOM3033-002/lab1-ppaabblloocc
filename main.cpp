/* 
Lab Box Office
Pablo Campos Mendez
801-22-5170
CCOM 3033
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //Mis variables
    string pelicula;
    float Adultickets,Childtickets,Gross,Net,Distributor;

    //Pide las variables
    cout << "Cual es el nombre de la pelicula: ";
    cin >> pelicula;
    cout << "Cuantos tickets de adulto se vendieron: ";
    cin >> Adultickets;
    cout << "Cuantos tickets de niño se vendieron: ";
    cin >> Childtickets;

    //Despliega 
    cout <<"\nMovie Name:"<<setw(36)<<"'"<<pelicula<<"'";
    cout <<"\nAdult tickets sold:"<<setw(30)<<Adultickets;
    cout <<"\nChild tickets sold:"<<setw(30)<<Childtickets;

    Gross = (Adultickets*10.0)+(Childtickets*6.0);
    cout <<"\nGross Box Office Profit:"<<"\t\t$"<<setw(10)<<fixed<<setprecision(2)<<Gross;
    Net = Gross*0.2;
    cout <<"\nNet Box Office Profit:"<<"\t\t\t$"<<setw(10)<<fixed<<setprecision(2)<<Net;
    Distributor = Gross-Net;
    cout <<"\nAmount paid to Distributor:"<<"\t\t$"<<setw(10)<<fixed<<setprecision(2)<<Distributor<<endl;

    return 0;
}

