#include <iostream>
#include <iomanip> 
#include <cmath>
#include <cstdlib>
using namespace std;

int Primeiro (int quantidade,int Resultado)
{
//Nessa parte são declarada as perguntas e as posiçoes respostas.
       string Pergunta[11],Resposta[11],Reset; 
       Pergunta[0]= "\n01° Por quanto tempo você pretende deixar seu dinheiro investido?\n"
        "\n A: Menos de 6 meses\n"
        "\n B: Entre 6 meses e 1 ano\n"
        "\n C: Entre 1 ano e 3 anos\n"
        "\n D: Acima de 3 anos\n"; 
       Pergunta[1]= "\n02° Qual o objetivo desse investimento?\n" 
         "\n A: Preservação do capital para não perder valor ao longo do tempo, assumindo baixos riscos de perdas\n"
         "\n B: Aumento gradual do capital ao longo do tempo, assumindo riscos moderados\n"
         "\n C: Aumento do capital acima da taxa de retorno média do mercado, mesmo que isso implique assumir riscos de perdas elevada\n"
         "\n D: Obter no curto prazo retornos elevados e significativamente acima da taxa de retorno média do mercado, assumindo riscos elevados\n";
       Pergunta[2]= "\n03° Qual das alternativas melhor classifica sua formação e experiência com o mercado financeiro?\n"
         "\n A: Não possuo formação acadêmica ou conhecimento do mercado financeiro\n"
         "\n B: Possuo formação acadêmica na área financeira, mas não tenho experiência com o mercado financeiro\n"
         "\n C: Possuo formação acadêmica em outra área, mas possuo conhecimento do mercado financeiro\n"
         "\n D: Possuo formação acadêmica na área financeira ou pleno conhecimento do mercado financeiro\n";
       Pergunta[3]= "\n04° Considerando seus rendimentos regulares, qual a porcentagem você pretende reservar para aplicações financeiras?\n" 
         "\n A: No máximo 25%\n"
         "\n B: Entre 25,01 e 50%\n"
         "\n C: Acima de 50%\n";
       Pergunta[4]= "\n05° Caso as suas aplicações sofressem uma queda superior a 30%, o que você faria?\n"
         "\n A: Resgataria toda a aplicação e aplicaria na poupança\n"
         "\n B: Manteria aplicação aguardando uma melhora do mercado\n"
         "\n C: Aumentaria a aplicação para aproveitar as oportunidades do mercado\n";
       Pergunta[5]= "\n06° Como está distribuído o seu patrimônio?\n"
         "\n A: Meu patrimônio não está aplicado ou está todo aplicado em renda FIxa e/ou imóveis\n"
         "\n B: Menos de 25% em renda variável e o restante em renda fixa e/ou imóveis\n"
         "\n C: Entre 25,01 e 50% aplicado em renda variável e o restante em renda fixa e/ou imóveis\n"
         "\n D: Acima de 50% em renda variável\n";
       Pergunta[6]= "\n07° Em relação as aplicações e rendimentos, em qual dessas situações você se enquadra?\n" 
         "\n A: Conto com o rendimento dessas aplicações para complementar minha renda mensal\n"
         "\n B: Conto com o rendimento dessas aplicações para complementar minha renda mensal\n"
         "\n C: Não tenho intenção de resgatar no curto prazo, mas não pretendo realizar novas aplicações\n"
         "\n D: Não tenho intenção de resgatar no curto prazo e ainda pretendo fazer aplicações regulares\n";
       Pergunta[7]= "\n08° Indique em quais aplicações listadas abaixo você já investiu e qual a frequência nos últimos dois anos. Pode assinalar mais do que uma alternativa. Obs: Efetue a somatória dos pontos referente a questão e escolha a alternativa equivalente:\n"
        // Tabela #1.
          "\n ||  Tipos de Aplicações || \n"
          "\n[1°] |Nunca investi = 0|  |1 a 2 vezes = 1|  |3 ou +vezes = 1|\n"
          "\n[2°] |Nunca investi = 0|  |1 a 2 vezes = 2|  |3 ou +vezes = 3|\n"
          "\n[3°] |Nunca investi = 0|  |1 a 2 vezes = 5|  |3 ou +vezes = 6|\n"
        // Tabela #2.
          "\n [1°] \n Fundos Renda Fixa Simples ou Indexados \n Fundos Renda Fixa Duração Baixa, Média ou Livre,Renda Fixa Títulos Públicos \n Renda Fixa (CDB, LCI, LCA, LF Sênior) indexada ao CDI \n Fundos Multimercados Balanceados, Dinâmicos ou de Capital Protegido Títulos Não Financeiros (Debêntures, CRI, CRA, CDCA, CCB, CPR) indexado ao CDI – Emissor com Grau de Investimento \n LF Subordinada – Emissor com Grau de Investimento \n BTC – Posições doadoras em Empréstimos de Ações\n" 
          "\n [2°] \n FIDC \n Títulos Não Financeiros (Debêntures, CRI, CRA, CDCA, CCB, CPR)indexado ao CDI – Emissor sem Grau de Investimento\n"  
          "\n [3°] \n Fundos Renda Fixa Duração Média ou Livre – Crédito Livre \n Fundos Renda Fixa Duração Alta \n Fundos Ações \n Fundos com Alavancagem \n Fundos Multimercados \n Fundos Imobiliários \n FIP \n FIDC – Outros Indexadores ex CDI – Emissão sem Grau de Investimento – Prazo acima de 3 anos \n Fundo Cambial \n Ações (Mercado à vista, BDR, ETF) \n LF Subordinada – Emissor sem Grau de Investimento \n BTC – Posições tomadoras em Empréstimos de Ações \n Derivativos Listados em Bolsa (Futuros, Opções e Termos)\n"

        "\n A: Entre 0 e 1 ponto\n"
        "\n B: Entre 2 e 4 pontos\n"
        "\n C: Acima de 5 pontos\n";
       Pergunta[8]= "\n09° Tomando por base as respostas da questão anterior, informar o volume aproximado que foi destinado a cada operação no período. Obs: Efetue a somatória dos pontos referente a questão e escolha a alternativa equivalente:\n" 
        // Tabela #3.
         "\n ||  Tipos de Aplicações || \n"
         "\n[1°] |Nunca investi = 0|  |Menos de R$ 10mil = 1|  |Entre R$ 10.001 a R$ 50.000 = 1|  |Entre R$ 50.001 a R$ 100.000 = 1|  |Acima de R$ 100.001 = 1|\n"
         "\n[2°] |Nunca investi = 0|  |Menos de R$ 10mil = 2|  |Entre R$ 10.001 a R$ 50.000 = 3|  |Entre R$ 50.001 a R$ 100.000 = 4|  |Acima de R$ 100.001 = 5|\n"
         "\n[3°] |Nunca investi = 0|  |Menos de R$ 10mil = 7|  |Entre R$ 10.001 a R$ 50.000 = 8|  |Entre R$ 50.001 a R$ 100.000 = 9|  |Acima de R$ 100.001 = 10|\n" 
        // Tabela #4.
         "\n [1°] \n Fundos Renda Fixa Simples ou Indexados \n Fundos Renda Fixa Duração Baixa, Média ou Livre,Renda Fixa Títulos Públicos \n Renda Fixa (CDB, LCI, LCA, LF Sênior) indexada ao CDI \n Fundos Multimercados Balanceados, Dinâmicos ou de Capital Protegido Títulos Não Financeiros (Debêntures, CRI, CRA, CDCA, CCB, CPR) indexado ao CDI – Emissor com Grau de Investimento \n LF Subordinada – Emissor com Grau de Investimento \n BTC – Posições doadoras em Empréstimos de Ações\n" 
         "\n [2°] \n FIDC \n Títulos Não Financeiros (Debêntures, CRI, CRA, CDCA, CCB, CPR)indexado ao CDI – Emissor sem Grau de Investimento\n"  
         "\n [3°] \n Fundos Renda Fixa Duração Média ou Livre – Crédito Livre \n Fundos Renda Fixa Duração Alta \n Fundos Ações \n Fundos com Alavancagem \n Fundos Multimercados \n Fundos Imobiliários \n FIP \n FIDC – Outros Indexadores ex CDI – Emissão sem Grau de Investimento – Prazo acima de 3 anos \n Fundo Cambial \n Ações (Mercado à vista, BDR, ETF) \n LF Subordinada – Emissor sem Grau de Investimento \n BTC – Posições tomadoras em Empréstimos de Ações \n Derivativos Listados em Bolsa (Futuros, Opções e Termos)\n"

        "\nA: 1 ponto\n"
        "\nB: Entre 2 e 6 pontos\n"
        "\nC: Acima de 7 pontos\n";
       Pergunta[9]= "\n10° Qual sua faixa de renda mensal média?\n"
         "\n A: Até R$ 1.000\n"
         "\n B: De R$ 1.001 até R$ 5.000\n"
         "\n C: De R$ 5.001 até R$ 10.000\n"
         "\n D: Acima de R$ 10.000\n";
       Pergunta[10]= "\n11° Qual o valor aproximado do seu patrimônio?\n"
         "\n A: Até R$ 10.000\n"
         "\n B: De R$ 10.001 até R$ 100.000\n"
         "\n C: De R$ 100.001 até R$ 500.000\n"
         "\n D: De R$ 500.001 até R$ 1.000.000\n"
         "\n E: Acima de R$ 1.000.001\n";
//Apresentação das perguntas e respostas.     
      cout << Pergunta[quantidade] << endl;
      cout << "" << endl;
      cin >> Resposta[quantidade];
//Avalição do Resultado.
            if (Resposta[quantidade]=="a")
            Resultado+=0;
            if (Resposta[quantidade]=="b")
            Resultado+=2;
            if (Resposta[quantidade]=="c")
            Resultado+=3;
            if (Resposta[quantidade]=="d")
            Resultado+=4;
            if (Resposta[quantidade]=="e")
            Resultado+=5;
            cout << "" << endl;
//Resultado.
      if (quantidade==10){
      if (Resultado<=14){
      cout << "Conservador" << endl;} 
      if (Resultado>14&&Resultado<36)
      cout << "Moderado" << endl; 
      if(Resultado>36)
      cout << "Arrojado" << endl; 
      cout << ".........." << endl;
//Returno a função "int main".
return 1;}
return Primeiro(quantidade+1,Resultado);
}

