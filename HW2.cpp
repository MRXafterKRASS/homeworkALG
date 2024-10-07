//TASK 1



// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int A, B;

//     cout << "Введите число A: " << endl;
//     cin >> A;
//     cout << "Введите число B: " << endl;
//     cin >> B;

//     int sumA = 0, sumB = 0;
//     for (int i = 1; i <= A; i ++){
//         if (A % i == 0){
//             sumA += i;
//         }
//     }
//     for (int i = 1; i <= B; i ++){
//         if (B % i == 0){
//             sumB += i;
//         }
//     }
//     cout << sumA + sumB << endl;


//     int numA = 0, numB = 0;
//     for (int i = 1; i <= A; i ++){
//         if (A % i == 0){
//             numA++;
//         }
//     }
//     for (int i = 1; i <= B; i ++){
//         if (B % i == 0){
//             numB++;
//         }
//     }
//     cout << numA * numB << endl;
    

//     int proA = 1, proB = 1;
//     for(int i = 1; i <= A; i++){
//         if (i % 2 == 1 && A % i == 0){
//             proA *= i;
//         }
//     }

//     for(int i = 1; i <= B; i++){
//         if (i % 2 == 0 && B % i == 0){
//             proB *= i;
//         }
//     }
//     cout << proB + proA << endl;

//     int obdel;
//     for(int i = 1; i <= A && i <= B; i ++){
//         if (A % i == 0 && B % i == 0){
//             obdel = i;
//         }
//     }
//     cout << obdel << endl;

//     return 0;
// }





//TASK 2


// #include <iostream>
// using namespace std;
// #include <cmath>

// int main(){
//     char cont;
//     cont='y';
//     do{
//         int opt,dec=0,dig,n=0,n1=9;
//         cout << " Введите число от 1000 до 99999999 " << endl;
//         cin >> dig;

//         if (dig < 1000 || dig > 99999999) {
//             cout << "Неверный ввод. Попробуйте снова." << endl;
            
//         }
//         else{
//             cout<<"\n Выбери одну из опций [2 - 7] "<<endl;
//             cout << "[2] Выведите цифры числа, начиная с наименьшего позиционного порядка и заканчивая наибольшим. " << endl;
//             cout<< "[3] Посчитать сколько цифр имеет число"<< endl;
//             cout << "[4] Возвращает наименьшую и наибольшую цифру числа"<<endl;
//             cout<< "[5] Возвращает сумму цифр числа"<<endl;
//             cout << "[6] Вернуть произведение нечетных цифр"<<endl;
//             cout << "[7] Вычислите превернутую версию числа"<<endl;
//             cout << "---------------------------------------------------"<<endl;
//             cout << "Enter option: ";
//             cin >> opt;

//             switch(opt){
//                 case 2:
//                     while (dig > 0){
//                         cout<<dig%10<<" ";
//                         dig/=10;                    
//                     }
//                     break;
//                 case 3:
//                     while (dig >0){
//                         dec+=1;
//                         dig/=10;                
//                     }
//                     cout<<dec<<endl;
//                     break;
//                 case 4:
//                     while (dig>0){
//                         n = max(n,dig%10);
//                         n1 = min(n1,dig%10);
//                         dig/=10;
//                     }
//                     cout<<"Наибольшая цифра "<<n<<endl;
//                     cout<<"Наименьшая цифра "<<n1<<endl;
//                     break;
//                 case 5:
//                     while (dig>0){
//                         n+=dig%10;
//                         dig/=10;
//                     }
//                     cout<<n<<endl;
//                     break;
//                 case 6:
//                     while (dig > 0){
//                         if (n!=0 && dig%10%2==1)
//                             n*=dig%10;
//                         if (n==0 && dig%10%2==1)
//                             n = dig%10;
//                         dig/=10;
//                     }
//                     cout << n<<endl;
//                     break;
//                 case 7:
//                     while (dig >0){
//                         n = n*10 + dig%10;
//                         dig/=10;
//                     }
//                     cout << n<<endl;
//                     break;
//                 default:
//                     cout<<"Введите число от 2 до 7";
//             }
            
