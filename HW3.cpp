// #include <iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int x=0,y=0;
//     cout<<"Введите два числа от 100 до 1000 ";
//     cin>>x>>y;
//     if (100>x||x>1000 || y<100 || y>1000){
//         cout<<"Введите числа в нужном диапазоне";
//     }
//     else{
//         int k=0,k1=0;
//         for (int i=min(x,y);i>0;i--){
//             if (x%i==0 && y%i==0){
//                 k=i;
//                 break;
//             }
//         }
//         for (int i=max(x,y); ;i++){
//             if (i%x==0 && i%y==0){
//                 k1=i;
//                 break;
//             }
//         }
//     cout<<"НОД "<< k<<endl;
//     cout<<"НОК "<<k1<<endl;
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int n=0,x=0,c=0,opt,k=0,result2=0;
//     char characters[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     cout<<"[1]Введите число в десятичном формате и основание к которому надо привести число "<<endl;
//     cout<<"[2]Введите чило по основанию n и основание n для перевода в десятичное число "<<endl;
//     cout<<"---------------------------------------------------------------"<<endl;
//     cout<<"Выберите опцию";
//     cin >> opt;
//     string result="";
//     switch (opt){
    
//         case 1:
//             cout<<"Введите десятичное число"<<endl;
//             cin>>x;
//             cout<<"и основание от 2 до 36 "<<endl;
//             cin>>n;
//             if (n < 2 || n > 36) {
//                 cout << "Основание должно быть от 2 до 36." << endl;
//                 return 1;
//             }
//             while (x>0){
//                 result=characters[x%n]+result;
//                 x/=n;
//             }
//             cout<<result;
//             break;
//         case 2:
//             cout<<"Введите число по основанию от 2 до 36 "<<endl;
//             cin>>x;
//             cout<< "Введите само основание "<<endl;
//             cin>>n; 
//             if (n < 2 || n > 36) {
//                 cout << "Основание должно быть от 2 до 36." << endl;
//                 return 1;
//             }
//             while (x>0){
//                 result2+=(x%10*pow(n,k));
//                 x/=10;
//                 k+=1;
//             }
//             cout<<result2;
//             break;
        
    
//     }
// }

// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <algorithm> 
// using namespace std;

// bool isStarkxVector(const vector<int>& vec) {
//     for (int num : vec) {
//         if (num % 2 != 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int maxDigit(int number) {
//     int max_digit = 0;
//     while (number > 0) {
//         max_digit = max(max_digit, number % 10);
//         number /= 10;
//     }
//     return max_digit;
// }

// int main() {
//     srand(static_cast<unsigned>(time(0)));

//     int n;
//     cout << "Введите количество элементов: ";
//     cin >> n;

//     int* arr = static_cast<int*>(malloc(n * sizeof(int)));

//     for (int i = 0; i < n; ++i) {
//         arr[i] = 1000 + rand() % 9000;
//     }
//     vector<int> vec(arr, arr + n);
//     free(arr);

//     if (isStarkxVector(vec)) {
//         cout << "Вектор является вектором STARKX.\n";
//     } else {
//         cout << "Вектор не является вектором STARKX.\n";
//     }

//     for (size_t i = 0; i < vec.size(); ++i) {
//         cout << "Элемент " << vec[i] << ": самая большая цифра = " << maxDigit(vec[i]) << endl;
//     }

//     return 0;
// }