int Segundo ()
{
return 1;
return Segundo();
}

int Terceiro ()
{
return 1;
return Terceiro();
}

int Quarto(float capital, float taxa, int periodo, float montante, float f[], int g)
{
int opçao;

if (g==0)
{
  cout << "Texto de apresentação\n";
   cout << "\n";

  cout << "Capital aplicado ";
     cin >> capital;
  cout << "Taxa de remuneração ";
     cin >> taxa;
  cout << "Periodo de variação do montante (em meses)" ;
     cin >> periodo;
}else{
cout << "Deseja realizar outra função ?\n";
cout << 
        "Alterar valor do 'Capital'. [1]\n"
        "Modificar 'Taxa'. [2]\n"
        "Trocar 'Periodo'. [3]\n"
        "Substituir 'Montante'. \n[4]"
        "Encerrar função. [6]";
        cin >> opçao;
switch (opçao)
 {
 case 1:
  {cout << "" << endl;
  cin >> capital;
  break;}

 case 2:
  {cout << "" << endl;
  cin >> taxa;
  break;}

 case 3:
  {cout << "" << endl;
  cin >> periodo;
  break;} 

 case 4:
  {cout << "" << endl;
  cin >> montante;
  break;}
 case 5:
  {cout << "" << endl;
  cout << f[g] << endl;
  break;}
 default:
  {cout << "" << endl;
  return 1;}
 }
}
montante = capital*pow(taxa,periodo);
f[g]=montante;
cout << " Montante: "<< fixed << setprecision(2) << montante << endl; 
return Quarto(capital,taxa,periodo,montante,f,g+1);
}


