#POLINOMIO_H

Polinomio::Polinomio():num(0)
{

}

Polinomio::Polinomio(int a, int b)
{
    this->num = 0;
    this->setPolinomio(a, b);
    this->arrayCoeficiente[30]={};
    this->arrayExponente[30]={};
}

void Polinomio::setPolinomio(double n)
{
	this->num = n;
}

double Polinomio::getPolinomio()
{
	return this->num;
}

std::ostream& operator<<(ostream &out, const Numero&numero)
{
	out << numero.num;
	return out;
}

Polinomio operator+(const Numero &numero1, const Numero &numero2)
{
    if(m>n) n=m;
		cout<<("\n\nSuma: %+g", arrayCoeficientes[0]+arrayExponentes[0]);
    for(i=1; i<=n; i++)
    {
        while((arrayCoeficientes+arrayExponentes[i])==0 && i<n) i++;/* <==aqui el i<n */
        cout<<(" %+g%s", arrayCoeficientes[i]+arrayExponentes[i], x[i-1]);
    }
    cout<<("\n");
    for(i=1; i<=n-1; i++)
    {
        while((arrayCoeficientes[i]+arrayExponentes[i])==0 && i<n) i++;
        cout<<(" %+g%s", arrayCoeficientes[i]+arrayExponentes[i], x[i-1]);
    }
    if((arrayCoeficientes[i]+arrayExponentes[i])!=0)
    {
        cout<<(" %+g%s\n", arrayCoeficientes[i]+arrayExponentes[i], x[i-1]);
    }
    else
    {
        cout<<("\n");
    }
    /*
	Numero resultado;
	resultado.num = numero1.num + numero2.num;
	return resultado.num;
	*/
}

Polinomio operator-(const Numero &numero1, const Numero &numero2)
{
	Numero resultado;
	resultado.num = numero1.num - numero2.num;
	return resultado.num;
}

Polinomio operator*(const Numero &numero1, const Numero &numero2)
{
	Numero resultado;
	resultado.num = numero1.num * numero2.num;
	return resultado.num;
}

Polinomio::ingresarTerminos()
{
    do
    {
        cout<<("Ingrese el grado de p(x): ");
        cout<<("%d", &n);
    }while(n<0 || n>10);
    for(i=0; i<=n; i++)
        cout<<("%f", &arrayCoeficiente[i]);
    do
    {
        cout<<("Ingrese el grado de q(x): ");
        cout<<("%d", &m);
    }while(m<0 || m>10);
    for(i=0; i<=m; i++)
        cout<<("%f", &arrayExponente[i]);
}

Polinomio::ordenar_polinomio()
{

}

Polinomio::toString()
{
    if(arrayCoeficiente[0]!=0){				//imprimir el primer polinomio
			cout<<("\np(x) %+g", arrayCoeficiente[0]);
			i=1;
		}else{
			i=0;
		}
		for(i=i; i<=n; i++){
			while(arrayCoeficiente[i]==0) i++;
			cout<<(" %+g%s", arrayCoeficiente[i], x[i-1]);
		}
		if(arrayExponente[0]!=0){				//imprimir el segundo polinomio
			cout<<("\nq(x) %+g", arrayExponente[0]);
			i=1;
		}else{
			i=0;
		}
		for(i=i; i<=m; i++){
			while(arrayExponente[i]==0) i++;
			cout<<(" %+g%s", arrayExponente[i], x[i-1]);
		}
}
