//TASK 1



// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// vector <int> inputElem(vector<int>& a){
//     for (int i=0;i<a.size();i++){
//         cin >> a[i];
//     }
//     return a;
// }

// void outputElem(vector<int> a){
//     for (int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }

// double EvklidS(vector<int>& a, vector<int>& b){
//     double d=0;
//     for (int i=0;i<a.size();i++){
//         d=d+(a[i]-b[i])*(a[i]-b[i]);
//     }
//     d=sqrt(d);
//     return d;   
// }

// int productOf(vector<int>& a,vector<int>& b){
//     int prod=0;
//     for (int i=0; i<a.size();i++){
//         prod+=a[i]*b[i];

//     }
//     return prod;
// }

// double lenVec(vector<int>& a){
//     double l=0;
//     for (int i=0; i<a.size();i++){
//         l+=pow(a[i],2);
//     }
//     l=sqrt(l);
//     return l;
// }

// float angle(int a,double b){
//     float angle=0;
//     angle = acos(a/b);
//     return angle*180/3.14159265358979323846;
// }
// vector<int> insertionSort(vector<int>& a){
//     for (int i=1;i<a.size();i++){
//         int key = a[i];
//         int j=i-1;
//         while (j>=0 && a[j]>key){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=key;
//     }
//     return a;
// }

// vector <int>& fillC(vector<int> a, vector<int> b,vector<int>& c){
//     for (int i=0;i<a.size();i++){
//         c.push_back(a[i]);
//         c.push_back(b[i]);
//     }
//     return c;
// }

// double matWai(vector <int> c){
//     double x=0;
//     for (int i=0;i<c.size();i++){
//         x+=c[i];
//     }
//     x=(x/c.size());
//     return x;
// }

// double standOt(vector <int> c,double x){
//     double k=0;
//     for (int i=0;i<c.size();i++){
//         k+=pow((static_cast<double>(c[i])-x),2);
//     }
//     k=sqrt(k/c.size());
//     return k;
// }

// float mediana(vector<int>c){
//     int n = c.size(),med=0;

//     if (n%2==0){
//         med=(c[n/2]+c[n/2])/2;
//     }
//     else{
//         med=c[(n+1)/2];
//     }
//     return med;
// }   

// int main(){
//     int n;
//     cout<<"Введите число элементов массивов "<<endl;
//     cin>>n;

//     vector <int> a(n);
//     vector <int> b(n);
//     vector <int> c;

//     cout<<"Заполните массив А ";
//     a=inputElem(a);
//     cout<<endl<<"Прекрасно, вот ваш массив A: [ ";
//     outputElem(a);
//     cout<<"]";
//     cout<<endl;

//     cout<<"Заполните массив B ";
//     b=inputElem(b);
//     cout<<endl<<"Прекрасно, вот ваш массив B: [ ";
//     outputElem(b);
//     cout<<"]";
//     cout<<endl;

//     cout<<"Евклидово расстояние между векторами А и В = "<< EvklidS(a,b)<<endl;
//     cout<<"Скалярное произведение A и В = "<<productOf(a,b)<<endl;
//     cout<<"угол между векторами = "<<angle(productOf(a,b),lenVec(a)*lenVec(b))<<endl;

//     cout<<"отсортированный вектор С [ ";
//     outputElem(insertionSort(fillC(a, b, c)));
//     cout<<"]"<<endl;
    
//     cout<<"Мат. ожидание "<<matWai(c)<<endl;

//     cout<<"Стандартное отклонение "<<standOt(c,matWai(c))<<endl;

//     cout<<"Медиана = "<<mediana(c)<<endl;
// }


//TASK 2 not full (1,2)

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



//TASK 3



// #include <vector>
// #include <iostream>
// #include <cmath>
// #include <algorithm>
// #include <map>
// using namespace std;


// vector <int> inputElem(vector<int>& a){
//     for (int i=0;i<a.size();i++){
//         cin >> a[i];
//     }
//     return a;
// }