//             cout << endl<<"Хотите продолжить? (y/n): ";
//             cin >> cont;
//         }
//     } while (cont == 'y' || cont == 'Y');
// }   









//TASK 3








// #include <iostream>
// using namespace std;
// #include <cmath>

// int main (){
//     char cont;
//     cont='y';
//     do{
//         int n,c=1,opt,ln;
//         double k=1,k1=0,c1=1;
//         float x;
//         cout<<endl;

//         cout<<"\n Выбери одну из опций [1 - 5] "<<endl;
//         cout << "[1] Рассчитать ряд МакЛорена для показательной функции e^x " << endl;
//         cout<< "[2] Рассчитать ряд МакЛорена для функции натурального логарифма (ln(1+x))"<< endl;
//         cout << "[3] Рассчитать ряд МакЛорена для синусоидальной функции (sin(x))"<<endl;
//         cout<< "[4] Рассчитать ряд МакЛорена для косинуса cos(x)"<<endl;
//         cout << "[5] Рассчитать ряд МакЛорена для рациональной функции"<<endl;
//         cout << "---------------------------------------------------"<<endl;
//         cout << "Enter option: ";
//         cin >> opt;
        
//         switch (opt){
        
//             case 1:
//                 cout<<"Введите значение переменной x для оценки в функции ";
//                 cin>>x;
//                 cout<<endl;
//                 cout<<"Введите количество членов ряда МакЛорена [2, 20]";
//                 cin>>n;

//                 for (int i=1;i<n+1;i++){
//                     c*=i;
//                     k+=pow(x,i)/c;
//                 }
//                 cout<<k<<endl;
//                 break;
//             case 2:
//                 cout<<"Введите значение переменной x для оценки в функции ";
//                 cin>>x;
//                 cout<<endl;
//                 cout<<"Введите количество членов ряда МакЛорена [2, 20]";
//                 cin>>n; 

//                 for (int i=1;i<n+1;i++){
//                     c*=i;
//                     k1+=pow((-1),i+1)*pow(x,i)/i;
//                 }
//                 cout<<k1<<endl;
//                 break;
                
//             case 3:
//                 cout<<"Введите значение переменной x для оценки в функции ";
//                 cin>>x;
//                 cout<<endl;
//                 cout<<"Введите количество членов ряда МакЛорена [2, 20]";
//                 cin>>n; 

//                 for (int i = 0; i <= n; i++) {
//                     if (i > 0) {
//                         c1 *= (2 * i) * (2 * i + 1);
//                     }
//                     k1 += (pow(-1, i) * pow(x, 2 * i + 1)) / c1; 
//                 }
//                 cout<<k1<<endl;
//                 break;
                
                
//             case 4:
//                 cout<<"Введите значение переменной x для оценки в функции ";
//                 cin>>x;
//                 cout<<endl;
//                 cout<<"Введите количество членов ряда МакЛорена [2, 20]";
//                 cin>>n; 
//                 for (int i = 0; i < n; i++) {
//                     if (i > 0) {
//                         c1 *= (2 * i)*(2*i-1);
//                     }
//                     k1 += (pow(-1, i) * pow(x, 2 * i)) / c1; 
//                 }
//                 cout<<k1<<endl;
//                 break;            
//             case 5:
//                 cout<<"Введите значение переменной x для оценки в функции в интервале (-1,1)";
//                 cin>>x;
//                 if (-1>=x || 1<=x){
//                     cout<< "Введите х в нужном диапазоне"<<endl;
//                     break;
//                 }
//                 else{
//                     cout<<endl;
//                     cout<<"Введите количество членов ряда МакЛорена [2, 20]";
//                     cin>>n;
//                     for (int i=0; i<n;i++){
//                         k1+=(i+1)*pow(x,i);
//                     }
//                     cout<<k1<<endl;
//                 }
//                 break;
//             default:
//                 cout<<"Введите число от 1 до 5"<<endl;
//                 break;

            
//         }
//         cout << "Хотите продолжить? (y/n): ";
//         cin >> cont; 
//     }while (cont == 'y' || cont == 'Y');

    
// }
