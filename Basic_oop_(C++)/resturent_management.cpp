#include<bits/stdc++.h>
using namespace std;


class Restaurant
{
public:
    int item_num;
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    double total_tax;

    Restaurant (int i_num,int food_item_codes[],string food_item_names[],int food_item_prices[],double total_tax)
    {
        this->item_num = i_num;
        this->total_tax = total_tax;
        for(int i = 0; i<i_num ; i++)
        {
            this ->food_item_codes[i] = food_item_codes[i];
            this ->food_item_names[i] = food_item_names[i];
            this ->food_item_prices[i] = food_item_prices[i];
        }


    }

};

Restaurant* store_data()
{
    int item_number;
    cin>>item_number;
    int food_item_codes[12];
    string food_item_names[42];
    int food_item_prices[12];

    for(int i = 0 ; i < item_number ; i++)
        {
          cin>>food_item_codes[i];
          getchar();
          getline(cin,food_item_names[i]);
          cin>>food_item_prices[i];
    }
    Restaurant *restaurent = new Restaurant(item_number,food_item_codes, food_item_names, food_item_prices,0.0);
    return restaurent;
}


int main()

{


  Restaurant *restaurent = store_data();

  while(true)
  {


        cout<<endl;
        cout<<endl;
        cout<< "\t\t\t\t Make Bill \t\t\t"<<endl;
        cout<< "---------------------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<< "Item Code\t\tItem Name\t\t\t\tItem Price"<<endl;
        int i_num = restaurent->item_num;
        for(int i = 0 ; i < i_num ; i++){
              cout<<restaurent->food_item_codes[i]<<"\t\t\t"<<restaurent->food_item_names[i]<<"\t\t\t"<<restaurent->food_item_prices[i]<<endl;
        }
        cout<<endl;
        int table_no,choosen_item;
        cout<<"Enter the table number : ";
        cin>>table_no;
        cout<< "Enter the Number of Items : ";
        cin>>choosen_item;
        int code[12],quantity[20];

        for(int i = 0 ; i < choosen_item ; i++){
            bool flag = false;
            while(1){
                cout<< "Enter Item "<<i+1<< " Code : ";
                 cin>>code[i];
                 for(int k = 0 ; k < i_num ; k++){
                       if(code[i] == restaurent->food_item_codes[k])
                       {
                           flag = true;
                           break;

                       }


                 }
                if(flag){
                        break;
                       }
                       else
                       {
                            cout<<"Invalid code!!! Please give a valid code."<<endl;
                       }
            }


            cout<< "Enter Item "<<i+1<< " Quantity : ";
            cin>>quantity[i];
        }
        cout<<endl;
        cout<<endl;
        cout<< "\t\t\t\t\tBill Summary\t\t\t"<<endl;
        cout<< "---------------------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<< "Table NO. : "<<table_no<<endl;
        cout<< "Item Code\t\tItem Name\t\t\tItem Price\tItem Quantity\tTotal Price"<<endl;
        double sum_of_amount = 0;
        for(int i = 0 ; i < choosen_item ; i++){
            for(int j = 0 ; j < i_num ; j++){
                if(code[i] == restaurent->food_item_codes[j])
              {
                  cout<<restaurent->food_item_codes[j]<<"\t\t\t"<<restaurent->food_item_names[j]<<"\t\t"<<restaurent->food_item_prices[j]<<"\t\t"<<quantity[i]<<"\t\t"<<restaurent->food_item_prices[j]*quantity[i]<<endl;
                   sum_of_amount += restaurent->food_item_prices[j]*quantity[i];
              }
            }

        }

        double tax = (sum_of_amount*5)/100;
        cout<< "TAX: \t\t\t\t\t\t\t\t\t\t\t"<<tax<<endl;
        restaurent->total_tax += tax;

        cout<< "----------------------------------------------------------------------------------------------------"<<endl;
        cout<<"NET TOTAL: \t\t\t\t\t\t\t\t\t\t"<<sum_of_amount+tax<<endl;
        //cout<<"TOTAL TAX: \t\t\t\t\t\t\t\t\t\t"<<restaurent->total_tax<<endl;


  }
    return 0;
}

/*
Input data :


12
170
Chicken Soup 1:2
260
171
Chicken Corn Soup 1:2
200
172
Thai Special Soup 1:2
300
260
Chicken Fried Rice 1:2
250
261
Egg Fried Rice 1:2
230
262
Prawn Fried Rice 1:2
300
310
Beef Mutton Kabab 1:1
150
311
Chicken Grill 1:4
340
450
Chicken Curry 1:3
550
451
Beef Special Curry 1:3
760
452
Chicken Sizzling 1:3
710
453
Beef Sizzling 1:3
970


*/