// void outputElem(vector<int> a){
//     for (int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }
// vector<int> countMN(vector<vector<int>> a){
//     vector <int> mn;
//     vector <int> helpMN;
//     int max_value=0;
//     for (const auto& row : a) {
//         for (const auto& element : row) {
//             if (element>max_value){
//                 max_value=element;
//             }
//         }
//     }
//     for (int i=0;i<=max_value;i++){
//         mn.push_back(0);
//         helpMN.push_back(0);
//     }
//     for (const auto& row : a) {
//         for (const auto& element : row) {
//             helpMN[element]++;
//         }
//         for (int i=1;i<=max_value;i++){
//             mn[i]=max(helpMN[i],mn[i]);
//             helpMN[i]=0;
//         }
//     }
//     return mn;
// }
// int findMax(const vector<int>& v) {
//     return *max_element(v.begin(), v.end());
// }

// int NOD(vector<vector<int>> a) {
//     vector<int> vspom = a[0];
//     int max_value = findMax(vspom);
//     vector<int> schet(max_value + 1, 0);
//     for (int i = 0; i < vspom.size(); i++) {
//         schet[vspom[i]]++;
//     }

//     for (int i = 1; i < a.size(); i++) {
//         vector<int> schet1(max_value + 1, 0);
//         for (int j = 0; j < a[i].size(); j++) {
//             if (a[i][j] <= max_value) {
//                 schet1[a[i][j]]++;
//             }
//         }
//         for (int j = 0; j <= max_value; j++) {
//             schet[j] = min(schet[j], schet1[j]);
//         }
//     }

//     int b = 1;
//     for (int i = 1; i <= max_value; i++) {
//         if (schet[i] != 0) {
//             b *= pow(i, schet[i]);
//         }
//     }
//     return b;
// }

// int NOK(vector<int> a){
//     int b=1;
//     for (int i=0;i<a.size();i++){
//         if (a[i]!=0){
//             b*=pow(i,a[i]);
//         }
//     }
//     return b;
// }

// vector<int> razloj(int x){
//     vector<int> r;
//     int c=2;
//     int n =x;
//     for (int c=2;c<=n;c++)
//         while(x%c==0){
//             r.push_back(c);
//             x/=c;
//         }
//     return r;
// }

// vector<int> countPrimeFactors(const vector<int>& X) {
//     vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; 
//     vector<int> Y(primes.size(), 0); 

//     for (int num : X) {
//         vector<int> factors = razloj(num); 
//         map<int, int> factorCount; 
//         for (int factor : factors) {
//             if (find(primes.begin(), primes.end(), factor) != primes.end()) {
//                 factorCount[factor]++;
//             }
//         }

//         for (size_t i = 0; i < primes.size(); i++) {
//             if (factorCount.find(primes[i]) != factorCount.end()) {
//                 Y[i] += factorCount[primes[i]];
//             }
//         }
//     }

//     return Y;
// }


// int main(){
//     int n;
//     cout<<"Введите число элементов массива "<<endl;
//     cin>>n;


//     vector <int> a(n);
//     vector <vector<int>> b;
//     cout<<"Введите элементы массива"<<endl;
//     a=inputElem(a);

//     cout<<"Ваш массив [ ";
//     outputElem(a);
//     cout<<"]"<<endl;
//     for (int i=0;i<n;i++){
//         cout<<a[i]<<" [ ";
//         outputElem(razloj(a[i]));
//         cout<<"]"<<endl;
//         b.push_back(razloj(a[i]));
//     }
//     cout<<endl;
//     vector<int> m=countMN(b);
    
//     cout<<"Наименьшее общее кратное  = " << NOK(m)<<endl;


//     cout<<NOD(b)<<endl;

//     vector<int> Y = countPrimeFactors(a);
//     cout << "Количество простых множителей для первых 10 простых чисел: ";
//     for (int count : Y) {
//         cout << count << " ";
//     }
//     cout << endl;

//     return 0;
// }