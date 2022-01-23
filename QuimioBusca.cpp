#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	int z,c,l,cur;
	system("color f0");//fundo branco, letra preta.
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n\n\n\t   ____        _           _       ____                      \n\t  / __ \\      (_)         (_)     |  _ \\                     \n\t | |  | |_   _ _ _ __ ___  _  ___ | |_) |_   _ ___  ___ __ _ \n\t | |  | | | | | | '_ ` _ \\| |/ _ \\|  _ <| | | / __|/ __/ _` | \n\t | |__| | |_| | | | | | | | | (_) | |_) | |_| \\__ \\ (_| (_| | \n\t  \\____\\_\\\__,_|_|_| |_| |_|_|\\___/|____/ \\__,_|___/\\___\\__,_| \n");	
	printf("\n\n\n\n\n\n\n\n\n\n\tPressione 1 para continuar\n");
	scanf("%d",&c);
	system("cls");
	
	if(c==1){
	
	
	inicio:
	printf("Digite o número atômico do elemento procurado.\n");
	scanf("%d",&z);
	system("cls");}

	if (z==1){
	printf("\t\tO elemento procurado é o Hidrogênio.\n");
	printf("\n\n-->Seu subnível mais energético possui a configuração 1s1.\n\n-->Localizado no primeiro per�odo da tabela, coluna 1.\n\n-->Raio at�mico: 0.79 angstrons.\n\n-->Primeira energia de ioniza��o: 313 kcal/mol\n\n-->Massa At�mica: 1 g/mol\n\n-->Ponto de Fus�o: -259,2�C\n\n-->Ponto de Ebuli��o: -253�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para não.\n");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n     � o elemento mais abundante do universo - comp�e 75 por cento de sua mat�ria.\nNas condi��es normais de temperatura e press�o da Terra,este elemento \nexiste como g�s diat�mico, o H2, e na forma de compostos qu�micos \ncomo hidrocarbonetos e �gua.\n");
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
       scanf("%d",&l);
      if(l==1){
       system("cls");
      goto inicio;}
     else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! Até mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para não\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! Até mais.");//FIGURA BONITINHA AQUI
}
        
}

if (z==2){
	printf("\n\n O elemento procurado � o H�lio (He). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 1s2.\n\n-->Localizado no primeiro per�odo da tabela, coluna 18.\n\n-->Raio at�mico: 0.49 angstrons.\n\n-->Primeira energia de ioniza��o: 566 kcal/mol\n\n-->Massa At�mica: 4 g/mol\n\n-->Ponto de Fus�o: -272�C\n\n-->Ponto de Ebuli��o: -269�C.\n\n ");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n    Nas Condi��es Normais de Temperatura e Press�o o h�lio � um g�s monoat�mico,\n tornando-se l�quido somente em condi��es extremas(de alta press�o e baixa temperatura).\nTem o ponto de solidifica��o mais baixo de todos os elementos qu�micos,\nsendo o �nico l�quido que n�o pode solidificar-se baixando a temperatura,\n j� que permanece no estado l�quido no zero absoluto � press�o normal.\nO h�lio � mais leve que o ar, diferenciando-se do hidrog�nio por n�o ser inflam�vel,\nentretanto, apresenta poder ascensional 8 por cento menor.\nPor este motivo, e por ser um g�s inerte, � utilizado em dirig�veis e bal�es.\nAs maiores reservas de H�lio encontram-se nos Estados Unidos. \nEstas reservas s�o estrat�gicas e controladas pelo governo norte-americano.\nN�o est�o dispon�veis para venda em grande quantidades.\nA mistura h�lio-oxig�nio � usada para mergulhos a grande profundidade,\n j� que � inerte e menos sol�vel no sangue que o nitrog�nio\ne se difunde 2,5 vezes mais depressa, reduzindo o tempo necess�rio para a descompress�o.\nDevido ao seu baixo ponto de liquefa��o e evapora��o \npode ser usado como refrigerante a temperaturas extremadamente baixas\n em im�s supercondutores \ne na investiga��o criog�nica a temperaturas pr�ximas do zero absoluto.\nA atmosfera inerte de h�lio � empregada para pressurizar combust�veis l�quidos de foguetes.\n\nComo agente refrigerante em reatores nucleares.\nO h�lio l�quido encontra cada vez maior uso em aplica��es\n m�dicas de imagem por resson�ncia magn�tica (RMI).\n ");
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
  
  
		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

if (z==3){
	printf("\tO elemento procurado � o L�tio (Li). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2s1.\n\n-->Localizado no segundo per�odo da tabela, coluna 1.\n\n-->Raio at�mico:2.05 angstrons.\n\n-->Primeira energia de ioniza��o: 124 kcal/mol\n\n-->Massa At�mica: 7 g/mol\n\n-->Ponto de Fus�o: 180�C\n\n-->Ponto de Ebuli��o: 1336�C.\n\n ");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n    � o s�lido de maior calor espec�fico e, por isso, encontra aplica��es \nem processos de transfer�ncia de calor, mas � corrosivo e precisa de manipula��oespecial.\nUsado como agente de liga em compostos org�nicos sint�ticos.\nHidreto de l�tio � um poderoso redutor e � usado como fonte de hidrog�nio.\nEmpregado em baterias devido ao elevado potencial eletroqu�mico.\nVidros e cer�micas especiais t�m adi��o de l�tio.\n\n ");
  printf("\n\n");
  printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
  }}
		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){
     system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

if (z==4){
	
	printf("\n\n O elemento procurado � o Ber�lio (Be). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2s2.\n\n-->Localizado no segundo per�odo da tabela, coluna 2.\n\n-->Raio at�mico:1.40 angstrons.\n\n-->Primeira energia de ioniza��o: 214 kcal/mol\n\n-->Massa At�mica: 9 g/mol\n\n-->Ponto de Fus�o: 1280�C\n\n-->Ponto de Ebuli��o: 2970�C.");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\� um componente para ligas de cobre que s�o usadas em molas,\ncontatos el�tricos, eletrodos de solda e ferramentas n�o produtoras de centelhas.\nMaterial estrutural de v�rias partes de ve�culos espaciais e sat�lites.\nOs compostos deste elemento s�o extremamente t�xicos e venenosos,\n podendo causar doen�as ao longo dos anos ou levar a �bito.\n O ber�lio est� presente em �guas-marinhas, esmeraldas e no berilo.\n ");
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==5){

		printf("\t\tO elemento procurado � o Boro (Be). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2p1.\n\n-->Localizado no segundo per�odo da tabela, coluna13.\n\n-->Raio at�mico:1.17 angstrons.\n\n-->Primeira energia de ioniza��o: 191 kcal/mol\n\n-->Massa At�mica: 10.81 g/mol\n\n-->Ponto de Fus�o: 2300�C\n\n-->Ponto de Ebuli��o: 2580�C.\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\O Boro elementar n�o � muito utilizado, mas estudos revelam que \nse consumido em pequenas quantidades (de 10 a 15 mg)\n ajuda a combater a osteoporose, pois mant�m o c�lcio nos ossos \nsob forma de boratos.\n Al�m disso, � utilizado em fogos de artif�cio de colora��o esverdeada\ne no lan�amento de foguetes.\nO b�rax � amplamente utilizado na taxidermia de animais, \nem inseticidas, na fabrica��o de esmaltes e porcelanas, \nna produ��o de vidros �pticos, em sab�es e detergentes, como fertilizante, \nal�m de ser mat�ria-prima principal na fabrica��o de recipientes de vidro com a marca registrada Pirex.\n ");
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");
}}

  else if (z==6){
  
		printf("\t\tO elemento procurado � o Carbono (C). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2p2.\n\n-->Localizado no segundo per�odo da tabela, coluna14.\n\n-->Raio at�mico: 0.91 angstrons.\n\n-->Primeira energia de ioniza��o: 260 kcal/mol\n\n-->Massa At�mica: 12 g/mol\n\n-->Ponto de Fus�o: 3500�C\n\n-->Ponto de Ebuli��o: 4830�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\ n     � encontrado em abund�ncia no sol, nas estrelas, nos cometas\ne na atmosfera da maioria dos planetas. \nCarbono, na forma de diamantes microsc�picos, foi encontrado em alguns meteoritos.\n Carbono � encontrado livre na natureza em tr�s variedades alotr�picas: \namorfo, grafite e diamante. \nO �ltimo � um dos materiais mais duros que se conhece.\n\n-->Aplica��es:\n\nCombust�vel - carv�o;\nLubrificante - carbono grafite;\nFiltros para sistemas de purifica��o do ar - carbono ativado pulverizado;\nDetec��o da idade de materiais em arqueologia - carbono 14\n (Is�topo com meia vida de 5715 anos);\n Industria qu�mica - grande variedades de compostos;\nInd�stria petrol�fera - grande variedade de compostos\nM�quinas de corte para materiais com alto grau de dureza - diamante\nConfere leveza e resist�ncia �s ligas.\nMaterial de desenho - grafite\n Armas de fogo (rev�lveres e rifles)\nJ�ias - diamante.\n");
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}


	else if (z==7){
	
		printf("\t\tO elemento procurado � o Nitrog�nio (N). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2p3.\n\n-->Localizado no segundo per�odo da tabela, coluna15.\n\n-->Raio at�mico: 0.75 angstrons.\n\n-->Primeira energia de ioniza��o: 335 kcal/mol\n\n-->Massa At�mica: 14 g/mol\n\n-->Ponto de Fus�o: -210�C\n\n-->Ponto de Ebuli��o: -196�C.\n\n");
        printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.\n");
        scanf("%d",&cur);
if(cur==1){
      system("cls");
      printf("**Curiosidades**:\n\n     O nitrog�nio gasoso N2 representa 78,1% da atmosfera terrestre em volume.\n  Nitrog�nio � encontrado em todos os organismos vivos. \nUtilizado como l�quido criog�nico para resfriar e conservar alimentos,\n tecidos org�nicos e outros.\n Com hidrog�nio, usado para proporcionar atmosfera redutora em processos de produ��o de vidros. \nTratamento t�rmico de metais. \nAn�lises qu�micas. \nG�s de dilui��o para alguns reagentes gasosos, para reduzir perigo de fogo ou explos�o ou algumas outras rea��es.\n Fabrica��o de semicondutores (prote��o contra oxida��o).\n Transporte pneum�tico. G�s n�o reagente para produ��o de borrachas e pl�sticos expandidos. \nProcessos de inje��o. Controle de temperatura em reatores, etc.\n");
      printf("\n\n");
      printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
      scanf("%d",&l);
   if(l==1){
      system("cls");
      goto inicio;}
   else if(l==2){
    system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

else if(cur==2){
    system("cls");	
    fflush(stdin);	
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
    scanf("%d",&l);
if(l==1){
    system("cls");
    goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==8){

		printf("O elemento procurado � o Oxig�nio (O). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2p4.\n\n-->Localizado no segundo per�odo da tabela, coluna16.\n\n-->Raio at�mico: 0.65 angstrons.\n\n-->Primeira energia de ioniza��o: 314 kcal/mol\n\n-->Massa At�mica: 16 g/mol\n\n-->Ponto de Fus�o: -222�C\n\n-->Ponto de Ebuli��o: --183�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n     Um dos elementos mais abundantes na Terra.\n Ocorre de forma livre (na atmosfera com 21% em volume) \ne combinado (�gua e muitos outros compostos). \nEm peso, oxig�nio e seus compostos representam cerca de 49% da crosta terrestre. \n Oxig�nio � um elemento essencial para a vida e tem uma variedade de aplica��es industriais ou n�o.\nNas ind�strias qu�mica, petroqu�mica e farmac�utica, \npara fabrica��o de compostos diversos.\n Em medicina, no tratamento de insufici�ncia respirat�ria e outros. \nNa produ��o de metais, processos de solda e corte.\n Na atividade espacial, como oxidante para foguetes. \nNa produ��o de papel e polpa, fabrica��o de componentes eletr�nicos,\n tratamento de �gua, etc. \n   ");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

			
	else if (z==9){
	
		printf("\t\tO elemento procurado � o Fl�or (F). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2p5.\n\n-->Localizado no segundo per�odo da tabela, coluna 17.\n\n-->Raio at�mico: 0.57 angstrons.\n\n-->Primeira energia de ioniza��o: 402 kcal/mol\n\n-->Massa At�mica: 19 g/mol\n\n-->Ponto de Fus�o: -220�C\n\n-->Ponto de Ebuli��o: --188�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n     Fl�or e seus compostos s�o usados na produ��o de ur�nio e \ndezenas de outros produtos como, por exemplo, pl�sticos resistentes ao calor.\n �cido fluor�drico � usado para grava��es e outros efeitos em vidros.\n Compostos hidrocarbonados com cloro e fl�or \nformam gases usados em equipamentos de refrigera��o\n (CFC, em desuso devido ao efeito nocivo para a camada de oz�nio da atmosfera). \nElemento de prote��o contra c�ries em cremes dentais, \nna forma de fluoreto de s�dio (NaF) ou de estanho (SnF2).\n");
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
			
	else if(z==10){
	
		printf("\t\tO elemento procurado � o Ne�nio (Ne). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 2p6.\n\n-->Localizado no segundo per�odo da tabela, coluna 18.\n\n-->Raio at�mico: 0.51 angstrons.\n\n-->Primeira energia de ioniza��o: 498 kcal/mol\n\n-->Massa At�mica: 20,18 g/mol\n\n-->Ponto de Fus�o: -249�C\n\n-->Ponto de Ebuli��o: -246�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n     Utilizado em pequenas l�mpadas de sinaliza��o usadas em aparelhos \nel�tricos e eletr�nicos. \nEm l�mpadas para an�ncios luminosos (misturado com arg�nio). \nEm v�lvulas para raios-X (misturado com arg�nio).\n Em lasers de h�lio e n�on. \nComo g�s de enchimento em alguns lasers de vapores met�licos. \nDetectores de �ons para laborat�rios. \nL�quido criog�nico para sensores ultra-sens�veis de infravermelho, etc.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==11){

		printf("\t\tO elemento procurado � o S�dio (Na). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3s1.\n\n-->Localizado no terceiro per�odo da tabela, coluna 1.\n\n-->Raio at�mico: 2.23 angstrons.\n\n-->Primeira energia de ioniza��o: 118 kcal/mol\n\n-->Massa At�mica: 23 g/mol\n\n-->Ponto de Fus�o: 98�C\n\n-->Ponto de Ebuli��o: 892�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\ Presen�a abundante no Sol e outras estrelas. \nAs linhas do s�dio est�o entre as mais destacadas no espectro solar.\n Participa com cerca de 2,6% da crosta terrestre e � o metal alcalino mais abundante.\nO mineral mais comum � o cloreto de s�dio (sal de cozinha), \nmas existem outros como a criolita (fluoreto de alum�nio e s�dio). \nS�dio met�lico � usado na manufatura de �steres e no preparo de compostos org�nicos.\n Tamb�m � usado em certas ligas, para decapar metais e para purificar metais fundidos.\n Liga de s�dio com pot�ssio � um eficiente meio de transfer�ncia de calor.\n");
 
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	
	else if(z==12){
	
		printf("\t\tO elemento procurado � o Magn�sio (Mg). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3s2.\n\n-->Localizado no terceiro per�odo da tabela, coluna 2.\n\n-->Raio at�mico: 1.72 angstrons.\n\n-->Primeira energia de ioniza��o: 175 kcal/mol\n\n-->Massa At�mica: 24.3 g/mol\n\n-->Ponto de Fus�o: 650�C\n\n-->Ponto de Ebuli��o: 1107�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\ � o oitavo elemento mais abundante na crosta terrestre\n(cerca de 2,5 por cento em peso).\n N�o � encontrado em forma pura. \nOs principais minerais s�o a magnesita (carbonato de magn�sio, MgCO3)\n e a dolomita (carbonato duplo de c�lcio e magn�sio, MgCa(CO3)2).\n �gua do mar cont�m cerca de 1300 ppm de magn�sio em peso,\n na forma de cloreto (MgCl2).\nUso em  Flashes fotogr�ficos, artefatos pirot�cnicos, \ninclusive bombas incendi�rias. \n� um ter�o mais leve que o alum�nio e suas ligas \ns�o usadas na constru��o de avi�es e m�sseis. \nComo agente de liga para o alum�nio, \nmelhora as propriedades mec�nicas e caracter�sticas de soldagem. \nNa produ��o grafite nodular em ferros fundidos e como aditivo\npara propelentes de foguetes. \nAgente de redu��o para produ��o de ur�nio e outros metais.\n O res�duo da combust�o � empregado em tijolos refrat�rios.\n  � um elemento importante na vida vegetal e animal.\nA clorofila tem o magn�sio como um dos componentes.\n � um nutriente necess�rio para o organismo humano.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==13){

		printf("\t\tO elemento procurado � o Alum�nio (Al). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3p1.\n\n-->Localizado no terceiro per�odo da tabela, coluna 13.\n\n-->Raio at�mico: 1.82 angstrons.\n\n-->Primeira energia de ioniza��o: 138 kcal/mol\n\n-->Massa At�mica: 27 g/mol\n\n-->Ponto de Fus�o: 660�C\n\n-->Ponto de Ebuli��o: 2450�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n   N�o � encontrado puro na natureza (apesar de ser o metal mais abundante da crosta terrestre), \nmas na forma de �xidos e silicatos. \nSegundo mais male�vel. � usado em embalagens, utens�lios de cozinha, \nconstru��o civil, objetos decorativos e em in�meras aplica��es \nestruturais e industriais que exigem um metal leve e de boa resist�ncia mec�nica.\nTamb�m usado como condutor em linhas de transmiss�o de eletricidade,\napesar da condutividade el�trica ser apenas 60% da do cobre. \nTal desvantagem, em v�rios casos, \n� compensada pela maior leveza e menor custo.\n Ligas de alum�nio s�o os principais materiais \nda estrutura de avi�es e ve�culos espaciais.\nA deposi��o de alum�nio evaporado sob v�cuo \nforma uma camada altamente refletiva para a luz e raios infravermelhos, \nn�o oxida como a prata e � usada em espelhos de telesc�pios, \npap�is decorativos e outros.\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	else if (z==14){
	
		printf("\t\tO elemento procurado � o Sil�cio (Si). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3p2.\n\n-->Localizado no terceiro per�odo da tabela, coluna 14.\n\n-->Raio at�mico: 1.46 angstrons.\n\n-->Primeira energia de ioniza��o: 188 kcal/mol\n\n-->Massa At�mica: 28 g/mol\n\n-->Ponto de Fus�o: 1410�C\n\n-->Ponto de Ebuli��o: 2350�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n   � um dos elementos mais �teis.\n Compostos como areia e argila s�o amplamente usados na constru��o civil.\nUsado em refrat�rios para altas temperaturas. \nSilicatos s�o empregados na fabrica��o de esmaltes. \nS�lica � a principal subst�ncia do vidro.\nSil�cio puro com adi��o de tra�os de outros elementos como boro, g�lio, etc \ntem propriedades semicondutoras e � amplamente aplicado em componentes eletr�nicos. \nTamb�m usado em lasers. \n � um importante ingrediente do a�o. \nCarboneto de sil�cio (SiC) � uma das subst�ncias mais \nduras e � usado em abrasivos.\n � um elemento importante para a vida animal e vegetal. \nAlgas extraem s�lica da �gua, para formar as paredes das suas c�lulas.\n O esqueleto humano cont�m s�lica. \nSilicones s�o pol�meros com cadeias de �tomos de sil�cio\ne oxig�nio alternados e t�m amplas aplica��es industriais\ne medicinais em raz�o das suas propriedades el�tricas e qu�micas.\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if(z==15){
	
	printf("\t\tO elemento procurado � o F�sforo (P). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3p3.\n\n-->Localizado no terceiro per�odo da tabela, coluna 15.\n\n-->Raio at�mico: 1.23 angstrons.\n\n-->Primeira energia de ioniza��o: 254 kcal/mol\n\n-->Massa At�mica: 31 g/mol\n\n-->Ponto de Fus�o: 44�C\n\n-->Ponto de Ebuli��o: 280�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n   N�o encontrado livre na natureza. \nA apatita (fluorfosfato ou clorofosfato de c�lcio) \n� um dos minerais mais importantes.\nFosfatos t�m importantes usos como fertilizantes e tamb�m na produ��o de vidros especiais.\nF�sforo vermelho � usado na fabrica��o de f�sforos de seguran�a, \nartefatos pirot�cnicos, bombas incendi�rias e de fuma�a, etc.  \n� um elemento importante na composi��o de a�os, \nbronzes e outras ligas met�licas.\n Trifosfato de s�dio � um agente de limpeza e � usado para prevenir \ncorros�o em tubula��es e em caldeiras.\nF�sforo � um componente importante da estrutura celular,\nde tecidos nervosos e de ossos..\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	
	else if(z==16){
	
		printf("\t\tO elemento procurado � o Enxofre (S). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3p4.\n\n-->Localizado no terceiro per�odo da tabela, coluna 16.\n\n-->Raio at�mico: 1.09 angstrons.\n\n-->Primeira energia de ioniza��o: 239 kcal/mol\n\n-->Massa At�mica: 32 g/mol\n\n-->Ponto de Fus�o: 115�C\n\n-->Ponto de Ebuli��o: 445�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n     A maior aplica��o de seu uso no �mbito mundial se refere � produ��o de �cido sulf�rico,\nestima-se que 87% de sua utiliza��o � destinada a obten��o desse produto. \nPossui tamb�m extrema import�ncia na fabrica��o da borracha, \npois a vulcaniza��o feita com enxofre � o meio mais simples e barato. \nOutra aplica��o consider�vel � seu uso na composi��o \nde fertilizantes e defensivos agr�colas. \nA presen�a do enxofre em nosso organismo possui car�ter fundamental, \nal�m de auxiliar na forma��o de vitaminas, \nprote�nas e do co�gulo sangu�neo, ajuda no combate � parasitas. \nSua defici�ncia provoca diversos sintomas, como depress�o, \nneurite, odor desagrad�vel na saliva e diminui��o do brilho da pele. \nPara evitar esse d�ficit se recomenda a ingest�o de frutas e verduras. \nAlimentos de origem animal como leite e ovos tamb�m o possuem em sua constitui��o...\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	
	else if(z==17){
	
		printf("\t\tO elemento procurado � o Cloro (Cl). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3p5.\n\n-->Localizado no terceiro per�odo da tabela, coluna 17.\n\n-->Raio at�mico: 0.97 angstrons.\n\n-->Primeira energia de ioniza��o: 300 kcal/mol\n\n-->Massa At�mica: 35.45 g/mol\n\n-->Ponto de Fus�o: -101�C\n\n-->Ponto de Ebuli��o: -35�C.\n\n");
    printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n     � um g�s amarelo esverdeado, Cl2, � venenoso e corrosivo \npodendo causar a morte se inalado por per�odo prolongado.  \nO cloro tem uma extensa gama de aplica��es. \n� o germicida padr�o para o tratamento da �gua. Usado na produ��o de pap�is, \nt�xteis, derivados de petr�leo, medicamentos, inseticidas, tintas, \nsolventes, pl�sticos e muitos outros. \nAl�m da import�ncia �bvia do cloreto de s�dio (sal de cozinha), \noutros compostos igualmente s�o. \nExemplo: clorof�rmio, tetracloreto de carbono, �cido clor�drico, etc.\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if(z==18){

		printf("\t\tO elemento procurado � o Arg�nio (Ar). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3p6.\n\n-->Localizado no terceiro per�odo da tabela, coluna 18.\n\n-->Raio at�mico: 0.88 angstrons.\n\n-->Primeira energia de ioniza��o: 364 kcal/mol\n\n-->Massa At�mica: 40 g/mol\n\n-->Ponto de Fus�o: -189�C\n\n-->Ponto de Ebuli��o: -186�C.\n\n");  
 printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n     n   Utilizado em Laser para medicina oftalmol�gica.  \nNa fabrica��o de l�mpadas de ilumina��o comum para impedir que o filamento seja oxidado. \nIsolante, preenchendo os vazios entre vidros duplos e triplos em virtude de \nsua baixa condutividade t�rmica.\n");	
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if(z==19){

		printf("\t\tO elemento procurado � o Pot�ssio (K). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4s1.\n\n-->Localizado no quarto  per�odo da tabela, coluna 1.\n\n-->Raio at�mico: 2.77 angstrons.\n\n-->Primeira energia de ioniza��o: 100 kcal/mol\n\n-->Massa At�mica: 39 g/mol\n\n-->Ponto de Fus�o: 64�C\n\n-->Ponto de Ebuli��o: 774�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O elemento ocorre na �gua do mar e em v�rios minerais como a \nsilvita (KCl ), carnalita (KCl . MgCl2 . 6 H2O)  e  carnita  (MgSO4 . KCl . 3 H2O). \n� obtido por eletr�lise. Quimicamente � muito reativo lembrando o s�dio \nno seu comportamento e em seus compostos. \nTamb�m forma o super�xido KO2 de colora��o laranja que cont�m o �on O2-.\nO metal tem poucos usos mas os sais de pot�ssio s�o usados em muitas aplica��es. \nO pot�ssio � um elemento essencial nos organismos vivos.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if(z==20){

		printf("\t\tO elemento procurado � o C�lcio (Ca). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4s2.\n\n-->Localizado no quarto  per�odo da tabela, coluna 2.\n\n-->Raio at�mico: 2.23 angstrons.\n\n-->Primeira energia de ioniza��o: 140 kcal/mol\n\n-->Massa At�mica: 40 g/mol\n\n-->Ponto de Fus�o: 839�C\n\n-->Ponto de Ebuli��o: 1440�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O c�lcio tema ampla utiliza��o industrial principalmente na forma de carbonatos \ne fluoretos, como � comumente encontrado na natureza. \nDevido a sua alta reatividade o c�lcio n�o � encontrado em forma pura \ndevendo para uso em laborat�rio ser isolado por processos qu�micos. \n� utilizado na constru��o sob o nome de Cal virgem ou Cal viva \ncomo componente em reboco. \nEst� presente nos ossos dos animais, nos latic�nios e dissolvido em �guas subterr�neas. \n");
    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if(z==21){

		printf("\t\tO elemento procurado � o Esc�ndio (Sc). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d1.\n\n-->Localizado no quarto  per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.09 angstrons.\n\n-->Primeira energia de ioniza��o: 151 kcal/mol\n\n-->Massa At�mica: 45 g/mol\n\n-->Ponto de Fus�o: 1539�C\n\n-->Ponto de Ebuli��o: 2730�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Aparentemente, o esc�ndio � mais abundante no Sol e em outras estrelas \ndo que na Terra, onde ocupa o 50� lugar. \nA sua distribui��o � muito dilu�da, estando presente em concentra��es m�nimas em cerca de 800 esp�cies minerais.\nSupostamente, a cor azul da �gua-marinha (variedade de berilo) � devida ao esc�ndio. \nOcorre como principal componente no silicato de esc�ndio e �trio, \num mineral raro encontrado na Escandin�via e na Mal�sia. \n� tamb�m encontrado em res�duos provenientes da extra��o do tungst�nio a partir da volframita\n(tungstato de ferro e mangan�s).  \nAtualmente, a maior parte � obtida a partir do silicato de esc�ndio e �trio \nou como subproduto da minera��o do ur�nio.  \nO iodeto de esc�ndio (ScI3), adicionado ao vapor de merc�rio das l�mpadas, \ntorna-as fontes de luz parecida com a luz solar. \nO �xido de esc�ndio (Sc2O3) � usado em l�mpadas de alta intensidade. \n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==22){

		printf("\t\tO elemento procurado � o Tit�nio (Ti). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d2.\n\n-->Localizado no quarto  per�odo da tabela, coluna 4.\n\n-->Raio at�mico: 2.00 angstrons.\n\n-->Primeira energia de ioniza��o: 158 kcal/mol\n\n-->Massa At�mica: 48 g/mol\n\n-->Ponto de Fus�o: 1660�C\n\n-->Ponto de Ebuli��o: 3277�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Est� presente em meteoritos, no Sol e em outras estrelas. \nRochas lunares cont�m o �xido. \nNa crosta terrestre, � o nono elemento mais abundante. \nEst� quase sempre presente em rochas �gneas e em sedimentos delas derivados. \nAlguns minerais s�o o rut�lio (�xido de tit�nio), a ilmenita (titanato ferroso, TiFeO3)\ne o esf�nio (tamb�m chamado titanita, silicato de tit�nio e c�lcio). \nEm termos gen�ricos, pode-se dizer que o tit�nio metal \ne v�rias de suas ligas apresentam a ben�fica combina��o \nde alta resist�ncia mec�nica e t�rmica, alta resist�ncia \n� corros�o e baixa massa espec�fica e, \nportanto, usados em aplica��es cr�ticas, \nnas quais essas propriedades s�o importantes.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==23){

		printf("\t\tO elemento procurado � o Van�dio (V). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d3.\n\n-->Localizado no quarto  per�odo da tabela, coluna 5.\n\n-->Raio at�mico: 1.92 angstrons.\n\n-->Primeira energia de ioniza��o: 155 kcal/mol\n\n-->Massa At�mica: 51 g/mol\n\n-->Ponto de Fus�o: 1902�C\n\n-->Ponto de Ebuli��o: 3377�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � usado para produzir a�os resistentes � corros�o e a�os r�pidos.\nEmpregado como elemento de liga��o para cladear\n (unir de forma permanente por lamina��o a quente) tit�nio com a�o. \nTamb�m usado em supercondutores.  \nPent�xido de van�dio (V2O5) � usado em cer�micas e como catalisador.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if(z==24){

		printf("\t\tO elemento procurado � o Cromo (Cr). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d5.\n\n-->Localizado no quarto  per�odo da tabela, coluna 6.\n\n-->Raio at�mico: 1.85 angstrons.\n\n-->Primeira energia de ioniza��o: 156 kcal/mol\n\n-->Massa At�mica: 52 g/mol\n\n-->Ponto de Fus�o: 1857�C\n\n-->Ponto de Ebuli��o: 2627�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O cromo � utilizado de diversas maneiras, dentre elas \nest�o os processos de cromagem, que consiste na deposi��o deste elemento sobre uma pe�a.\nLimpeza de vidrarias laboratoriais, na forma de dicromato de pot�ssio K2Cr2O7.\nE na forma de di�xido de cr�mo (CrO2), que era utilizado na produ��o do material \nmagn�tico antigamente empregado em fitas-cassetes para grava��o de �udio.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if(z==25){

		printf("\t\tO elemento procurado � o Mangan�s (Mn). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d5.\n\n-->Localizado no quarto  per�odo da tabela, coluna 7.\n\n-->Raio at�mico: 1.79 angstrons.\n\n-->Primeira energia de ioniza��o: 171 kcal/mol\n\n-->Massa At�mica: 55 g/mol\n\n-->Ponto de Fus�o: 1244�C\n\n-->Ponto de Ebuli��o: 2067�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       S�o v�rios os tipos de minerais. �xidos e carbonatos s�o os mais comuns. \nGrandes quantidades foram encontradas no fundo dos oceanos, o que pode se tornar uma fonte no futuro. \n� componente de v�rias ligas importantes. \nNo a�o, melhora as propriedades de forjamento, a resist�ncia, a rigidez e a \nresist�ncia ao desgaste.\nLigado com alum�nio e antim�nio e com pequena quantidade de cobre, \nforma um material altamente ferromagn�tico.  \nAo vidro, d� uma colora��o roxa, semelhante � ametista a qual, \npor sua vez, tem essa cor devido ao mangan�s. \n� elemento importante da vida animal, \nprovavelmente essencial para assimila��o da vitamina B1.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if (z==26){
	
		printf("\t\tO elemento procurado � o Ferro (Fe). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d6.\n\n-->Localizado no quarto  per�odo da tabela, coluna 8.\n\n-->Raio at�mico: 1.72 angstrons.\n\n-->Primeira energia de ioniza��o: 182 kcal/mol\n\n-->Massa At�mica: 56 g/mol\n\n-->Ponto de Fus�o: 1536�C\n\n-->Ponto de Ebuli��o: 3000�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O elemento � relativamente abundante no Universo. \nEncontrado no Sol e em muitas outras estrelas em consider�veis quantidades.  \n� um componente essencial para a vida vegetal e animal. \nA hemoglobina o cont�m. \nNa forma pura, praticamente n�o � usado. \nEntretanto, � desnecess�rio mencionar as in�meras aplica��es do a�o, \nliga da qual � o principal componente.\nO a�o � basicamente a liga de ferro e carbono. \nElementos outros adicionados, como enxofre, \nsil�cio, mangan�s, f�sforo, n�quel, cromo, \nvan�dio, em diferentes propor��es e combina��es, \nproduzem a�os de diferentes propriedades mec�nicas, t�rmicas, qu�micas, \nmagn�ticas e o resultado � uma variedade de tipos para as mais diversas aplica��es.  .\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if (z==27){
	
		printf("\t\tO elemento procurado � o Cobalto (Co). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d7.\n\n-->Localizado no quarto  per�odo da tabela, coluna 9.\n\n-->Raio at�mico: 1.67 angstrons.\n\n-->Primeira energia de ioniza��o: 181 kcal/mol\n\n-->Massa At�mica: 59 g/mol\n\n-->Ponto de Fus�o: 1495�C\n\n-->Ponto de Ebuli��o: 2877�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O cobalto � um metal duro , ferromagn�tico, de colora��o branca azulada. \n� um elemento qu�mico essencial para os mam�feros em pequenas quantidades. \nO Co-60, um radiois�topo, � um importante tra�ador e agente no tratamento do c�ncer. \nOs sais s�o usados para dar cor azul a porcelanas, vidros, esmaltes. \nA solu��o do cloreto � usada como tinta. \n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if (z==28){
	
		printf("\t\tO elemento procurado � o N�quel (Ni). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d8.\n\n-->Localizado no quarto  per�odo da tabela, coluna 10.\n\n-->Raio at�mico: 1.62 angstrons.\n\n-->Primeira energia de ioniza��o: 176 kcal/mol\n\n-->Massa At�mica: 58.7 g/mol\n\n-->Ponto de Fus�o: 1455�C\n\n-->Ponto de Ebuli��o: 2887�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � encontrado na maioria dos meteoritos e freq�entemente a sua presen�a\nserve para distinguir o meteorito de um mineral. \n� amplamente usado para a produ��o de a�os inoxid�veis \ne de outras ligas resistentes � corros�o.\nTubula��es feitas de liga de cobre e n�quel s�o empregadas na condu��o em \nmeios corrosivos como �gua do mar.\n� componente de ligas para resist�ncias el�tricas.\nGranulado, serve como catalisador para a hidrogena��o de �leos vegetais. \nA eletrodeposi��o do n�quel d� uma eficiente prote��o anticorrosiva a pe�as de a�o.\nOutras aplica��es: moedas, ligas para �m�s permanentes, baterias. \n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if (z==29){
	
		printf("\t\tO elemento procurado � o Cobre (Cu). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d10.\n\n-->Localizado no quarto  per�odo da tabela, coluna 11.\n\n-->Raio at�mico: 1.57 angstrons.\n\n-->Primeira energia de ioniza��o: 178 kcal/mol\n\n-->Massa At�mica: 63.5 g/mol\n\n-->Ponto de Fus�o: 1083�C\n\n-->Ponto de Ebuli��o: 2582�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Condu��o de eletricidade � a aplica��o b�sica do cobre. \nDesde cabos e transformadores de linhas de transmiss�o e instala��es prediais a aparelhos \nel�tricos e eletr�nicos e seus componentes.\nA facilidade de soldagem e/ou a resist�ncia � corros�o de alguns meios \nfazem do cobre o metal apropriado para certos tipos de tubula��es, trocadores de calor, etc.\n Ligas como lat�o e bronze t�m importantes aplica��es.\n � tamb�m usado como veneno agr�cola e para remover algas na purifica��o da �gua.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==30){

		printf("\t\tO elemento procurado � o Zinco (Zn). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 3d10.\n\n-->Localizado no quarto  per�odo da tabela, coluna 12.\n\n-->Raio at�mico: 1.53 angstrons.\n\n-->Primeira energia de ioniza��o: 217 kcal/mol\n\n-->Massa At�mica: 65.4 g/mol\n\n-->Ponto de Fus�o: 420�C\n\n-->Ponto de Ebuli��o: 907�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Empregado em uma variedade de ligas: lat�o, bronze para molas, \ncom n�quel e prata para tipografia, ligas para soldas, etc.\nZinco met�lico � usado em alguns tipos de baterias. \nLigado com cobre e alum�nio, � usado para produzir pe�as fundidas sob press�o, \nas quais s�o amplamente usadas nas ind�strias automobil�stica, \nde equipamentos el�tricos e outras.\nMuito usado no revestimento \n(galvaniza��o) de pe�as de a�o, para prevenir a corros�o.\nO zinco � um elemento essencial para o crescimento de homens e animais.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==31){

		printf("\t\tO elemento procurado � o G�lio (Ga). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4p1.\n\n-->Localizado no quarto  per�odo da tabela, coluna 13.\n\n-->Raio at�mico: 1.81 angstrons.\n\n-->Primeira energia de ioniza��o: 138 kcal/mol\n\n-->Massa At�mica: 69.7 g/mol\n\n-->Ponto de Fus�o: 30�C\n\n-->Ponto de Ebuli��o: 2403�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Se depositado no vidro, forma um brilhante espelho.\n� amplamente empregado na dopagem de semicondutores para a produ��o \nde componentes eletr�nicos de estado s�lido, como transistores e outros.\nArsenieto de g�lio pode converter diretamente eletricidade em luz. \nLiga-se facilmente com a maioria dos metais e pode ser componente de ligas de baixo ponto de fus�o.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==32){

		printf("\t\tO elemento procurado � o Germ�nio (Ge). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4p2.\n\n-->Localizado no quarto  per�odo da tabela, coluna 14.\n\n-->Raio at�mico: 1.52 angstrons.\n\n-->Primeira energia de ioniza��o: 182 kcal/mol\n\n-->Massa At�mica: 72.6 g/mol\n\n-->Ponto de Fus�o: 937�C\n\n-->Ponto de Ebuli��o: 2830�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � um dos mais importantes elementos semicondutores e, portanto, \namplamente empregado na produ��o de transistores e outros componentes \nde estado s�lido na ind�stria eletr�nica. \n� utilizado em ligas com f�sforo para l�mpadas fluorescentes. \nGerm�nio e seu �xido s�o transparentes aos raios infravermelhos e s�o usados\nem detectores de infravermelho de alta sensibilidade.\nO �xido de germ�nio tem alto �ndice de refra��o e � empregado como componente em lentes especiais, \ncomo objetivas de microsc�pios.\n");

    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==33){

		printf("\t\tO elemento procurado � o Ars�nio (As). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4p3.\n\n-->Localizado no quarto  per�odo da tabela, coluna 15.\n\n-->Raio at�mico: 1.33 angstrons.\n\n-->Primeira energia de ioniza��o: 226 kcal/mol\n\n-->Massa At�mica: 75 g/mol\n\n-->Ponto de Fus�o: 817�C\n\n-->Ponto de Ebuli��o: 887�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O composto de ars�nio mais utilizado no mundo � o �xido arsenioso (As2O3).\nE sua utiliza��o � voltada para o exterm�nio de pragas, por ser altamente letal em grandes quantidades.\nMas, sua utiliza��o n�o se resume a apenas veneno. \nO ars�nio � muito utilizado no refor�o de ligas met�licas e na conserva��o da madeira, \nal�m de clarificador em vidros e constituinte de fogos de artif�cio.\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==34){

		printf("\t\tO elemento procurado � o Sel�nio (Se). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4p4.\n\n-->Localizado no quarto  per�odo da tabela, coluna 16.\n\n-->Raio at�mico: 1.22 angstrons.\n\n-->Primeira energia de ioniza��o: 225 kcal/mol\n\n-->Massa At�mica: 79 g/mol\n\n-->Ponto de Fus�o: 221�C\n\n-->Ponto de Ebuli��o: 687�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O Sel�nio � encontrado em alimentos na forma de gr�os \n(feij�o, gr�o de bico, ervilha, lentilha, vagem), frutos do mar, peixes, frango e carnes, em geral. \nPelas suas propriedades fotovoltaicas, fotocondutivas e semicondutoras, \n� empregado em c�lulas fotovoltaicas, fotoc�lulas, retificadores de corrente el�trica.  \nNa ind�stria de vidros, para descolorar vidros e produzir vidros e esmaltes de cor rubi.\nComo aditivo para a�os inoxid�veis.\nEm copiadoras eletrost�ticas, nos cilindros que s�o sensibilizados pela luz.\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==35){

		printf("\t\tO elemento procurado � o Bromo (Br). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4p5.\n\n-->Localizado no quarto  per�odo da tabela, coluna 17.\n\n-->Raio at�mico: 1.12 angstrons.\n\n-->Primeira energia de ioniza��o: 273 kcal/mol\n\n-->Massa At�mica: 80 g/mol\n\n-->Ponto de Fus�o: -7�C\n\n-->Ponto de Ebuli��o: 58�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O Bromo, assim como o Merc�rio, � l�quido em temperatura ambiente. \nAl�m disso, � vol�til, denso e inst�vel, \npodendo evaporar facilmente em temperaturas comuns, \nformando um vapor avermelhado. \nTamb�m possui uma alta capacidade de oxida��o, al�m da capacidade de dissolu��o em compostos org�nicos apolares, \ncomo o �lcool.\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==36){

		printf("\t\tO elemento procurado � o Cript�nio (Kr). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4p6.\n\n-->Localizado no quarto  per�odo da tabela, coluna 18.\n\n-->Raio at�mico: 1.03 angstrons.\n\n-->Primeira energia de ioniza��o: 323 kcal/mol\n\n-->Massa At�mica: 83.8 g/mol\n\n-->Ponto de Fus�o: -157�C\n\n-->Ponto de Ebuli��o:-153�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � um g�s monoat�mico, que dificilmente se liquefaz, apresenta um espectro de linhas \nverde e vermelha-alaranjada muito brilhante, e est� presente na atmosfera\nna propor��o de uma parte para 9.000.000, \no que significa que a sua propor��o entre os elementos presentes no planeta � bastante pequena.\n");


    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==37){

		printf("\t\tO elemento procurado � o Rub�dio (Rb). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5s1.\n\n-->Localizado no quinto  per�odo da tabela, coluna 1.\n\n-->Raio at�mico: 2.98 angstrons.\n\n-->Primeira energia de ioniza��o: 96 kcal/mol\n\n-->Massa At�mica: 85.47 g/mol\n\n-->Ponto de Fus�o: 39�C\n\n-->Ponto de Ebuli��o:688�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � usado para remover res�duo de oxig�nio em v�lvulas termi�nicas, \ncomo componente de fotoc�lulas, na produ��o de vidros especiais.\nAlgumas aplica��es presumidas mas ainda n�o implementadas: \nfluido de trabalho para turbinas a vapor, geradores magneto-hidrodin�micos, \nfoguetes de �ons para naves espaciais.\n");



    printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==38){

		printf("\t\tO elemento procurado � o Estr�ncio (Sr). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5s2.\n\n-->Localizado no quinto per�odo da tabela, coluna 2.\n\n-->Raio at�mico: 2.27 angstrons.\n\n-->Primeira energia de ioniza��o: 152 kcal/mol\n\n-->Massa At�mica: 88.91 g/mol\n\n-->Ponto de Fus�o: 1.526�C\n\n-->Ponto de Ebuli��o: 2.927�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Uma das principais aplica��es � na produ��o de vidros para cinesc�pios de televisores. Tamb�m usado na fabrica��o de �m�s de ferrita e no refino de zinco.Sais de estr�ncio s�o usados em artefatos pirot�cnicos.O titanato de estr�ncio tem propriedades �ticas caracterizadas pelo elevado �ndice de refra��o.O is�topo 90Sr tem meia vida de 29,1 anos e � uma das melhores fontes de part�culas beta de alta energia. Por isso, � usado em geradores para converter diretamente a radia��o em energia el�trica. Tais geradores j� foram usados em sondas espaciais e podem ter outras aplica��es t�cnicas.");
  printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	else if (z==39){
	
		printf("\t\tO elemento procurado � o �trio (Y). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d1. \n\n-->Localizado no quinto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.27 angstrons.\n\n-->Primeira energia de ioniza��o: 152 kcal/mol\n\n-->Massa At�mica: 88.91 g/mol\n\n-->Ponto de Fus�o: 1.526�C\n\n-->Ponto de Ebuli��o: 2.927�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       A ocorr�ncia de �trio se d� em quase todos os minerais de terras raras. Pedras lunares mostraram um razo�vel teor de �trio. Os compostos YVO4 e Y2O3 s�o usados em f�sforos para dar cor vermelha em cinesc�pios. �xido de �trio com ferro � usado em filtros de microondas. Y3Fe5O12 tem propriedades magn�ticas e � usado como transdutor de som. Y3Al5O12 tem dureza de 8,5 e pode ser usado para polimento como substituto para o diamante em alguns casos.Em pequenas propor��es, 0,1 a 0,2%, pode ser usado para reduzir o tamanho do gr�o de cromo, molibd�nio, zirc�nio e tit�nio. Tamb�m para aumentar a resist�ncia de ligas de alum�nio e de magn�sio.Usado como desoxidante para o van�dio e outros metais n�o ferrosos. Tamb�m na produ��o de ferro fundido nodular.Como catalisador para a polimeriza��o do etileno. Usado tamb�m em alguns tipos de lasers. Pesquisa-se o emprego do �xido na fabrica��o de vidros especiais, de alta resist�ncia e baixa expans�o t�rmica.\n");

  printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==40){

		printf("\t\tO elemento procurado � o Zirc�nio (Zr). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d2.\n\n-->Localizado no quinto per�odo da tabela, coluna 4.\n\n-->Raio at�mico: 2.16 angstrons.\n\n-->Primeira energia de ioniza��o: 158 kcal/mol\n\n-->Massa At�mica: 91,22 g/mol\n\n-->Ponto de Fus�o: 1.852�C\n\n-->Ponto de Ebuli��o: 3.580�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O zirc�nio tem uma baixa absor��o de n�utrons e, por isso, � usado em reatores nucleares, no revestimento do combust�vel por exemplo. Esta aplica��o representa a maior parte do uso comercial do zirc�nio met�lico. � usado na ind�stria qu�mica como anticorrosivo, para remover oxig�nio de v�lvulas eletr�nicas, em ligas de a�o, em l�mpadas de flash, em explosivos, etc. Com ni�bio, � supercondutor em baixas temperaturas e, por isso, usado em �m�s supercondutores. O �xido impuro � empregado como refrat�rio na ind�stria de cer�mica e vidro e em cadinhos de laborat�rio.\n");

  printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==41){

		printf("\t\tO elemento procurado � o Ni�bio (Nb). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d3.\n\n-->Localizado no quinto per�odo da tabela, coluna 5.\n\n-->Raio at�mico: 2.08 angstrons.\n\n-->Primeira energia de ioniza��o: 159 kcal/mol\n\n-->Massa At�mica: 92.91 g/mol\n\n-->Ponto de Fus�o: 2.468�C\n\n-->Ponto de Ebuli��o: 4.930�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Utilizado em ligas para eletrodos de solda de a�o inoxid�vel e outras ligas de a�o.  O elemento tem propriedades supercondutoras e, com o zirc�nio, � usado em magnetos supercondutores.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	
	else if (z==42){
	
		printf("\t\tO elemento procurado � o Molibd�nio (Mo). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d4.\n\n-->Localizado no quinto per�odo da tabela, coluna 6.\n\n-->Raio at�mico: 2.01 angstrons.\n\n-->Primeira energia de ioniza��o: 164 kcal/mol\n\n-->Massa At�mica: 95.94 g/mol\n\n-->Ponto de Fus�o: 2.617�C\n\n-->Ponto de Ebuli��o: 5.560�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Usado em ligas � base de n�quel, resistentes a altas temperaturas e � corros�o. Como agente catalisador no refino do petr�leo. Em eletrodos para fornos de aquecimento el�trico. Em reatores nucleares e partes de avi�es e m�sseis. Quase todos os a�os de elevada resist�ncia t�m molibd�nio em propor��es de 0,25 a 8%. Em filamentos para componentes el�tricos e eletr�nicos. Sulfeto de molibd�nio � um lubrificante para altas temperaturas. � elemento essencial para a nutri��o das plantas. Algumas regi�es s�o est�reis por falta do elemento no solo.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
 else if (z==43){
 
 	printf("\t\tO elemento procurado � o Tecn�cio (Ru). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d5.\n\n-->Localizado no quinto per�odo da tabela, coluna 7.\n\n-->Raio at�mico: 1.95 angstrons.\n\n-->Primeira energia de ioniza��o: 168 kcal/mol\n\n-->Massa At�mica: 98 g/mol\n\n-->Ponto de Fus�o: 2.200�C\n\n-->Ponto de Ebuli��o: - �C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � encontrado em alguns tipos de estrelas e, na Terra, aparentemente n�o. � produzido de forma artificial.Foi verificado que a�os de m�dio carbono podem ser protegidos contra corros�o com pequena quantidade de KTcO4 (55 ppm). Entretanto, desde que o elemento � radioativo, s� pode ser usado em locais isolados. O is�topo 99Tcm (m significa meta estado) tem uma meia vida de 6,01 horas e � usado para fins medicinais devido � energia da radia��o gama emitida e � possibilidade de liga��o qu�mica com mol�culas biologicamente ativas.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}



}

else if (z==44){

		printf("\t\tO elemento procurado � o Rut�nio (Ru). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d6.\n\n-->Localizado no quinto per�odo da tabela, coluna 8.\n\n-->Raio at�mico: 1.89 angstrons.\n\n-->Primeira energia de ioniza��o: 170 kcal/mol\n\n-->Massa At�mica: 101 g/mol\n\n-->Ponto de Fus�o: 2.250�C\n\n-->Ponto de Ebuli��o: 3.727�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Com platina e pal�dio, forma uma liga extremamente dura, usada em contatos el�tricos para opera��o severa. Liga de rut�nio e molibd�nio � supercondutora a 10,6 K.Adicionado ao tit�nio na propor��o de 0,1%, melhora a resist�ncia � corros�o deste.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==45){

		printf("\t\tO elemento procurado � o R�dio (Rh). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d7.\n\n-->Localizado no quinto per�odo da tabela, coluna 9.\n\n-->Raio at�mico: 1.83 angstrons.\n\n-->Primeira energia de ioniza��o: 172 kcal/mol\n\n-->Massa At�mica: 102.9 g/mol\n\n-->Ponto de Fus�o: 1.965�C\n\n-->Ponto de Ebuli��o: 3.720�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       A principal aplica��o � como componente de liga para endurecer platina e pal�dio. Tais ligas s�o usadas em termopares para altas temperaturas, fia��o de fornos, revestimento antifric��o na produ��o de fibra de vidro, velas de igni��o para avi�es, etc.Tamb�m usado em contatos el�tricos para opera��o severa, devido � baixa resist�ncia el�trica, estabilidade e resist�ncia � corros�o. Camadas superficiais de r�dio, obtidas por eletrodeposi��o ou por evapora��o, s�o duras e refletivas e s�o usadas em instrumentos �ticos. Empregado tamb�m como catalisador e em joalheria.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	else if (z==46){
	
		printf("\t\tO elemento procurado � o Pal�dio (Pd). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d8.\n\n-->Localizado no quinto per�odo da tabela, coluna 10.\n\n-->Raio at�mico: 1.79 angstrons.\n\n-->Primeira energia de ioniza��o: 192 kcal/mol\n\n-->Massa At�mica: 106.4 g/mol\n\n-->Ponto de Fus�o: 1.555�C\n\n-->Ponto de Ebuli��o: 3.027�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Na forma pulverizada, como catalisador para rea��es de hidrogena��o e desidrogena��o. Ligas s�o usadas em joalheria. O ouro pode ser descolorido com pal�dio (ouro branco). Usado em odontologia, molas de relojoaria, instrumentos cir�rgicos, contatos el�tricos.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==47){

		printf("\t\tO elemento procurado � o Prata (Ag). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d9.\n\n-->Localizado no quinto per�odo da tabela, coluna 11.\n\n-->Raio at�mico: 1.75 angstrons.\n\n-->Primeira energia de ioniza��o: 174 kcal/mol\n\n-->Massa At�mica: 107.8 g/mol\n\n-->Ponto de Fus�o: 961�C\n\n-->Ponto de Ebuli��o: 2.212�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Usada principalmente em joalheria e em outros objetos decorativos, nos quais a apar�ncia � determinante. Em geral, s�o usadas ligas com cerca de 92% de prata e o restante de cobre ou de outros metais.Por muito tempo, foi usada em moedas. Em ligas odontol�gicas, ligas para solda, contatos el�tricos, baterias de alta capacidade (prata-zinco e prata-c�dmio). Pinturas � base de prata s�o usadas em circuitos impressos. Em espelhos, nos quais a prata � depositada no vidro ou no metal por meios qu�micos (eletrodeposi��o ou evapora��o). O nitrato de prata � provavelmente o composto mais importante e � usado extensivamente em fotografia convencional. O fulminato de prata � um poderoso explosivo. O iodeto de prata � usado para provocar chuvas. Cloreto de prata tem propriedades �ticas especiais, pode ser transparente e servir de cimento para vidro.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==48){

		printf("\t\tO elemento procurado � o C�dmio (Cd). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4d10.\n\n-->Localizado no quinto per�odo da tabela, coluna 12.\n\n-->Raio at�mico: 1.71 angstrons.\n\n-->Primeira energia de ioniza��o: 207 kcal/mol\n\n-->Massa At�mica: 112.4 g/mol\n\n-->Ponto de Fus�o: 3.211�C\n\n-->Ponto de Ebuli��o: 767�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O c�dmio � um metal reativo, logo que exposto ao observa-se o aparecimento, de manchas provavelmente, �xido de c�dmio. O metal reage com �cidos dilu�dos liberando hidrog�nio, por�m n�o reage com hidr�xidos dilu�dos em temperatura ambiente. � resistente a a��o de produtos qu�micos. O c�dmio em p� queima em contato com o ar. Quando fundido o metal apresenta uma colora��o azulada. Apresenta propriedades semelhantes a dozinco; todos os compostos de c�dmio s�o extremamente venenosos e t�xicos. N�o � encontrado na sua forma elementar na natureza, mas � comumente encontrado na forma de greennokite CdS.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==49){

		printf("\t\tO elemento procurado � o �ndio (In). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5p1.\n\n-->Localizado no quinto per�odo da tabela, coluna 13.\n\n-->Raio at�mico: 2.00 angstrons.\n\n-->Primeira energia de ioniza��o: 133 kcal/mol\n\n-->Massa At�mica: 114.8 g/mol\n\n-->Ponto de Fus�o: 156�C\n\n-->Ponto de Ebuli��o: 2.027�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Usado em ligas de baixo ponto de fus�o, como as usadas em mancais de rolamento.Em transistores de germ�nio, retificadores, termistores, fotocondutores. Pode ser depositado em metais ou evaporado em vidros, formando um espelho t�o refletor quanto ao de prata mas com melhor resist�ncia � corros�o.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	
else if (z==50){

		printf("\t\tO elemento procurado � o Antim�nio (Sn). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5p2.\n\n-->Localizado no quinto per�odo da tabela, coluna 14.\n\n-->Raio at�mico: 1.72 angstrons.\n\n-->Primeira energia de ioniza��o: 169 kcal/mol\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Em semicondutores para detectores de infravermelho, diodos, dispositivos de efeito Hall.Adicionado ao chumbo, eleva consideravelmente a dureza e resist�ncia mec�nica deste.Em baterias, ligas antifric��o, pequenas armas, proj�teis, etc. Compostos como �xidos, sulfetos, antimoniato de s�dio, tricloreto de antim�nio s�o usados em materiais � prova de fogo, pinturas em cer�micas e vidros, etc.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==51){

		printf("\t\tO elemento procurado � o Estanho (Sb). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5p3.\n\n-->Localizado no quinto per�odo da tabela, coluna 15.\n\n-->Raio at�mico: 1.53 angstrons.\n\n-->Primeira energia de ioniza��o: 199 kcal/mol\n\n-->Massa At�mica: 121.76 g/mol\n\n-->Ponto de Fus�o: 630�C\n\n-->Ponto de Ebuli��o: 1.577�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Assim como outros metais, � utilizado em ligas para que sejam atingidas determinadas propriedades f�sicas. Al�m de ser adicionado (sob formas variadas de compostos) a cer�micas e esmaltes para aumento de resist�ncia pirof�rica, na borracha para o processo de vulcaniza��o e na fabrica��o de fogos de artif�cio.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==52){
		printf("\t\tO elemento procurado � o Tel�rio (Te). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5p4.\n\n-->Localizado no quinto per�odo da tabela, coluna 16.\n\n-->Raio at�mico: 1.42 angstrons.\n\n-->Primeira energia de ioniza��o: 208 kcal/mol\n\n-->Massa At�mica: 127.6 g/mol\n\n-->Ponto de Fus�o: 450�C\n\n-->Ponto de Ebuli��o: 987�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       A adi��o ao cobre e ao a�o inoxid�vel melhora a capacidade de usinagem dos mesmos e, ao chumbo, melhora a resist�ncia � corros�o do �cido sulf�rico, a resist�ncia mec�nica e a dureza.Usado tamb�m em espoletas e em cer�micas e vidros coloridos.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==53){
		printf("\t\tO elemento procurado � o Iodo (I). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5p5.\n\n-->Localizado no quinto per�odo da tabela, coluna 17.\n\n-->Raio at�mico: 1.32 angstrons.\n\n-->Primeira energia de ioniza��o: 241 kcal/mol\n\n-->Massa At�mica: 126,9 g/mol\n\n-->Ponto de Fus�o: 114�C\n\n-->Ponto de Ebuli��o: 182�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Desinfetantes (tintura de iodo - cerca de 3% de I em �gua e �lcool - � usado para desinfetar ferimentos e purificar �gua para fins pot�veis), catalisador para produ��o de alguns pol�meros, complemento alimentar (adicionado ao sal de cozinha , contrastes para raios X, compostos para fotografia como iodeto de pot�ssio, em fluidos de corte para m�quinas de usinagem, na metalurgia do tit�nio, zirc�nio e outros metais, l�mpadas hal�genas, etc. Tra�os de iodo s�o necess�rios para organismos vivos. No homem, a car�ncia provoca o b�cio. Isso pode ocorrer em zonas interiores, onde h� pouco consumo de frutos do mar. A adi��o ao sal de cozinha � feita na forma de iodeto de s�dio, iodeto ou iodato de pot�ssio. Iodeto de pot�ssio tamb�m � dado a pessoas atingidas por acidentes radioativos para impedir a absor��o do material radioativo pelo organismo.O is�topo 131I � usado para fins medicinais.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==54){
		printf("\t\tO elemento procurado � o Xen�nio (Xe). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5p6.\n\n-->Localizado no quinto per�odo da tabela, coluna 18.\n\n-->Raio at�mico: 1.24 angstrons.\n\n-->Primeira energia de ioniza��o: 280 kcal/mol\n\n-->Massa At�mica: 131.3 g/mol\n\n-->Ponto de Fus�o: -112�C\n\n-->Ponto de Ebuli��o: -107�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Usado em l�mpadas para estrobosc�pios, para fins bactericidas e outros.Em reatores nucleares, na pesquisa de part�culas de alta energia. 133Xe � usado em radioterapia.L�mpadas de alta energia de luz ultravioleta. L�mpadas especiais usadas em avia��o.De forma similar ao cript�nio, em lasers tipo 'Excimer' (com halog�nios como cloro e fl�or). Esses lasers apresentam a propriedade de emitir radia��es em comprimentos de onda que variam de acordo com as condi��es de opera��o.Por apresentar elevada massa espec�fica e por ser facilmente ioniz�vel, � usado em motores i�nicos para artefatos espaciais. Displays de plasma para televisores.Perxenatos s�o usados em an�lises qu�micas, como oxidantes.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	else if (z==55){
		printf("\t\tO elemento procurado � o C�sio (Cs). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 6s1.\n\n-->Localizado no sexto per�odo da tabela, coluna 1.\n\n-->Raio at�mico: 3.34 angstrons.\n\n-->Primeira energia de ioniza��o: 90 kcal/mol\n\n-->Massa At�mica: 132.9 g/mol\n\n-->Ponto de Fus�o: 28�C\n\n-->Ponto de Ebuli��o: 705�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � um metal extremamente t�xico e radioativo, emissor de raios alfa � utilizado em aparelhos de raio-X, capaz de transformar energia luminosa em energia el�trica, � componente de c�lulas fotovoltaicas. Outra importante utiliza��o do c�sio � nos rel�gios at�micos que s� atrasam 1 segundo a cada 60 milh�es de anos, um deles � o NIST-F1, o qual marca o hor�rio da Am�rica.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}


	else if (z==56){
		printf("\t\tO elemento procurado � o B�rio (Ba). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 6s2.\n\n-->Localizado no sexto per�odo da tabela, coluna 2.\n\n-->Raio at�mico: 2.78 angstrons.\n\n-->Primeira energia de ioniza��o: 122 kcal/mol\n\n-->Massa At�mica: 137.33 g/mol\n\n-->Ponto de Fus�o: 729�C\n\n-->Ponto de Ebuli��o: 1.500�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O b�rio � t�xico para os humanos e animais. A maior parte de seus compostos � venenoso.Os sais de b�rio s�o em sua maior parte insol�veis e t�xicos.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	
	else if (z==57){
		printf("\t\tO elemento procurado � o Lant�nio (La). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f1.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.74 angstrons.\n\n-->Primeira energia de ioniza��o: 159 kcal/mol\n\n-->Massa At�mica: 138.9 g/mol\n\n-->Ponto de Fus�o: 920�C\n\n-->Ponto de Ebuli��o: 3.460�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Compostos de lant�nio s�o usados em eletrodos de carbono para produzir luz na ind�stria cinematogr�fica (ilumina��o de est�dios e proje��o).  Pedras de isqueiros cont�m cerca de 25% de lant�nio.O �xido La2O3 aumenta a resist�ncia de vidros que s�o usados em dispositivos �ticos especiais. Em pequenas quantidades, � usado na produ��o de ferro fundido nodular. Atualmente s�o pesquisadas ligas com lant�nio que agem como esponjas de hidrog�nio, absorvendo at� 400 vezes o seu pr�prio volume de hidrog�nio gasoso e com reversibilidade do processo.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	
	else if (z==58){
		printf("\t\tO elemento procurado � o C�rio (Ce). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f2.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.70 angstrons.\n\n-->Primeira energia de ioniza��o: 133 kcal/mol\n\n-->Massa At�mica: 140.12 g/mol\n\n-->Ponto de Fus�o: 798�C\n\n-->Ponto de Ebuli��o: 3.468�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O c�rio � um dos lantan�deos mais abundantes que se conhece, por�m possui usos semelhantes ao dos demais lantan�deos, como: ligas met�licas com lant�nio, praseod�mio e neod�mio para fabrica��o do metal Misch; � combinado com ferro e magn�sio para fabrica��o de pedra de isqueiro e artefatos magn�ticos;Junto com o carbono � utilizado na fabrica��o de equipamentos de ilumina��o cinematogr�fica e seu �xido � utilizado como catalisador em escapamento de autom�veis e fornos autolimpantes.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if (z==59){
		printf("\t\tO elemento procurado � o Praseod�mio (Pr). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f3.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.67 angstrons.\n\n-->Primeira energia de ioniza��o: 133 kcal/mol\n\n-->Massa At�mica: 145 g/mol\n\n-->Ponto de Fus�o: 935�C\n\n-->Ponto de Ebuli��o: 3.127�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Pedras de isqueiros cont�m cerca de 5% de praseod�mio.O �xido Pr2O3 � um dos melhores refrat�rios conhecidos.Usado como material do n�cleo de eletrodos de carbono para ilumina��o de est�dios e proje��o.Sais de praseod�mio s�o usados para colorir vidros e esmaltes e, se misturados com certos materiais, d�o um amarelo forte aos vidros.Vidros com did�mio (uma subst�ncia extra�da de minerais de terras raras, de in�cio foi considerado elementar) s�o usados em �culos de prote��o.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==60){
		printf("\t\tO elemento procurado � o Neod�mio (Nd). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f4.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.64 angstrons.\n\n-->Primeira energia de ioniza��o: 145 kcal/mol\n\n-->Massa At�mica: 144.24 g/mol\n\n-->Ponto de Fus�o: 1.020�C\n\n-->Ponto de Ebuli��o: 3.030�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Usado para colorir vidros e fabrica��o de �culos de prote��o. O neod�mio confere delicadas cores aos vidros que variam desde o violeta puro, vinho at� ao cinza claro. Alguns tipos de vidro contendo neod�mio s�o usados para produzir rubis sint�ticos utilizados em lasers.  Sais de neod�mio s�o usados como corantes de esmaltes. \n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if (z==61){
		printf("\t\tO elemento procurado � o Prom�cio (Pm). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f5.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.62 angstrons.\n\n-->Primeira energia de ioniza��o: 133 kcal/mol\n\n-->Massa At�mica: 145 g/mol\n\n-->Ponto de Fus�o: 931�C\n\n-->Ponto de Ebuli��o: 2.730�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Fonte de radia��o beta para medidores de espessura.A radia��o beta produz luz ao incidir sobre o f�sforo. E uma bateria pode ser feita com fotoc�lulas para converter esta luz em eletricidade. Baterias deste tipo j� foram constru�das, com o is�topo 147Pm. Demonstraram uma vida �til de cerca de 5 anos.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==62){
		printf("\t\tO elemento procurado � o Sam�rio (Sm). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f6.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.59 angstrons.\n\n-->Primeira energia de ioniza��o: 129 kcal/mol\n\n-->Massa At�mica: 150.36 g/mol\n\n-->Ponto de Fus�o: 1.072�C\n\n-->Ponto de Ebuli��o: 1.900�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Semelhante a outros metais de terras raras, � usado em eletrodos de carbono para ilumina��o de est�dios e proje��o de filmes. Liga de sam�rio e cobalto � usada para produzir �m�s com resist�ncia � desmagnetiza��o maior do que qualquer outro material.Para dopar cristais de fluoreto de c�lcio usados em lasers.O �xido � usado na produ��o de vidros absorventes de infravermelho, como absorvedor de n�utrons em reatores nucleares e como catalisador na desidrata��o e desidrogena��o de �lcool et�lico.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==63){

		printf("\t\tO elemento procurado � o Eur�pio (Eu). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f7.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.56 angstrons.\n\n-->Primeira energia de ioniza��o: 131 kcal/mol\n\n-->Massa At�mica: 152 g/mol\n\n-->Ponto de Fus�o: 826�C\n\n-->Ponto de Ebuli��o: 1.490�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Amplamente usado na composi��o do f�sforo vermelho de cinesc�pios. Como elemento de dopagem de semicondutores para lasers.Alguns is�topos s�o bons absorvedores de n�utrons e podem ser empregados em reatores nucleares.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==64){

		printf("\t\tO elemento procurado � o Gadol�nio (Gd). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f8.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.54 angstrons.\n\n-->Primeira energia de ioniza��o: 142 kcal/mol\n\n-->Massa At�mica: 157.25 g/mol\n\n-->Ponto de Fus�o: 1.312�C\n\n-->Ponto de Ebuli��o: 3.000�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Compostos de gadol�nio s�o usados em f�sforos de cinesc�pios.Adicionados a ligas de ferro, cromo e outras, em propor��es pr�ximas de 1%, melhora a trabalhabilidade e a resist�ncia a altas temperaturas e � oxida��o.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==65){

		printf("\t\tO elemento procurado � o T�rbio (Td). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f9.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.51 angstrons.\n\n-->Primeira energia de ioniza��o: 155 kcal/mol\n\n-->Massa At�mica: 158.93 g/mol\n\n-->Ponto de Fus�o: 1.356�C\n\n-->Ponto de Ebuli��o: 2.800�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Usado, junto com o �xido de zirc�nio, como estabilizador em c�lulas de combust�vel de altas temperaturas. Borato de s�dio e t�rbio � usado em dispositivos semicondutores.\n");



 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==66){

		printf("\t\tO elemento procurado � o Dispr�sio (Dy). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f10.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.49 angstrons.\n\n-->Primeira energia de ioniza��o: 157 kcal/mol\n\n-->Massa At�mica: 162.50 g/mol\n\n-->Ponto de Fus�o: 1.407�C\n\n-->Ponto de Ebuli��o: 2.600�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um metal de transi��o interna pertencente a fam�lia dos lantan�deos, � branco prateado male�vel extremamente mole. O dispr�sio � um metal pouco reativo apresenta estabilidade quando em contato com o oxig�nio do ar em temperatura ambiente. Por�m � extremamente reativo quando aquecido, reagindo vigorosamente com o ar.\n");



 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	else if (z==67){
	
		printf("\t\tO elemento procurado � o H�lmio (Ho). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f11.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.47 angstrons.\n\n-->Primeira energia de ioniza��o: n�o especificada.\n\n-->Massa At�mica: 164.93 g/mol\n\n-->Ponto de Fus�o: 1.470�C\n\n-->Ponto de Ebuli��o: 2.720�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Encontrado em minerais como gadolinita (silicato de ber�lio, ferro e �trio), monazita (fosfato de c�rio, lant�nio, praseod�mio, neod�mio, com �xido de t�rio) e outros minerais de terras raras. A monazita cont�m cerca de 0,05% de h�lmio. Na pr�tica, n�o existem aplica��es importantes.\n");



 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==68){

		printf("\t\tO elemento procurado � o �rbio (Er). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f12.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.45 angstrons.\n\n-->Primeira energia de ioniza��o: n�o especificada.\n\n-->Massa At�mica: 167.26 g/mol\n\n-->Ponto de Fus�o: 1.522�C\n\n-->Ponto de Ebuli��o: 2.900�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um metal de transi��o interna pertencente a fam�lia dos lantan�deos, � branco prateado male�vel extremamente mole. O dispr�sio � um metal pouco reativo apresenta estabilidade quando em contato com o oxig�nio do ar em temperatura aTem uso em reatores nucleares e em metalurgia. Adicionado ao van�dio, reduz a dureza e melhora a trabalhabilidade.  O �xido de �rbio d� uma colora��o rosa a vidros e esmaltes.\n");




 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==69){

		printf("\t\tO elemento procurado � o T�lio (Tm). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f13.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.42 angstrons.\n\n-->Primeira energia de ioniza��o: 135 kcal/mol\n\n-->Massa At�mica: 168,9 g/mol\n\n-->Ponto de Fus�o: 1.545�C\n\n-->Ponto de Ebuli��o: 1.727�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O t�lio � um metal prateado, macio, male�vel e d�ctil. Pode ser cortado com um faca. S�o conhecidos 25 is�topos do elemento. Na sua forma pura, � est�vel.  A principal fonte � a monazita (fosfato de c�rio, lant�nio, praseod�mio, neod�mio, com �xido de t�rio), que cont�m cerca de 0,007% do elemento. J� foi considerado o menos abundante dos metais de terras raras mas posteriores descobertas o retiraram desta classifica��o.  S�o poucas as aplica��es pr�ticas.\n");




 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}

	else if (z==70){
	
		printf("\t\tO elemento procurado � o It�rbio (Yb). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 4f14.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.40 angstrons.\n\n-->Primeira energia de ioniza��o: 143 kcal/mol\n\n-->Massa At�mica: 173 g/mol\n\n-->Ponto de Fus�o: 820�C\n\n-->Ponto de Ebuli��o: 1.427�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O it�rbio � um metal prateado brilhante, macio, male�vel e d�ctil. Na sua forma pura, � relativamente est�vel, se afastado da umidade do ar. Usado apenas em experimentos metal�rgicos e qu�micos.\n");





 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==71){

		printf("\t\tO elemento procurado � o Lut�cio (Lu). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5d1.\n\n-->Localizado no sexto per�odo da tabela, coluna 3.\n\n-->Raio at�mico: 2.25 angstrons.\n\n-->Primeira energia de ioniza��o: 115 kcal/mol\n\n-->Massa At�mica: 173 g/mol\n\n-->Ponto de Fus�o: 1.675�C\n\n-->Ponto de Ebuli��o: 3.327�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O lut�cio � um metal prateado, macio e d�ctil. Na sua forma pura, � relativamente est�vel, se afastado da umidade do ar.Ocorre em quantidades muito pequenas em minerais contendo �trio. Na pr�tica, n�o existem aplica��es importantes.\n");





 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	else if (z==72){
	
		printf("\t\tO elemento procurado � o H�fnio (Hf). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5d2.\n\n-->Localizado no sexto per�odo da tabela, coluna 4.\n\n-->Raio at�mico: 2.16 angstrons.\n\n-->Primeira energia de ioniza��o: 160 kcal/mol\n\n-->Massa At�mica: 178,5 g/mol\n\n-->Ponto de Fus�o: 2.227�C\n\n-->Ponto de Ebuli��o: 5.400�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um metal d�ctil, brilhante, prateado e resistente a corros�o, quimicamente muito similar ao zirc�nio. O h�fnio � utilizado para fabricar barras de controle empregadas em reatores nucleares, como aquelas usadas em submarinos nucleares. Esta aplica��o � devido a fato de que a sec��o de captura de neutrons do h�fnio � umas 600 vezes maiores que a do zirc�nio, com o qual tem uma alta capacidade de absor��o de neutrons, al�m do mais tem propriedades mec�nicas muito boas, assim como uma alta resist�ncia a corros�o. Em meados de 2006 a Intel anunciou uma nova tecnologia que utiliza o h�fnio como componente b�sico para a constru��o das paredes diel�tricas dos transistores em sua nova gera��o de microprocessadores de 45 nanometros. H� necessidade de devidos cuidados ao trabalhar com o h�fnio pois quando se divide em part�culas � pirof�rico e pode arder espontaneamente em contato com o ar.\n");
printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==73){

		printf("\t\tO elemento procurado � o T�ntalo (Ta). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5d3.\n\n-->Localizado no sexto per�odo da tabela, coluna 5.\n\n-->Raio at�mico: 2.09 angstrons.\n\n-->Primeira energia de ioniza��o: 182 kcal/mol\n\n-->Massa At�mica: 181 g/mol\n\n-->Ponto de Fus�o: 2.996�C\n\n-->Ponto de Ebuli��o: 5.425�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O t�ntalo � um metal cinzento, pesado, ductil, muito duro, resistente a corros�o por �cidos e um bom condutor de calor e eletricidade.O principal uso do t�ntalo � como �xido , um material diel�trico, para a produ��o de componentes eletr�nicos, principalmente capacitores, que s�o muito pequenos em rela��o a sua capacidade. Por causa desta vantagem do tamanho e do peso os principais usos para os capacitores de t�ntalo incluem telefones, pagers, computadores pessoais, e eletr�nicos automotivos. O t�ntalo tamb�m � usado para produzir uma s�rie de ligas que possuem altos pontos de fus�o, alta resist�ncia e boa ductilidade.Por ser n�o-irritante e totalmente imune � a��o dos fluidos corporais, � usado extensivamente para produzir equipamentos e implantes cir�rgicos em medicina e odontologia.\n");

printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){

	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}

		else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==74){

		printf("\t\tO elemento procurado � o Tungst�nio (W). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5d4.\n\n-->Localizado no sexto per�odo da tabela, coluna 6.\n\n-->Raio at�mico: 2.02 angstrons.\n\n-->Primeira energia de ioniza��o: 184 kcal/mol\n\n-->Massa At�mica: 183.8 g/mol\n\n-->Ponto de Fus�o: 3.410�C\n\n-->Ponto de Ebuli��o: 5.927�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um metal muito utilizado em objetos que precisam ser sujeitos a altas temperaturas. Apresenta o maior ponto de fus�o (3422�C!) entre todos os metais e o segundo maior de toda a tabela peri�dica (o primeiro � o carbono).\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){

system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==75){

		printf("\t\tO elemento procurado � o R�nio (Re). \n\n-->Seu subn�vel mais energ�tico possui a configura��o 5d5.\n\n-->Localizado no sexto per�odo da tabela, coluna 7.\n\n-->Raio at�mico: 1.97 angstrons.\n\n-->Primeira energia de ioniza��o: 182 kcal/mol\n\n-->Massa At�mica: 186.21 g/mol\n\n-->Ponto de Fus�o: 3.180�C\n\n-->Ponto de Ebuli��o: 5.627�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O r�nio apresenta um dos maiores pontos de fus�o, excedido somente pelo tungst�nio e pelo carbono. � tamb�m um dos mais densos, excedido somente pela platina, ir�dio, e �smio. A escassez e elevado custo deste elemento limitam fortemente as suas aplica��es.\n");
printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI
}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==76){

		printf("\t\tO elemento procurado � o �smio (Os).\n\nSeu subn�vel mais energ�tico possui a configura��o 5d6.\n\n-->Localizado no sexto per�odo da tabela, coluna 8.\n\n-->Raio at�mico: 1.92 angstrons.\n\n-->Primeira energia de ioniza��o: 200 kcal/mol.\n\n-->Massa At�mica: 190.23 g/mol.\n\n-->Ponto de Fus�o: 3027�C.\n\n-->Ponto de Ebuli��o: 5400�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Na sua forma met�lica o �smio � muito denso, branco azulado, fr�gil, duro e brilhante, inclusive a altas temperaturas, mesmo sendo dif�cil encontra-lo nesta forma. � mais f�cil obter o �smio na forma de p�, mesmo que exposto ao ar tende a forma��o do tetr�xido de �smio, OsO4. O tetr�xido de �smio � t�xico (perigoso aos olhos), oxidante energ�tico e vol�til com um forte odor. Devido � extrema toxicidade do seu �xido, o �smio raramente � usado na forma pura, frequentemente � usado aliado com outros metais, tais como ir�dio e platina, em aplica��es nas quais � necess�ria uma grande dureza e durabilidade. As ligas de �smio s�o quase que inteiramente empregadas em penas de canetas do tipo tinteiro, agulhas de toca discos, agulhas de b�ssolas, eixos de diversos instrumentos e em contatos el�tricos. Uma liga de platina-�smio contendo 10% de �smio � usado em implantes cir�rgicos como marca passos e v�lvulas pulmonares artificiais.\n");
	printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");} 
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");

}}
else if (z==77){

		printf("\t\tO elemento procurado � o Ir�dio (Ir).\n\nSeu subn�vel mais energ�tico possui a configura��o 5d7.\n\n-->Localizado no sexto per�odo da tabela, coluna 9.\n\n-->Raio at�mico: 1.87 angstrons.\n\n-->Primeira energia de ioniza��o: 200 kcal/mol.\n\n-->Massa At�mica: 192.22 g/mol.\n\n-->Ponto de Fus�o: 2443�C.\n\n-->Ponto de Ebuli��o: 4527�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n N�o s� este elemento tem a maior densidade da tabela peri�dica, como tamb�m � o metal mais resistente � corros�o. Por causa disso, � muito usado em ligas de alta resist�ncia que precisam suportar altas temperaturas.\n");
printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");
}}
else if (z==78){

		printf("\t\tO elemento procurado � o Platina (Pt).\n\nSeu subn�vel mais energ�tico possui a configura��o 5d8.\n\n-->Localizado no sexto per�odo da tabela, coluna 10.\n\n-->Raio at�mico: 1.83 angstrons.\n\n-->Primeira energia de ioniza��o: 210 kcal/mol.\n\n-->Massa At�mica: 195.08 g/mol.\n\n-->Ponto de Fus�o: 1769�C.\n\n-->Ponto de Ebuli��o: 3827�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Empregado na fabrica��o de proj�teis, principalmente para engastes de armas com cano raiados; Fabrica��o de utens�lios cir�rgicos, como pregos, tubos para ensaios e outros; Em odontologia prot�tica para implantes e fixa��o de brocas; Usado nas pontas das velas de igni��o dos lan�a-chamas a explos�o e nas pontas dos para-raios; Utilizado para a produ��o de luvas que resistem a altas temperaturas; Implantes ortop�dicos em medicina, como o DIU (Dispositivo Intra Uterino);Fabrica��o de instrumentos musicais, odontol�gicos e eletromagn�ticos. Implanta��o nas vias respirat�rias de dependentes qu�micos, catalisador no escapamento de carros e produ��o de �cido sulf�rico.\n");
printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");}
}}
else if (z==79){

		printf("\t\tO elemento procurado � o Ouro (Au).\n\nSeu subn�vel mais energ�tico possui a configura��o 5d9.\n\n-->Localizado no sexto per�odo da tabela, coluna 11.\n\n-->Raio at�mico: 1.97 angstrons.\n\n-->Primeira energia de ioniza��o: 213 kcal/mol.\n\n-->Massa At�mica: 196.97 g/mol.\n\n-->Ponto de Fus�o: 1063�C.\n\n-->Ponto de Ebuli��o: 2966�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um �timo condutor de eletricidade e calor, por�m por inviabilidade econ�mica � praticamente inutilizado para esses fins. � o metal mais d�ctil e male�vel conhecido: cerca de 1 grama de ouro pode ser laminado em at� 1 metro quadrado. Por isso utilizam-se outros metais, como a prata e o cobre, para que sua tenacidade aumente e a liga seja mais resistente que o ouro puro. O ouro � amplamente utilizado na confec��o de j�ias (an�is, rel�gios, colares), medalhas, circuitos eletr�nicos, moedas e at� � submetido � modifica��o qu�mica para ser comest�vel (como visto em alguns doces e guloseimas refinadas). Al�m do s�mbolo de ostenta��o, o Ouro (a forma de is�topo Au 198) � utilizado no tratamento de c�nceres, nos processos de fotografia (como �cido cloro�urico) ou como revestimento de sat�lites por ser �timo refletor de radia��o infravermelha.\n");
printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==80){

		printf("\t\tO elemento procurado � o M�rcurio (Hg).\n\nSeu subn�vel mais energ�tico possui a configura��o 5d10.\n\n-->Localizado no sexto per�odo da tabela, coluna 12.\n\n-->Raio at�mico: 1.76 angstrons.\n\n-->Primeira energia de ioniza��o: 240 kcal/mol.\n\n-->Massa At�mica: 200.59 g/mol.\n\n-->Ponto de Fus�o: -39�C.\n\n-->Ponto de Ebuli��o: 357�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Este elemento � um metal l�quido prateado e inodoro, de alta densidade - t�o alta que � poss�vel fazer uma moeda boiar em sua superf�cie! O merc�rio � t�xico para os seres vivos e tem a capacidade de dissolver ouro, prata, metais alcalinos e at� chumbo.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");
}}
	
	else if (z==81){
		printf("\t\tO elemento procurado � o T�lio (Tl).\n\nSeu subn�vel mais energ�tico possui a configura��o 6p1.\n\n-->Localizado no sexto per�odo da tabela, coluna 13.\n\n-->Raio at�mico: 1.55 angstrons.\n\n-->Primeira energia de ioniza��o: 141 kcal/mol.\n\n-->Massa At�mica: 204.38 g/mol.\n\n-->Ponto de Fus�o: 303�C.\n\n-->Ponto de Ebuli��o: 1457�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Este metal � muito macio e male�vel .\n O inodoro e ins�pido sulfato de t�lio foi extensivamente usado no\n passado como veneno de ratos e formigas.\nNos Estados Unidos e outros pa�ses n�o � mais permitido devido a quest�es de seguran�a.\n Usado em equipamentos para a detec��o de radia��o gama. \nComo l�quido de alta densidade � usado como flutuador para a separa��o de minerais. \nA liga t�lio-chumbo � usado em alguns tipos de fus�veis. \nUsado no tratamento de infec��es de pele. \nEntretanto, este uso foi limitado devido a margem estreita que existe entre a sua toxicidade e o benef�cio terap�utico.\nO radioativo Tl-201, na forma de cloreto de t�lio, � usado em medicina nuclear \npara diagnosticar doen�as coron�rias e para a detec��o de tumores. \n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==82){

		printf("\t\tO elemento procurado � o Chumbo (Pb).\n\nSeu subn�vel mais energ�tico possui a configura��o 6p2.\n\n-->Localizado no sexto per�odo da tabela, coluna 14.\n\n-->Raio at�mico: 1.81 angstrons.\n\n-->Primeira energia de ioniza��o: 171 kcal/mol.\n\n-->Massa At�mica: 207.21 g/mol.\n\n-->Ponto de Fus�o: 327�C.\n\n-->Ponto de Ebuli��o: 1755�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um metal considerado semicondutor, j� que possui \nresist�ncia relativamente elevada e dificulta passagem de corrente el�trica. \nEm contrapartida, o �xido de chumbo � muito utilizado\nna fabrica��o de baterias de autom�veis. \nO Chumbo � extremamente t�xico ao organismo se exposto em doses elevadas.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}

}
	else if (z==83){
	
		printf("\t\tO elemento procurado � o Bismuto (Bi).\n\nSeu subn�vel mais energ�tico possui a configura��o 6p3.\n\n-->Localizado no sexto per�odo da tabela, coluna 15.\n\n-->Raio at�mico: 1.52 angstrons.\n\n-->Primeira energia de ioniza��o: 168 kcal/mol.\n\n-->Massa At�mica: 209 g/mol.\n\n-->Ponto de Fus�o: 271�C.\n\n-->Ponto de Ebuli��o: 1560�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n S�o usados como componentes de produtos m�dicos, terap�uticos e produtos cosm�ticos, mas tamb�m podem ser usados para dar brilho ao esmalte, na produ��o de ferros male�veis, im�s permanentes fortes formados da liga de bismuto, e em usinas nucleares como suporte para o combust�vel (U-235 U-233).\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==84){

		printf("\t\tO elemento procurado � o Pol�nio (Po).\n\nSeu subn�vel mais energ�tico possui a configura��o 6p4.\n\n-->Localizado no sexto per�odo da tabela, coluna 16.\n\n-->Raio at�mico: 1.64 angstrons.\n\n-->Primeira energia de ioniza��o: 194 kcal/mol.\n\n-->Massa At�mica: 209 g/mol.\n\n-->Ponto de Fus�o: 254�C.\n\n-->Ponto de Ebuli��o: 962�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Este elemento � radioativo, dissolvendo-se facilmente em �cidos dilu�dos, \npor�m s� � levemente sol�vel em �lcalis. \nO pol�nio quando misturado ou em liga com o ber�lio pode ser empregado\ncomo uma fonte de n�utrons. \nEste elemento tem sido usado em dispositivos que eliminam\ncargas est�ticas produzidas nas ind�strias de lamina��o de papel,\nlamina��o de pl�sticos e fia��o de fibras sint�ticas na ind�stria t�xtil, \nentre outras. As fontes de qualquer decaimento beta s�o geralmente \nmais usadas e menos perigosas.  \nO pol�nio � usado em escovas que removem a poeira acumulada em filmes fotogr�ficos. \nO pol�nio nestas escovas � selado, assim controlando e minimizando o perigo da radia��o. \nPequenas quantidades adicionadas as velas \n(eletrodos de igni��o de motores de combust�o interna) \nmelhoram o desempenho destes dispositivos. \nO pol�nio � proposto para ser usado como gerador termoel�trico \nem sat�lites artificiais e sondas espaciais. \nComo quase toda a radia��o alfa pode facilmente ser parada por recipientes \ncomuns e, ao colidir contra as superf�cies destes libera energia, \no pol�nio � pesquisado para ser usado como uma fonte de calor \npara a fabrica��o de pilhas termoel�tricas de pouco peso que seriam usadas em sat�lites artificiais. \nO pol�nio � usado no tabaco com ars�nico e naftalina, \nque � uma das principais causas de c�ncer para quem fuma.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==85){

		printf("\t\tO elemento procurado � o Astato (At).\n\nSeu subn�vel mais energ�tico possui a configura��o 6p5.\n\n-->Localizado no sexto per�odo da tabela, coluna 17.\n\n-->Raio at�mico: 1.45 angstrons.\n\n-->Primeira energia de ioniza��o: 222 kcal/mol.\n\n-->Massa At�mica: 210 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n Este elemento altamente radioativo comporta-se quimicamente como os demais halog�nios, especialmente como o iodo. O astato tem car�ter mais met�lico que o iodo. O astato tem maior import�ncia no campo te�rico do que no campo pr�tico. Atualmente, n�o � conhecida nenhuma aplica��o pr�tica deste elemento. Por ser altamente radioativo deve ser manuseado, nas investiga��es cient�ficas, em condi��es especiais. A quantidade de astato na natureza � t�o pequena que n�o oferece risco a sa�de humana. Entretanto, quando injetado em animais, por ser um halog�nio instala-se na gl�ndula tire�ide do mesmo modo que o iodo. H� indica��es que seja altamente cancer�geno.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
	else if (z==86){
	
		printf("\t\tO elemento procurado � o Rad�nio (Rn).\n\nSeu subn�vel mais energ�tico possui a configura��o 6p6.\n\n-->Localizado no sexto per�odo da tabela, coluna 18.\n\n-->Raio at�mico: 1.34 angstrons.\n\n-->Primeira energia de ioniza��o: 248 kcal/mol.\n\n-->Massa At�mica: 222 g/mol.\n\n-->Ponto de Fus�o: -71�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um elemento radioativo e gasoso, enquadrado dentro dos chamados gases nobres. Na forma gasosa � incolor, inodoro e ins�pido (na forma s�lida tem cor avermelhada). O rad�nio tem sido aplicado como fonte de radia��o em canceroterapia, oferecendo algumas vantagens sobre o r�dio. Utiliza-se tamb�m como indicador radioativo para a detec��o de fugas de gases e na medida da velocidade de escoamento de fluidos. Tamb�m � utilizado em sism�grafos e como fonte de n�utrons.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
else if (z==87){

		printf("\t\tO elemento procurado � o Fr�ncio (Fr).\n\nSeu subn�vel mais energ�tico possui a configura��o 7s1.\n\n-->Localizado no s�timo per�odo da tabela, coluna 1.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: 88 kcal/mol.\n\n-->Massa At�mica: 223 g/mol.\n\n-->Ponto de Fus�o: 27�C.\n\n-->Ponto de Ebuli��o: -62�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � intensamente radioativo e suas propriedades s�o similares aos demais metais alcalinos. Possui o maior raio dentre os elementos da tabela peri�dica. N�o h� aplica��es comerciais para o fr�ncio devido a sua vida muito curta, tamb�m n�o � poss�vel obter este elemento em quantidades comerciais significativas.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==88){

		printf("\t\tO elemento procurado � o R�dio (Ra).\n\nSeu subn�vel mais energ�tico possui a configura��o 7s2.\n\n-->Localizado no s�timo per�odo da tabela, coluna 2.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: 122 kcal/mol.\n\n-->Massa At�mica: 226 g/mol.\n\n-->Ponto de Fus�o: 700�C.\n\n-->Ponto de Ebuli��o: 680�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � o mais pesado dos metais alcalino-terrosos, � intensamente radioativo e assemelha-se quimicamente ao b�rio. � um emissor de part�culas alfa, part�culas beta e radia��o gama. O r�dio misturado com Ber�lio produz n�utrons. O r�dio � luminescente (produzindo uma colora��o azul fraca), Reage com a �gua para formar hidr�xido de r�dio, Ra(OH)2, e � um pouco mais vol�til que o b�rio. Foi usado como tinta luminescente em mostradores de rel�gios e instrumentos de medidas . Este uso foi interrompido na d�cada de 20 devido a morte de dezenas de usu�rios de rel�gios com esta tinta. Posteriormente, os efeitos adversos da radioatividade passaram a serem conhecidos e popularizados.\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	else if (z==89){
	
		printf("\t\tO elemento procurado � o Act�nio (Ac).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f1.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: 159 kcal/mol.\n\n-->Massa At�mica: 227 g/mol.\n\n-->Ponto de Fus�o: 1050�C.\n\n-->Ponto de Ebuli��o: 3300�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n � um elemento met�lico, radioativo de aspecto prateado. Devido a sua intensa radioatividade brilha na escurid�o com uma luz azulada. Sua radioatividade � da ordem de 150 vezes a do r�dio, tornando-se �til como fonte de n�utrons. Al�m disso, n�o tem aplica��es industriais significativas.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	
	else if (z==90){
	
		printf("\t\tO elemento procurado � o T�rio (Th).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f2.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: --- kcal/mol.\n\n-->Massa At�mica: 232 g/mol.\n\n-->Ponto de Fus�o: 1755�C.\n\n-->Ponto de Ebuli��o: 4500�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O t�rio � um metal natural, ligeiramente radioativo.  \nQuando aquecido no ar, o metal de t�rio inflama-se e queima produzindo uma luz branca \nbrilhante. O t�rio � usado para revestir fios de tungst�nio usados em equipamentos \neletr�nicos. O �xido de t�rio adicionado a vidro produz cristais com alto �ndice de refra��o e \nbaixa dispers�o. Portanto, encontram uso em lentes de alta qualidade em c�meras e \ninstrumentos cient�ficos. O �xido de t�rio tem sido usado como um catalisador na convers�o \nde am�nia em �cido n�trico, no craqueamento do petr�leo, na produ��o do �cido sulf�rico. \nComo material para produzir combust�vel nuclear. O t�rio � usado na produ��o de energia \nnuclear em algumas usinas.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==91){

		printf("\t\tO elemento procurado � o Protact�neo (Pa).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f3.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: --- kcal/mol.\n\n-->Massa At�mica: 231 g/mol.\n\n-->Ponto de Fus�o: 1600�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O protact�nio � um elemento met�lico prateado que pertence ao grupo dos actin�dios, com lustre met�lico brilhante que se conserva no ar por poucas horas. Torna-se um supercondutor em temperaturas abaixo de 1,4 Devido a sua escassez, alta radioatividade e toxicidade, n�o existe atualmente nenhum uso para o protact�nio fora do �mbito da pesquisa cient�fica b�sica. O protact�nio � t�xico e altamente radioativo, portanto, requer precau��es de manuseio semelhantes aquelas usadas com o plut�nio.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==92){

		printf("\t\tO elemento procurado � o Ur�nio (U).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f4.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: 140 kcal/mol.\n\n-->Massa At�mica: 238 g/mol.\n\n-->Ponto de Fus�o: 1132�C.\n\n-->Ponto de Ebuli��o: 3818�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n O ur�nio � o �ltimo elemento qu�mico natural da tabela \nperi�dica. � o �tomo com o n�cleo mais pesado que existe naturalmente na Terra: contem \n92 pr�tons e 135 a 148 n�utrons. Quando puro, � um s�lido, met�lico e radioativo, muito \nduro e denso, de aspecto cinza � branco prateado, muito semelhante a colora��o do n�quel. \nAntes do advento da energia nuclear, o ur�nio tinha um leque de aplica��es muito reduzido. \nEra utilizado em fotografia e nas ind�strias de cabedal (fabrica��o de pe�as de couro e sola) \ne de madeira. Os seus compostos usavam-se como corantes e mordentes (fixadores de cor) \npara a seda e a l�. No entanto, a aplica��o mais importante do ur�nio � a energ�tica. O \nur�nio produz envenenamento de baixa intensidade (inala��o, ou absor��o pela pele), \nproduzindo tamb�m efeitos colaterais, tais como: n�usea, dor de cabe�a, v�mito, diarreia e \nqueimaduras. Atinge o sistema linf�tico, sangue, ossos, rins e f�gado.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==93){

		printf("\t\tO elemento procurado � o Nept�nio (Np).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f5.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 237 g/mol.\n\n-->Ponto de Fus�o: 640�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nept�nio � um metal de aspecto prateado, \nrazoavelmente reativo.  Pode ser usado na composi��o de equipamentos para a detec��o de \nn�utrons. Arma nuclear: Em setembro, 2002, pesquisadores da Universidade da Calif�rnia \nconduziram programas de pesquisa para o desenvolvimento de armas de destrui��o maci�a \nutilizando o nept�nio. Criaram a primeira massa cr�tica nuclear usando o elemento, que se \nrevelou superior ao plut�nio ou ur�nio.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

	
	else if (z==94){
	
		printf("\t\tO elemento procurado � o Plut�nio (Pu).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f6.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: 134 kcal/mol.\n\n-->Massa At�mica: 244 g/mol.\n\n-->Ponto de Fus�o: 640�C.\n\n-->Ponto de Ebuli��o: 3327�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Usado em bombas nucleares. Um quilograma de plut�nio \ntem o poder equivalente a cerca de 20000 toneladas de explosivo qu�mico.  E em geradores \ntermoel�tricos de sondas espaciais e submarinos nucleares.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==95){

		printf("\t\tO elemento procurado � o Amer�cio (Am).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f7.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: 138 kcal/mol.\n\n-->Massa At�mica: 243 g/mol.\n\n-->Ponto de Fus�o: 994�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O amer�cio n�o existe na natureza. � um elemento \ntransur�nico sint�tico obtido a partir do plut�nio num reator nuclear. O amer�cio � usado \nem alguns detectores de fuma�a contendo min�sculas quantidades de Am-241 como fonte \nde radia��o ionizante, na forma de di�xido de amer�cio. O Am-241 tem sido usado, tamb�m, \ncomo uma fonte port�til de raios gama para uso em radiografia. O elemento foi empregado \ntamb�m para calibrar a espessura de vidros, permitindo a obten��o de vidros bastante \nplanos. O Am-242 � um emissor de n�utrons usado em radiografia de n�utrons. Entretanto, \neste is�topo � extremamente caro para ser produzido em quantidades us�veis.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==96){

		printf("\t\tO elemento procurado � o C�rio (Cm).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f8.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: --- kcal/mol.\n\n-->Massa At�mica: 247 g/mol.\n\n-->Ponto de Fus�o: 1067�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       H� poucas aplica��es comerciais para o c�rio. Pode ser �til \nem geradores termoel�tricos. O c�rio-242 e Cu-244 s�o utilizados como fontes de energia \nport�til, j� que pode gerar em torno de 2 watts de energia t�rmica por grama. � usado em \nmarca passos coron�rios artificiais, em instrumentos operando em locais remotos na Terra, \ne em miss�es espaciais. O c�rio � t�xico e radioativo, portanto, deve ser manuseado com \ncuidado. Acumula no tecido �sseo, destruindo a medula e, deste modo, impedindo a \nforma��o de gl�bulos vermelhos.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	else if (z==97){
		printf("\t\tO elemento procurado � o Berqu�lio (Bk).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f9.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: --- kcal/mol.\n\n-->Massa At�mica: 247 g/mol.\n\n-->Ponto de Fus�o: 986�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Quantidades macrosc�picas de berqu�lio-249 (vida-m�dia \nde 324 dias ) obtidas sinteticamente tornaram poss�vel determinar algumas das \npropriedades do elemento. Mesmo que, at� o presente momento n�o tenha sido isolado na \nforma elementar, � poss�vel prever que se trata de um elemento de aspecto prateado \nmet�lico, que oxida-se facilmente no ar em temperaturas elevadas, e ser� sol�vel em �cidos \nminerais dilu�dos. Como outros actin�dios, o berqu�lio se acumula no tecido �sseo, por isso, \ndeve ser manuseado com cuidado. Este elemento n�o tem nenhuma aplica��o conhecida \nfora da pesquisa b�sica, e n�o apresenta nenhum papel biol�gico.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
	else if (z==98){
	
		printf("\t\tO elemento procurado � o Calif�rnio (Cf).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f10.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: --- angstrons.\n\n-->Primeira energia de ioniza��o: --- kcal/mol.\n\n-->Massa At�mica: 251 g/mol.\n\n-->Ponto de Fus�o: 900�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O Calif�rnio tem alguns usos especiais devido a sua \ncondi��o de elemento radioativo, por�m � demasiadamente dif�cil obt�-lo para produzir \nalguma utiliza��o significativa. Tr�s de suas poucas aplica��es s�o: usado para encontrar \ncamadas de �gua e de �leo em po�os de petr�leo. como uma fonte port�til de n�utrons, \ntornando-se �til em processos de an�lise por ativa��o de n�utrons, podendo ser usado \ncomo fonte de radia��o em radiologia (medicina), na an�lise da superf�cie de outros \nplanetas atrav�s de sondas espaciais e, na descoberta e an�lise de ouro e prata para \nprospec��o em solo terrestre. como fonte de n�utrons em reatores nucleares.At� o \nmomento, o calif�rnio n�o foi isolado na sua forma met�lica. O �nico �on do calif�rnio que � \nest�vel em solu��o aquosa � o calif�rnio III. O calif�rnio n�o apresenta nenhum papel \nbiol�gico, e somente alguns compostos foram obtidos e estudados.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}

else if (z==99){

		printf("\t\tO elemento procurado � o Einst�nio (Es).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f11.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 252 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O einst�nio � um metal, s�lido, de aspecto prateado, \naltamente radioativo, produzido artificialmente. N�o h� aplica��es.\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}
}
	else if (z==100){
	
		printf("\t\tO elemento procurado � o F�rmio (Fm).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f12.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 257 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       Somente quantidades pequenas de f�rmio foram \nproduzidas ou isoladas. Devido a �nfima quantidade obtida pouco se conhece sobre suas \npropriedades qu�micas. N�o h� nenhum uso conhecido do f�rmio fora da pesquisa \nb�sica.\n");
 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==101){

		printf("\t\tO elemento procurado � o Mendel�vio (Md).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f13.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 258 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento � em homenagem ao qu�mico russo \ndimitri  Mendeleev que idealizou a tabela peri�dica e fez previs�es de elementos ainda n�o \ndescobertos. Foi descoberto por Ghiorso e colaboradores em 1955, em Berkley, Calif�rnia, \nUSA. Sua produ��o foi realizada por bombardeamento de Es-253 com �ons de h�lio em um \nciclotron de 60 polegadas. O is�topo Md-256 obtido apresentou meia vida de 76 minutos e o \nmais est�vel � o Md-258 com meia vida de 2 meses.  N�o h� aplica��es.\n\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==102){

		printf("\t\tO elemento procurado � o Nob�lio (No).\n\nSeu subn�vel mais energ�tico possui a configura��o 5f14.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 259 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento � em homenagem ao qu�mico e \ninventor sueco Alfred Nobel. Foi descoberto por Ghiorso e colaboradores em 1958, em \nBerkley, Calif�rnia, USA. Sua produ��o foi realizada por bombardeamento do elemento \nCurio com n�cleos de C-12 em um acelerador linear de �ons pesados (HILAC). O is�topo No-\n254 obtido apresentou meia vida de 55 segundos e o mais est�vel � o No-259 com meia vida \nde 58 minutos. Somente poucos �tomos foram obtidos nestes experimentos.\n\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==103){

		printf("\t\tO elemento procurado � o Lawr�ncio (Lr).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d1.\n\n-->Localizado no s�timo per�odo da tabela, coluna 3.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 262 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento � em homenagem ao f�sico at�mico \nErnest Lawrence, inventor do ciclotron. Foi descoberto por Ghiorso e colaboradores em \n1961, em Berkeley, Calif�rnia USA. Sua produ��o foi realizada por bombardeamento de 3 �g \nde Calif�rnio com �ons de Boro. Um is�topo de Lawr�ncio foi obtido com meia vida de 8s. \nEm Dubna, R�ssia. Em 1967 foi produzido o is�topo Lr-256 com meia vida de 35 segundos. \nSeu is�topo de meia vida mais longa � o Lr-262 com meia vida de 35 segundos. Somente \npoucos �tomos foram obtidos at� o presente.\n\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==104){

		printf("\t\tO elemento procurado � o Rutherf�rdio (Rf).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d2.\n\n-->Localizado no s�timo per�odo da tabela, coluna 4.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 261 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       n                O nome do elemento foi dado em honra ao \nf�sico neozeland�s Lord Ernest Rutherford. Foi descoberto por um grupo de cientistas do \nJoint Nuclear Research Institute de Dubna, pr�ximo a Moscou, R�ssia em 1964 e \nindependentemente por Ghiorso e colaboradores em Berkeley, Calif�rnia em 1969. Sua \nprodu��o foi realizada por bombardeamento do plut�nio com �ons de ne�nio. Poucos \n�tomos foram obtidos e o is�topo com meia vida mais longa � o Rf-261 com 1.1 \nminutos.\n\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==105){

		printf("\t\tO elemento procurado � o D�bnio (Db).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d3.\n\n-->Localizado no s�timo per�odo da tabela, coluna 5.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 262 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento foi dado em homenagem a cidade \nde Dubnia, R�ssia. Foi descoberto em 1967 no Joint Nuclear Research Institute de Dubnia, \nR�ssia. sua produ��o foi realizada por bombardeamento do Am-243 com �ons de ne�nio. \nPoucos �tomos foram obtidos at� o momento e dos sete is�topos conhecidos o de meia vida \nmais longa � o Db-262 com 34 segundos.\n\n");

 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==106){

		printf("\t\tO elemento procurado � o Seab�rgio (Sg).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d4.\n\n-->Localizado no s�timo per�odo da tabela, coluna 6.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 263 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento foi dado em homenagem a Glenn T. \nSeaborg, qu�mico nuclear americano. Foi descoberto por A. Ghiorso e alguns colaboradores \nem 1974, em Berkeley na Calif�rnia USA. Foi obtido pelo bombardeamento do Cf-249 com \n�ons de O-18 usando um acelerador Super HILAC. O elemento obtido apresentou 0,9 +/- 0,2 \nsegundos de meia vida. Dos 9 is�topos obtidos Sg-266 � o de meia vida mais longa com \n21s.\n\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==107){

		printf("\t\tO elemento procurado � o B�hrio (Bh).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d5.\n\n-->Localizado no s�timo per�odo da tabela, coluna 7.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 264 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento foi dado em homenagem a Niels \nBohr, f�sico dinamarqu�s. Foi descoberto por P. Ambruster, G. M�nzenberg e colaboradores \nem 1981, em Damstadt, Alemanha. O Bohrio pode ser obtido pelo bombardeamento do Pb-\n209 com �ons de Cr-54. Dos 10 is�topos conhecidos o que possui meia vida mais longa � o \nBh-264 com 0.44s.\n\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==108){

		printf("\t\tO elemento procurado � o H�ssio (Hs).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d6.\n\n-->Localizado no s�timo per�odo da tabela, coluna 8.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 265 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento deriva de Hesse, nome do estado \nalem�o onde foi descoberto. Foi sintetizado por P. Ambuster G. M�nzenberg e \ncolaboradores em 1984. Em Damstadt na Alemanha. O H�ssio pode ser obtido pelo \nbombardeamento do Bi-208 com �ons de Fe-58. Dos 8 is�topos conhecidos o que possui \nmeia vida mais longa � o Hs-277 com 11 minutos.\n\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==109){

		printf("\t\tO elemento procurado � o Meitn�rio (Mt).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d7.\n\n-->Localizado no s�timo per�odo da tabela, coluna 9.\n\n-->Raio at�mico: ***angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 268 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome do elemento foi dado em homenagem a Lise \nMaitneir, f�sica nascida na �ustria que primeiramente sugeriu a friss�o nuclear espont�nea. \nFoi descoberto por P. Ambruster, G. M�nzenberg e colaboradores em 1982, em Damstadt na \nAlemanha. O Meitnerio pode ser obtido pelo bombardeamento do Bi-209 com �ons de Fe-\n58. Dos 9 is�topos conhecidos o que possui meia vida mais longa � o Mt-276 com \n0,72s.\n\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==110){

		printf("\t\tO elemento procurado � o Darmstadtio (Ds).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d8.\n\n-->Localizado no s�timo per�odo da tabela, coluna 10.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 271 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       O nome foi dado em homenagem a cidade da Alemnha \nDarmstadt onde foi realizada a sua descoberta. Foi descoberto por Hofman e colaboradores \nem 1994. O Darmstadtio pode ser obtido pelo bombardeamento do Pb-208 com �ons de Ni-\n62. Dos is�topos conhecidos o que possui meia vida mais longa � o Ds-271 com 0.06s\n\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==111){

		printf("\t\tO elemento procurado � o Roentgenium (Rg).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d9.\n\n-->Localizado no s�timo per�odo da tabela, coluna 11.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 272 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � um elemento sint�tico, transur�nico, radioativo, cujo \n�nico is�topo conhecido apresenta meia-vida em torno de 15 milissegundos.\n\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
else if (z==112){

		printf("\t\tO elemento procurado � o Copernicium (Cn).\n\nSeu subn�vel mais energ�tico possui a configura��o 6d10.\n\n-->Localizado no s�timo per�odo da tabela, coluna 12.\n\n-->Raio at�mico: ---angstrons.\n\n-->Primeira energia de ioniza��o: ---kcal/mol.\n\n-->Massa At�mica: 285 g/mol.\n\n-->Ponto de Fus�o: ---�C.\n\n-->Ponto de Ebuli��o: ---�C.\n\n");
printf("Deseja ver curiosidades sobre o elemento? Digite 1 para sim e 2 para n�o.");
    scanf("%d",&cur);
    	if(cur==1){
    system("cls");
    printf("**Curiosidades**:\n\n       � um elemento superpesado, radioativo, e seus is�topos \nse deterioram atrav�s da emiss�o alfa com meia-vida de somente alguns \nmilissegundos.\n\n");


 printf("\n\n");
    printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2){
system("cls");
	printf("Obrigada por usar o programa! At� mais.");}//FIGURA BONITINHA AQUI}
else if(cur==2){
system("cls");	
    fflush(stdin);	
printf("Deseja realizar uma nova busca? Digite 1 para sim e 2 para n�o\n");
scanf("%d",&l);
if(l==1){
system("cls");
goto inicio;}
else if(l==2)
	system("cls");
	printf("Obrigada por usar o programa! At� mais.");//FIGURA BONITINHA AQUI
}}
system("pause");
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

