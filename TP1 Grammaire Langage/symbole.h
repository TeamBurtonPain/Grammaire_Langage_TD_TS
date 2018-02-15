#pragma once


#include <string>
#include <map>
using namespace std;

enum Identificateurs { OPENPAR = 0, CLOSEPAR, PLUS, SUB, MULT, DIV, REEL, FIN, ERREUR, EXPR };

const string Etiquettes[] = {"OPENPAR", "CLOSEPAR", "PLUS", "SUB", "MULT", "DIV", "REEL", "FIN", "ERREUR", "EXPRESSION"};

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

class Reel : public Symbole
{
public:
	Reel(double v) : Symbole(REEL), valeur(v)
	{
	}

	~Reel()
	{
	}
	virtual double eval() { return valeur; }
	virtual void Affiche();
protected:
	double valeur;
};

class Expr : public Symbole
{
public:
	Expr(double val) : Symbole(EXPR), valeur(val){}
	Expr() : Symbole(EXPR){}
	virtual ~Expr(){}

	virtual double eval() { return valeur; }

protected:
	double valeur;
};

class ExprPlus : public Expr
{
public :
	ExprPlus(Expr * s1, Expr * s2)
	{
		valeur = s1->eval() + s2->eval();
	}
};

class ExprMoins : public Expr
{
public:
	ExprMoins(Expr * s1, Expr * s2)
	{
		valeur = s1->eval() - s2->eval();
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

class ExprDiv : public Expr
{
public:
	ExprDiv(Expr * s1, Expr * s2)
	{
		valeur = s1->eval() / s2->eval();
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
