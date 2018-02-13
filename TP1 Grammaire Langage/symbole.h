#pragma once


#include <string>
#include <map>
using namespace std;

enum Identificateurs { OPENPAR = 0, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR, EXPR };

const string Etiquettes[] = {"OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR", "EXPRESSION"};

class Symbole
{
public:
	Symbole(int i) : ident(i)
	{
	}

	virtual ~Symbole()
	{
	}

	operator int() const { return ident; }
	virtual void Affiche();

protected:
	int ident;
};

class Entier : public Symbole
{
public:
	Entier(int v) : Symbole(INT), valeur(v)
	{
	}

	~Entier()
	{
	}
	virtual int eval() { return valeur; }
	virtual void Affiche();
protected:
	int valeur;
};

class Expr : public Symbole
{
public:
	Expr(int val) : Symbole(EXPR), valeur(val){}
	Expr() : Symbole(EXPR){}
	virtual ~Expr(){}

	virtual int eval() { return valeur; }

protected:
	int valeur;
};

class ExprPlus : public Expr
{
public :
	ExprPlus(Expr * s1, Expr * s2)
	{
		valeur = s1->eval() + s2->eval();
	}
};

class ExprMult : public Expr
{
public:
	ExprMult(Expr * s1, Expr * s2)
	{
		valeur = s1->eval() * s2->eval();
	}

};

class ExprPar : public Expr
{
public:
	ExprPar(Expr * s1)
	{
		valeur = s1->eval();
	}

};
