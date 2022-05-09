//
//  main.cpp
//  Vjezba_60
//
//  Created by Krešimir Šunić on 24/01/2020.
//  Copyright © 2020 Krešimir Šunić. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
class raznostranicni_trokut{
    double a, b, c;
public:
    void postavi_stranicu_a(double stranica);
    void postavi_stranicu_b(double stranica);
    void postavi_stranicu_c(double stranica);
    double opseg();
    double povrsina();
};
class pravokutni_trokut{
    double a, b, c;
public:
    void postavi_stranicu_a(double stranica);
    void postavi_stranicu_b(double stranica);
    void postavi_stranicu_c(double stranica);
    double opseg();
    double povrsina();
    double hipotenuza();
};
class jednakokracni_trokut{
    double a, b;
public:
    void postavi_stranicu_a(double stranica);
    void postavi_stranicu_b(double stranica);
    double opseg();
    double povrsina();
    double visina();
};
class jednakostranicni_trokut{
    double a;
public:
    void postavi_dimenzije(double stranica);
    double opseg();
    double povrsina();
};
int main(){
    raznostranicni_trokut rst;
    pravokutni_trokut pkt;
    jednakokracni_trokut jkt;
    jednakostranicni_trokut jst;
    int n, m;
    double a, b, c;
    cout << "Dobrodosli u program za racunanje trokuta. Unesite 1 za raznostranicni, 2 za pravokutni, 3 za jednakokracni ili 4 za jednakostranicni trokut :";
    cin >> n;
    while(n < 1 || n > 4){
        cout << "Pogresan unos. Pokusajte ponovo :";
        cin >> n;
    }
    if (n == 1){
        cout << "Dobrodosli u racunanje s raznostranicnim trokutom. Unesite dimenzije trokuta : ";
        cin >> a;
        rst.postavi_stranicu_a(a);
        cin >> b;
        rst.postavi_stranicu_b(b);
        cin >> c;
        rst.postavi_stranicu_c(c);
        cout << "Unesite 1 za racunanje opsega ili 2 za povrsinu :";
        cin >> m;
        while(m < 1 || m > 2){
            cout << "Pogresan unos. Pokusajte ponovo :";
            cin >> m;
        }
        if (m == 1){
            cout << "Opseg je " << rst.opseg() << endl;
        }
        else if (m == 2){
            cout << "Povrsina je " << rst.povrsina() << endl;
        }
    }
    else if (n == 2){
        cout << "Dobrodosli u racunanje s pravokutnim trokutom. Unesite dimenzije trokuta : ";
        cin >> a;
        pkt.postavi_stranicu_a(a);
        cin >> b;
        pkt.postavi_stranicu_b(b);
        cin >> c;
        pkt.postavi_stranicu_c(c);
        cout << "Unesite 1 za racunanje opsega, 2 za povrisnu ili 3 za hipotenuzu : ";
        cin >> m;
        while(m < 1 || m > 3){
            cout << "Pogresan unos. Pokusajte ponovo :";
            cin >> m;
        }
        if (m == 1){
            cout << "Opseg je " << pkt.opseg() << endl;
        }
        else if (m == 2){
            cout << "Povrsina je " << pkt.povrsina() << endl;
        }
        else if (m == 3){
            cout << "Hipotenuza iznosi " << pkt.hipotenuza() << endl;
        }
    }
    else if (n == 3){
        cout << "Dobrodosli u racunanje s jednakokracnim trokutom. Unesite dimenzije trokuta : ";
        cin >> a;
        jkt.postavi_stranicu_a(a);
        cin >> b;
        jkt.postavi_stranicu_b(b);
        cout << "Unesite 1 za racunanje opsega, 2 za povrsinu ili 3 za visinu : ";
        cin >> m;
        while(m < 1 || m > 3){
            cout << "Pogresan unos. Pokusajte ponovo :";
            cin >> m;
        }
        if (m == 1){
            cout << "Opseg je " << jkt.opseg() << endl;
        }
        else if (m == 2){
            cout << "Povrsina je " << jkt.povrsina() << endl;
        }
        else if (m == 3){
            cout << "Visina iznosi " << jkt.visina() << endl;
        }
    }
    else if (n == 4){
        cout << "Dobrodosli u racunanje s jednakostranicnim trokutom. Unesite dimenzije trokuta : ";
        cin >> a;
        jst.postavi_dimenzije(a);
        cout << "Unesite 1 za racunanje opsega ili 2 za racunanje povrsine : " << endl;
        cin >> m;
        while(m < 1 || m > 2){
            cout << "Pogresan unos. Pokusajte ponovo :";
            cin >> m;
        }
        if (m == 1){
            cout << "Opseg je " << jst.opseg() << endl;
        }
        else if (m == 2){
            cout << "Povrsina je " << jst.povrsina() << endl;
        }
    }
}
void raznostranicni_trokut:: postavi_stranicu_a(double stranica){
    a = stranica;
    return;
}
void raznostranicni_trokut:: postavi_stranicu_b(double stranica){
    b = stranica;
    return;
}
void raznostranicni_trokut:: postavi_stranicu_c(double stranica){
    c = stranica;
    return;
}
double raznostranicni_trokut:: opseg(){
    return a + b + c;
}
double raznostranicni_trokut:: povrsina(){
    return a * b * c;
}
void pravokutni_trokut:: postavi_stranicu_a(double stranica){
    a = stranica;
}
void pravokutni_trokut:: postavi_stranicu_b(double stranica){
    b = stranica;
}
void pravokutni_trokut:: postavi_stranicu_c(double stranica){
    c = stranica;
}
double pravokutni_trokut:: opseg(){
    return a + b + c;
}
double pravokutni_trokut:: povrsina(){
    return (a * b) / 2;
}
double pravokutni_trokut:: hipotenuza(){
    return sqrt((a * a) + (b * b));
}
void jednakokracni_trokut:: postavi_stranicu_a(double stranica){
    a = stranica;
    return;
}
void jednakokracni_trokut:: postavi_stranicu_b(double stranica){
    b = stranica;
    return;
}
double jednakokracni_trokut:: opseg(){
    return a + (2 * b);
}
double jednakokracni_trokut:: povrsina(){
    return (a * sqrt(b * b - ((a / 2) * (a /2))) ) / 2;
}
double jednakokracni_trokut:: visina(){
    return sqrt((b * b) - ((a / 2)*(a / 2)));
}
void jednakostranicni_trokut:: postavi_dimenzije(double stranica){
    a = stranica;
    return;
}
double jednakostranicni_trokut:: opseg(){
    return 3 * a;
}
double jednakostranicni_trokut:: povrsina(){
    return ((sqrt(3)) / 4) * (a * a);
}
