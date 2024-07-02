#include <iostream>
#include <regex>
#include <map>
#include <string>

using namespace std;





// Building a store managment system 
class Store{
    private:
        string StoreName;
        string Barcode;
        string ItemName;
        short Price;
        short Quantity;
        std::map<string, int> Items;

    public:
        Store(string storeName){
            setStoreName(storeName);
        }


        void setStoreName(string Storename){
            regex letterPattern("[a-zA-Z]");
            smatch matches;
            if (regex_search(Storename, matches, letterPattern)){
                StoreName=Storename;
            }
        }

        string getStoreName(){
            return StoreName;
        }
 
        void PrintReceipt(){

        }

        void InsertItem(string barcode,int price){
            Items.insert(std::make_pair(barcode, price));  
        }

        int GetItem(string barcode) {
            map<string, int>::iterator iter;
            iter = Items.find(barcode);
            int Item=iter->second;
            return Item;
        }

 

};


int main() {
    short Choice;
    short Action;
    Store store("default");
    string StoreName;
    string Barcode;
    int Price;
    string ItemName;
    bool valid = true;

    cout << "Welcome to Store Management" << endl;
    cout << "-----------------------------" << endl;
    cout << "Sign in or Sign up" << endl;

    cout << "1. Sign In" << endl;
    cout << "2. Sign Up" << endl;

    cout << "-----------------------------" << endl;

    cout << "...";

    cin >> Choice;

    if (Choice==1){
        system("clear");
        cout << "Enter Store Name: ";
        cin >> StoreName;
        store.setStoreName(StoreName);
        cout << "Welcome " << store.getStoreName() << endl;

        cout << "Choose Action to do" << endl;
        cout << "-----------------------------" << endl;
        cout << "1. Scan Code" << endl;
        cout << "2. Insert Item" << endl;
        cout << "-----------------------------" << endl;

     
        cin >> Action;

        if (Action==2){
            cout << "Insert Item selected" << endl;
            cout << "Enter Barcode: ";
            cin >> Barcode;
            cout << "Enter Price: ";
            cin >> Price;
            store.InsertItem(Barcode, Price);
            cout << "Item inserted: " << Barcode << " with price " << Price << endl;
        }
        
    }

  

    return 0;
}