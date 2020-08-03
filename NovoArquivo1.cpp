 /* Quadro resumo das Declarações de funções*/
double ler_A();
double ler_B();
double ler_C();
double cal_Delta(double a, double b, double c);
double cal_x1(double a, double b, double delta);
double cal_x2(double a, double b, double delta);
void exibir(double a, double b, double c, double delta);

/Le e armazena o valor de A/
double ler_A() {
	double va;
	cout << "Valor de A:";
	cin >> va; return va;
}

/Le e armazena o valor de B/
double ler_B() {
	double vb; 
	cout << "Valor de B:";
	cin >> vb;
	return vb;
}

/Le e armazena o valor de C/
double ler_C() {
	double vc;
	cout << "Valor de C:";
	cin >>vc;
	return vc;
}

/Recebe a, b, c, calcula e armazena o valor de Delta atraves do return/
double cal_Delta(double a, double b, double c) {
	double d = pow(b,2) - …
/* Quadro resumo das Declarações de funções*/ 

double lerA(); 

double lerB(); 

double lerC(); 

double cal_S(double va, double vb, double vc); 

double cal_AH(double va, double vb, double vc, double s); 

void exibir(double va, double vb, double vc, double s, double ah); 

int main () { 

setlocale(LC_ALL, "Portuguese"); 

double a, b, c, sem, area; 

int tecla; 

MENU: /* marca um ponto no código para retorno*/ 

cout << "\nMenu\n1-Ler\n2-Calcular \n3-Exibir \n4-Sair \nOpção:"; 

cin >> tecla; 

 

if(tecla==1){ 

a = lerA(); 

b = lerB(); 

c = lerC(); 

goto MENU; 

} 

 

if(tecla==2){ 

double sem = cal_S(a, b, c); 

if(sem>0){ 

double area=cal_AH(a, b, c, sem); 

} 

else{ 

exibir(a, b, c, sem, area); 

} 

cout<<"Calculando!"; 

goto MENU; 

} 

if(tecla==3){ 

exibir(a, b, c, sem, area); 

 

goto MENU; 

} 

 

if(tecla==4){ 

cout << "\nO programa será finalizado!\n"; 

system ("pause");  

exit ( 0 ); 

} 

 

return 0; 

} 

 

/Le e armazena o valor de A/ 

double lerA() { 

double va; 

cout << "Valor de A:"; 

cin >> va; 

return va; 

} 

 

/Le e armazena o valor de B/ 

double lerB() { 

double vb;  

cout << "Valor de B:"; 

cin >> vb; 

return vb; 

} 

 

/Le e armazena o valor de C/ 

double lerC() { 

double vc; 

cout << "Valor de C:"; 

cin >> vc; 

return vc; 

} 

 

double cal_S(double va, double vb, double vc) { 

double s = (va+vb+vc)/2; 

 return s;  

} 

double cal_AH(double va, double vb, double vc, double s) { 

double ah = sqrt(s*(s-va)(s-vb)(s-vc)); 

return ah; 

} 

 

void exibir (double va, double vb, double vc, double s, double ah) 

{ 

if (s<=0){ 

cout << "\nImpossível calcular\nSemiperímetro é menor ou igual a 0!\n"; 

}  

else{ 

cout << "\nValor de ....A:" <<va; 

cout << "\nValor de ....B:" <<vb; 

cout << "\nValor de ....C:" <<vc; 

cout << "\nValor do semiperímetro:"<<s; 

cout << "\nValor da área é:"<<ah; 

}