int main()
{
float Y,C,D,E,G,T,F[5];
int Tamanho,Opção, Funçao;
// Essa string tem como função apresentar as carateristicas do menu.
   string Informativo[10],Nome; 
   Informativo[0]= "#"; 
   Informativo[1]="MENU"; 
   Informativo[2]= "ID DO TIPO DE INVESTIDOR [1]"; 
   Informativo[3]= "RECOMENDAÇÃO DE PRORTFÓLIO E INDICAÇÃO DE ALOC [2]";
   Informativo[4]= "PREVISÃO DE LUCRO [3]"; 
   Informativo[5]= "CALCULO COM JUROS COMPOSTOS [4]";
// Os lanços a seguir sevem para imprimir o menu para o usuario.
 for (Tamanho=0;Tamanho<40;Tamanho++)
  { cout << Informativo[0];
      if (Tamanho==20)
       cout << " PROJETO GUIA DE INVESTIMENTO MATA045 ";} 
 for (Tamanho=0;Tamanho<6;Tamanho++)
  cout << Informativo[Tamanho] << endl;
// A seguir, o usuario vai indicar qual função deseja realizar, apatir de uma das strings.
  cout << "" << endl;
  cin >> Opção;
  cin.ignore();
switch (Opção)
 {
 case 1:
  {cout << "" << endl;
  Primeiro(Y=0,D=0);
  break;}

 case 2:
  {cout << "" << endl;
  Segundo();
  break;}

 case 3:
  {cout << "" << endl;
  Terceiro();
  break;} 

 case 4:
  {cout << "" << endl;
  Quarto(Y,C,D,E,F,G=0);
  break;}

 default:
  {
  cout << "Função Invalida, Tente Novamente\n"; 
  cout << "\n"; 
  return main ();}
 }
// Repeti o programa ou encerra.
 cout << "\n";
 cout << "execultar outra função, SIM [1] ou NÃO [2] ?" << endl;
 cin >> Funçao;
 cout << "\n";
 if (Funçao==1)
  return main ();
  else 
  return 0;
}
