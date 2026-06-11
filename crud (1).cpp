
#include <iostream>
#include <locale>
using namespace std;
string nome_produtos[10], busca;
float preco_produtos[10];
int i=0, n_cadastro=0;
void mostrar()
{
    cout<<"======LISTA PRODUTOS======= \n";
    for(i=0; i<10; i++) {
        if (nome_produtos[i] == "") {
            continue;
        } else {
            cout<<" nome do produto: " <<nome_produtos[i]<< "\n preço do produto: " <<preco_produtos[i]<< "\n ------------------ \n";
        }
    }
}
void buscarPreco() {
    cout<<"qual o nome do produto?: ";
    cin>> busca;
    bool encontrado = false;
    for(i=0; i<10; i++) {
        if (busca == nome_produtos[i]) {
            cout<<" o produto " <<nome_produtos[i]<< " está valendo: " <<preco_produtos[i];
            encontrado = true;
            cout << "\n ----------------- \n";
        } else {
            continue;
        }}
        if (encontrado == false){
        cout<<"não encontrado";
        }
}
void cadastrar() {
if (n_cadastro >= 10) {
        cout<<" voce excedeu o limite de cadastro";
        return;
    }
    cout<<" qual o nome do produto? \n";
    cin>>nome_produtos[n_cadastro];
    cout<<" qual o preço do produto? \n";
    cin>>preco_produtos[n_cadastro];
    n_cadastro++;
    cout<<" cadastro realizado com sucesso \n";
    
}
void desconto() {
    float precoP, porcentagem;
    string nomeP;
    cout<<" qual o nome do produto? \n";
    cin>> nomeP;
    bool encontrado = false;
    for(i=0; i<10; i++) {
        if (nomeP == nome_produtos[i]) {
            precoP = preco_produtos[i];
            encontrado = true;
        }
    }
    if (encontrado == false){
    cout<<"nao encontrado";
    return;}
    cout<<" qual a porcentagem de desconto que quer consultar? ";
    cin>>porcentagem;
    float valor_com_desconto= precoP - (precoP*(porcentagem/100));
    cout<<" o valor do produto com esse desconto é " <<valor_com_desconto<< "\n";
}
void Delete(){
string nomeP;

cout<<"qual o nome do produto que deseja tirar? \n";
cin>> nomeP;
bool encontrado = false;
for(i=0; i<10; i++){
if (nomeP == nome_produtos[i]){
nome_produtos[i]="";
preco_produtos[i]=0;
cout<<"\n produto excluido com sucesso \n";
encontrado = true;
}} 
if (encontrado == false){
cout<< "nao encontrado \n";}}
void Update(){
string nomeP;
bool encontrado = false;
char confirm;
cout<<"qual o nome do produto que deseja alterar? \n";
cin>>nomeP;
for (i=0; i<10; i++){
     if(nomeP == nome_produtos[i]){
     cout<<" produto: " <<nome_produtos[i]<< "\n preco:" <<preco_produtos[i];
     cout<<"deseja realmente alterar?(s/n)";
     cin>>confirm;
     if (confirm == 's'){
     cout<<"qual o novo nome? \n";
     cin>>nome_produtos[i];
     cout<<"qual o novo preco?\n";
     cin>>preco_produtos[i];
     encontrado = true;
     }}}
     if(encontrado == false){
     cout<<"nao encontrado \n";
     return;}}
int main()
{
    int op = 0;
    setlocale(LC_ALL,"portuguese");
    while(op != 5) {
        cout<<"\n =========MENU========= \n";
        cout<<" 1-cadastro de produtos \n";
        cout<<" 2-consulta produtos \n";
        cout<<" 3-consulta preços \n";
        cout<<" 4- simular desconto \n";
        cout<<" 5- sair do programa \n";
        cout<<" 6- deletar produto \n";
        cout<<" 7- atualizar produto \n";
        cout<<" qual opção deseja escolher? \n";
        cin>>op;
        switch(op) {
        case 1:
            cadastrar();
            break;
        case 2:
            mostrar();
            break;
        case 3:
            buscarPreco();
            break;
        case 4:
            desconto();
            break;
        case 5:
            break;
        case 6:
             Delete();
             break;
        case 7:
             Update();
             break;
        default:
            cout<<"opção invalida \n";
        }
    }
    return 0;
}