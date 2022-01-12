#
/*FICHE 2 : 

Voyage 

Ent : nblieux, lieux

Sortie :nbville, 

VAR: 

Debut : 

ECRIRE “Veuillez entrer le nombre d’habitant d’une ville, pour terminer tappez Z” 

TANT QUE lieux /= z  

LIRE lieux

  SI lieux > 10 000  

	Nbville + 1  

ECRIRE Nbville  */

int voyage(nbl, l)
{
  printf("%d","Veuillez entrer le nombre d’habitant d’une ville, pour terminer tappez Z");
  while (l /= 'z')
  {
  scanf("%d", &l);

    if (l > 10 000)
      nbl = nbl + 1;

  }
  printf("%d", &nbl);
}

 
/*
 2. Auberge 

Ent : age, b, 

Sortie : prix 

VAR: 

Debut : 

ECRIRE “Veuillez entrer l'âge du pensionnaire” 

LIRE “age” 

ECRIRE “Veuillez entrer le poids de sa valise” 

LIRE “b” 

TANT QUE age > 10 || age /= 60 || p = 0

  Prix = prix + 30  

  SI b > 20 

     Prix = Prix + 10 

SI age < 10  

 Prix = prix + 5 

LIRE prix  */

int auberge(a, b)
{
  printf("%d","Veuillez entrer l'âge du pensionnaire");
  scanf("%d",&a);
  printf("%d","Veuillez entrer le poids de sa valise");
  scanf("%d",&b);

  int p = 0;

  while (a > 10 || a /= 60 || p = 0)
    p = p + 30;

  if (a < 10)
    p = p + 5;

  printf("%d",&p);
  
}


/*3. Start To Play 

Ent : p, 

Sortie : info 

VAR: 

Debut : 

Place = 250 

ECRIRE “Veuillez renseigner le passage avec l’indicatif ‘-’ pour le sens” 

P = 0 

Pr = 0 

TANT QUE Pr =< Place 

 LIRE P 

 Pr = p + pr 

 ECRIRE Place 

SINON 

ECRIRE “Salle Pleine ! Réduire” Place 

LIRE P 

Pr = p + pr */

int StartToPlay(p)
{
  int pl = 250;
  int p = 0;
  int pr = 0;

  while (pr <= pl)
  {
    scanf("%d", &p);
    pr = p + pr;
    printf("%d", &pl);
  }
  else
  {
    printf("%d", "Salle Pleine ! Réduire", &pl);
    scanf("%d", &p);
    pr = p + pr;
  }
  
}

/* 4. Triangles 

a. 

Ent : int, ext,  

Sortie : int, ext, 

VAR: i, Into,  

Debut : 

ECRIRE “Renseigner les contours du triangle voulus” 

LIRE ext  

ECRIRE “Renseigner son contenu” 

LIRE int  

i= 0 

Max = 9 

Into = -2 

TANT QUE i /= Max 

 Into = into + 1  
 ECRIRE “int” * into 

 ECRIRE “ext” 

 I = i +1

SI i = Max  
 ECRIRE “ext” *Max  
*/

int atriangle(a, b)
{
  printf("%d", "Renseigner les contours du triangle voulus");
  scanf("%c", &a);
  printf("%d", "Veuillez renseigner son contenu");
  scanf("%c",&b);
  int i = 0;
  int max = 9;
  int bo = -2;

  while (i /= max)
  {
    printf("%c", &a);
    bo = bo + 1;
    printf("%c", &b)* bo;
    printf("%s", &a + '\n');
    i++;

  }if (i = max)
    printf("%c", &a) * max; 

}


/* 4b. 

Ent : Max 

Sortie : 

VAR: i , Nb 

Debut : 

Nb = 0 

I = 9 

Max = 0 

TANT QUE i >= Max   

ECRIRE “Nb” * i 

Nb + 1  

I - 1  */

int btriangle(max)
{
  int nb = 0;
  int i = 9;
  int max = 0;

  while (i >= max)
  {
    printf("%d", nb *i);
    nb = nb + 1;
    i = i - 1;
  }
  
}

/* 5.Carrés 

Ent :  

Sortie : 

VAR: 

Debut : 

ECRIRE “Veuillez entrer la longueur du carré” 

LIRE l 

ECRIRE “Veuillez entrer la largeur du carré” 

LIRE L 

ECRIRE “Veuillez entrer le premier caractère du carré” 

LIRE c1 

ECRIRE “Veuillez entrer le deuxième caractère du carré” 

LIRE c2 

ECRIRE “c1” * L 

I = 0 

Max = l -2 

TANT QUE i =/ Max  

ECRIRE “c2” x L – 2  

ECRIRE “c1” * L */

int carré(l, L)
{
  printf("%s","Veuillez entrer la longueur du carré");
  printf("%s","Veuillez entrer la largeur du carré");
  printf("%c","Veuillez entrer le premier caractère du carré");
  printf("%s","Veuillez entrer le deuxième caractère du carré");
}

/* 6. Epidemie 

Ent : Infecté, PopTotal 

Sortie : J 

VAR: Infecté, Infection, j 

Debut : 

ECRIRE “Veuillez renseigner la population totale de votre ville” 

LIRE PopTotal 

ECRIRE ”Veuillez renseigner le nombre de malade actuel” 

LIRE Infecté 

j= 0 

TANT QUE Infecté /= PopTotal 

  Infection = Infecté * 2 

  Infecté = infecté + Infection  

  J + 1 

ECRIRE J */

int epidemie(a)
{

}

/* 7. Ent : MaxP,  

Sortie : Hauteur, Putilisé 

VAR: i, c, Pu, 

Debut : 

ECRIRE “Veuillez écrire notre maximum de pierre” 

LIRE MaxP  

I = 0  

Pu = 1 

TANTQUE MaxP > Pu  

  C = i 

  Pu = Pu + (c * c) 

 I + 1 

ECRIRE “i” 

ECRIRE “Pu” 

  */
 int pyramide(a)
 {

 }