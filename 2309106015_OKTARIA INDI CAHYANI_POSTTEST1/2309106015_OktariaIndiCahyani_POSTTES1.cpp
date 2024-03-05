#include<iostream>
using namespace std;

int main() {    
    int i;  
    string pass_input, user_input;
    float rupiah, dollar, euro, yen;
    int pilih;
    float dollarrupiah, dollareuro, dollaryen, eurorupiah, eurodollar, euroyen, yenrupiah,yeneuro, yendollar;

    cout << "==========================================\n";    
    cout << "     Selamat Datang di KONVERSI UANG\n";    
    cout << "==========================================\n";  
    cout << "Silahkan Login jika ingin mengkonversi\n";  
    cout << "==========================================\n\n";
    string username ="oktaria";    
    string password = "2309106015";    
    string login = "block";    
    i = 1;    
    
    do {        
        cout << "Username = "; cin>>user_input;        
        cout << "Password = "; cin>>pass_input;        
        if (user_input == username && pass_input == password) {           
            cout << " ================\n";            
            cout << "| Login Berhasil |" << endl;               
            i = 4;
            login = "berhasil";        
        } 
        else {            
            cout << "\n===========================\n";            
            cout << "Username / Password Salah!!! ("<<i<<"x)\n";
            cout << "=============================\n\n";            
            i = i +1;
        }   
    } while (i <= 3);
    
    if(login != "berhasil"){
        cout<<"Anda telah 3x salah login.\n";       
        cout<<"Silahkan coba 100 Hari lagi. Terima Kasih..\n\n";      
    }   
    else {
        do {
            cout<<"Konveri Mata Uang"<<endl;
            cout << "\n===========================\n";
            cout<< "1. Konversi DOLLAR"<<endl;
            cout<< "2. Konversi EURO"<<endl;
            cout<< "3. Konversi YEN"<<endl;
            cout << "\n===========================\n";
            cout<< "Masukan pilihan anda: "; cin>>pilih;
            cout << "\n===========================\n";

            if (pilih==1)
            {
                cout<< "1. Konversi DOLLAR"<<endl;
                cout << "\n===========================\n";
                cout<<"Masukan Nilai: "; cin>>dollar;
                dollarrupiah = dollar * 15695;
                dollareuro = dollar * 0.92;
                dollaryen = dollar * 150.11;
                cout<< "konversi dollar ke rupiah: " << dollarrupiah << "ke euro: " << dollareuro << "Ke yen: " << dollaryen <<endl;
            }

            else if (pilih==2)
            {
                cout<< "1. Konversi EURO"<<endl;
                cout << "\n===========================\n";
                cout<<"Masukan Nilai: "; cin>>euro;
                eurorupiah = euro * 17000;
                eurodollar = euro * 1.09;
                euroyen = euro * 162.93;
                cout<< "konversi euro ke rupiah: " << eurorupiah << "ke dollar: " << eurodollar << "ke yen: " << euroyen <<endl;
            }

            else if (pilih==3)
            {
                cout<< "1. Konversi YEN"<<endl;
                cout << "\n===========================\n";
                cout<<"Masukan Nilai: "; cin>>yen;
                yenrupiah = yen * 104;
                yendollar = yen * 0.0067;
                yeneuro = yen * 0.0061;
                cout<< "konversi yen ke rupiah: " << yenrupiah << " ke dollar: " << yendollar << "ke euro: " <<endl;
            }
            else {
                cout<<"Menu yang anda pilih tidak tersedia!"<<endl;
            }

            cout << "Apakah anda ingin mengkonversi lagi? (y/Y untuk lanjut, lainnya untuk keluar): "; 
            cin >> login;
            cout << "\n===========================\n";
        } while (login == "y" || login == "Y");
    }

    cout << "Terima kasih telah menggunakan program konversi uang.\n";
    return 0;
}
