#ifndef _fraccion_
#define _fraccion_

	typedef struct
	{
		float numerador;
		float denominador;
	}fraccion;

	typedef fraccion *FRAC;

	FRAC crearFraccion();
	FRAC asignaNum(FRAC n, float num);
	FRAC asignaDenom(FRAC n, float denom);
	float obtenNum(FRAC n);
	float obtenDenom(FRAC n);
	FRAC suma(FRAC n1, FRAC n2);
	FRAC resta(FRAC n1, FRAC n2);
	FRAC multi(FRAC n1, FRAC n2);
	FRAC divi(FRAC n1, FRAC n2);
	FRAC inversa (FRAC n);
#endif
