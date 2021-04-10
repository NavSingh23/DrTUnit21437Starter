//Dr_T Unit 2 COSC-1437 Starter 
/* Task -
//Navjot Gill

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <stack>
#include <cassert>
#include <set>
#include <utility>
#include <map>


using namespace std; 
typedef map <string, int> MapT;
typedef MapT::const_iterator MapIterT;
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector2
{
    vector<int> vec2;

public:
    MyClassVector2(vector<int> v): vec2(v)
    {

    }
    void print() //This prints out values of vector 
    {
      for (int i=0; i < vec2.size(); i++)
      cout << vec2[i] << " ";
    }
};
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector3
{
  vector <int> & vec;

public:
MyClassVector3(vector<int>& arr)
: vec(arr)
{

}
void print() //This prints out values of vector
{
for (int i = 0; i < vec.size(); i++)
    cout << vec[i] << " ";
}
};
    // returns value if it less than 7

class less_than_7
{
public:
less_than_7(int x){
}
bool operator()(int z)
{
  return z < 7;
}
private:
int maz;
};





int main(int argc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1.1);
    vd.push_back(2.2);
    vd.push_back(3.3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

   // add 3 elements to the vs vector
    string str1 ("x");
    string str2 ("x");
    string str3 ("x");
    vs.push_back(str1);
    vs.push_back(str2);
    vs.push_back(str3);
    

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   //This is another way to display vd vector
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
  cout << "\nValues in vi: \n"; 
   for(int vals : vi)
   {
     cout << vals << endl; 
   }
   // display the 3 elements in the vs vector
   cout << "\nValues in vs: \n";
     for(int i = 0; i < vs.size(); i++)
   {
     cout << vs[i] << endl; 
   }
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
      cout << "\nVector_as_Class_Member 2" << endl;
      vector<int> vec2; // initalizes vec2
      for (int k = 1; k <= 5; k++)
        vec2.push_back(k); // adds values into vec2
      MyClassVector2 obj2(vec2); 
      obj2.print();

      cout << "\nVector_as_Class_Member 3" << endl;
      vector<int> vec3; // initalizes vec3
      for (int k = 1; k <= 5; k++)
        vec3.push_back(k); //inserts values into vec3
      MyClassVector2 obj3(vec3);
      obj3.print();    
      //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
  



    /****Section_Name***STL_Iterators*/ 
    vector< int > vint(10);
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    //expanded to add more elements 
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;
    cout << "\nIterators" << endl;
    //
    vector< int>::iterator it;
    for (it = vint.begin(); it != vint.end(); ++it)
    cout << " " << *it;

    /****Section_Name*** Stack*/
    stack< int > st;

    st.push(100); //This part of the code pushs number on the stack
    assert(st.size()== 1); //This verifies that one element is on the stack
    assert( st.top() == 100); //This verifies the element value

    st.top() = 456; //The 456 is the new assigned value
    assert( st.top() == 456);

    st.pop(); //This line removes element
    assert( st.empty() == true);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    
    set < int> iset; // this is a set of unique interger numbers
    
    // This section populates set with some values
    iset.insert(11);
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
  // This helps figure out if 55 already stored
    if (iset.find(55) != iset.end()) // 
    {
      iset.insert(55);
    }
    
    // This is a sanity check that prints out the unique values
    assert( iset.size() == 4);
    set<int>::iterator jt;
    cout << "\n Unique Integers\n";
    //This displays the elements
    for (jt = iset.begin(); jt != iset.end(); jt++)
    {
      cout << " " << *jt;
    }
    
    //Write comments that help one better understand what the code is doing.

   // ****Section_Name****Pair_Structure
    //Write the code as presented in: 4. std::pair structure
    
    // This pair holds two strings  
  pair< string, string > strstr;
  strstr.first = "Hello"; // declares first string
  strstr.second = "World"; // declares second string

//This pair holds an int and string 
  pair< int, string> intstr;
  intstr.first = 1; //declares the first int
  intstr.second = "one"; // declares the second string

// this pair holds a string and int and they are defined in the first line 
  pair <string, int> strint("two",2); 
  assert(strint.first == "two"); // checks to make sure first string equals two
  assert (strint.second == 2);// checks to make sure second int equals 2


    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    MapT amap;// uses the typedef above
    pair<MapIterT, bool> result = amap.insert(make_pair("Fred", 45));//this inserts the element
    assert( result.second == true ); //checks to make sure result is 45
    assert(result.first->second == 45);// double checks value

    result = amap.insert(make_pair("Fred", 54));//result.first points there
    assert(result.second == false);// checks to make sure value changed
    assert(result.first -> second == 45); //checks to make sure fred was already there 


    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    map <string, string > phone_book; // this maps 2 strings (key and value)
    phone_book["411"] = "Directory"; // inserting 411 is the directory
    phone_book["911"] = "Emergency"; //inserting 911 is emergnecy
    phone_book["508-678-2811"] = "BCC";//inserting is for BCC
    cout << "\n\nMap Summary:\n";

    //This inserts 411 and Directory if they are not there
    if (phone_book.find("411") != phone_book.end())
    {
      phone_book.insert(
        make_pair(
          string("411"),
          string("Directory")
        )
      );
    }
    //double checks that phone book size is 3 
    assert(phone_book.size() == 3);
    //This code outputs the contents of phone_book
    map< string, string >::const_iterator kt;
    for (kt = phone_book.begin(); kt != phone_book.end(); ++kt)
    {
      cout << " "<< kt->first << " " << kt->second << endl;
    }
  

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
    int arr[100];// this initializes a int array of 100 elements
    sort(arr, arr+100); // sorts in accending order
    vector<int> v11; // this initalizes an int array called v1
    sort(v11.begin(), v11.end());// this sorts the vector
   

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    vector<int> v1;// initializes an int vector 
    int t = 6;
    int count_less = std::count_if( v1.begin(), v1.end(), less_than_7(t)); //count_if returns the number of elements in a range if less than 7 is true 

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }