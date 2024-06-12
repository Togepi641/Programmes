//Fonction de calcul de racine par dichotomie
double GetRacine(double x)
{
	//Précision
	double p = 0.00001;
 	//Établissement de bornes
	double b0=0;
	double b1=x;
	//Première estimation du résultat en milieu de borne
	double r = (b0+b1)/2;
	//Tant que le résultat comparé est au-delà de la précision
	while ( GetValAbs((r*r)-x) > p)
	{
		//Si le résultat est trop grand 
		//on déplace la borne supérieure
		if ((r*r)>x)b1 =r;
		//Sinon déplace la borne inférieure
		else		b0=r;
		//Estimation d'un nouveau résultat par dichotomie
		r = (b0+b1)/2;;
	}
	//Retour du résultat
	return r;
}
