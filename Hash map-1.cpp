#include<simplecpp>
#include<map>
#include<unordered_map>


main_program{

   //creation
  // unordered_map<string,int>m;
     map<string,int>m;

   //insertion

   //1
   pair<string,int>p=make_pair("krishna",3);
   m.insert(p);

   //2
    pair<string,int>pair2("uprit",4);
    m.insert(pair2);

    //3
    m["mera"]=1;

    //what will happen if mera is declared twice?
    m["mera"]=2;

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("krishna")<<endl;

  //  cout<<m.at("unknownKey")<<endl;
    cout<<m["unknownKey"]<<endl; // yaha ek entry ban jaati hai unknown key ke liye corresponding to 0.
     cout<<m.at("unknownKey")<<endl; // isne jo entry pe 0 pada tha vo lakar print kara diya.

     //size
     cout<<m.size()<<endl; // since we have 4 entries so size is "4".


     //to check presence
     cout<<m.count("bro")<<endl; // for checking presence of any member we use count() function.
     // in absence it will give 0 and in presence it will give 1.
     cout<<m.count("krishna")<<endl;

     //erase function
     m.erase("krishna");
     cout<<m.size()<<endl;

     for(auto i:m)
     {
     cout<<i.first<<" "<<i.second<<endl;
     }

     //second method is to use iterator
   //  unordered_map<string,int>::iterator it=m.begin();
      map<string,int>::iterator it=m.begin();
     while(it!=m.end())
     {
     cout<<it->first<<" "<<it->second<<endl;
     it++;
     }

}
