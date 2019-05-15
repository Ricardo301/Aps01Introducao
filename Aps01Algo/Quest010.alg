algoritmo "Quest010"

var
num,total,maior,menor,soma:inteiro
controle:logico

//Procedimentos
procedimento ProceMaior
inicio
se total = 1 entao
   maior <-num
senao
   se num > maior entao
      maior <-num
   fimse
fimse
fimprocedimento



procedimento ProceMenor
inicio
se total = 1 entao
   menor <-num
senao
   se num < menor entao
      menor <-num
   fimse
fimse
fimprocedimento
//Funcoes
funcao FunSoma():inteiro
   inicio
      retorne soma+num
fimfuncao

funcao Media():real
     retorne soma/total

fimfuncao


inicio   //Inicio Programa Principal

controle<-verdadeiro
enquanto (controle) faca
   escreva("Num: ")
   leia(num)

   se num >= 0 entao
      total <- total +1
      ProceMaior
      ProceMenor
      soma <- FunSoma()


   senao
      controle <- (nao controle)
   fimse



fimenquanto
Escreval("=========================================================")
Escreval("Maior: ",maior)
Escreval("Menor: ",menor)
Escreval("Soma: ",soma)
Escreval("Total: ",total)
Escreval("Media: ",Media)


fimalgoritmo
