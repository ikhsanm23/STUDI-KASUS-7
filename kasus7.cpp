#include <iostream>
using namespace std;

class data_mhs {
  public :
    void input_menu();
    void sorting();
    void output();
    void cari_dt();
    
  private :
    int nim[50], jml_input;
    string nama[50];
    int id_dt;
    int temp_nim;
    string temp_nama;                    
};

void data_mhs::input_menu(){
	cout<<"DATA MAHASISWA"<<endl;
	cout<<"Masukka Jumlah Data Yang ingin anda inputkan :";cin>>jml_input;
	for(int i=0; i<jml_input; i++){
    	cout<<"\n\t   Data Mahasiswa Ke-"<<i+1<<endl;
      	cout<<"\n\t   MASUKAN NIM \t\t : ";cin>> nim[i];
      	cout<<"\t     MASUKAN NAMA \t : ";cin>>nama[i];
    }
}

void data_mhs::sorting(){
  	for(int i=0; i<jml_input; i++){
    	for(int j=jml_input-1; j>=1; j--){
        		
            	temp_nim=nim[j];
            	nim[j]=nim[j-1];
             	nim[j-1]=temp_nim;
             
            	temp_nama=nama[j];
            	nama[j]=nama[j-1];
            	nama[j-1]=temp_nama;
          	}
        }
    }

void data_mhs::output(){
	cout<<"\n\t  \t\t          DATA MAHASISWA \t\t              "<<endl;
	cout <<"\n\t    NIM \t\t    NAMA \t\t " << endl;	
	cout<<"\t||====================================================================||"<< endl;
	for(int i=0; i<jml_input; i++){
    	cout<< "\n\t\t"<<nim[i]<<"\t\t\t"<<nama[i]<<endl;
		cout<<"\n\t||====================================================================||"<< endl;
    }
}

void data_mhs::cari_dt(){
	cari:
		cout<<"\n\t   MASUKAN NIM YANG ANDA DICARI : "; cin>>id_dt;
		for(int i=0; i<jml_input; i++){
    		if(id_dt==nim[i]){
				cout<<"\n\t||====================================================================||\n"<< endl;
        		cout << "\n\t     NIM -> "<< nim[i]<<" || NAMA -> "<< nama[i]<<endl;;
        		cout<<"\n\n\t||====================================================================||"<< endl;
      		}else{
				cout<<"\n\t||====================================================================||"<< endl;
				cout<<"\n\t\t        BIODATA TIDAK TERDAFTAR!!!"<< endl;
				cout<<"\n\t||    ============================================================    ||"<< endl;
				goto cari;
	  		}
    	}
}
main(){
	data_mhs a;
	a.input_menu();
	a.sorting();
	a.output();
	a.cari_dt();
}
