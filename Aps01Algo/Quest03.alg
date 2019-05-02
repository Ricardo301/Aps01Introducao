algoritmo "Quest03"
//Ricardo de Jesus Santos
//30/04/19
var

nome,msg:caractere
AV1, AV2, AV3, media,maior,maior2: real

inicio

escreva("Nome: ")
leia(nome)
escreva("AV1: ")
leia(AV1)
escreva("AV2: ")
leia(AV2)
escreva("AV3: ")
leia(AV3)


se ((AV1<= AV2 ) e(AV1<=AV3)) entao
   maior<-AV2
   maior2<-AV3
   media <- (AV2+AV3)/2
senao
   se((AV2 <= AV1) e (AV2 <= AV3)) entao
      maior<-AV1
      maior2<-AV3
      media <- (AV1 + AV3)/2
   senao
      maior<-AV1
      maior2<-AV2
      media <- (AV1+ AV2)/2
   fimse
fimse

se (media>=7) entao
   msg<- "Aprovado"
senao
   msg<-"Reprovado"
fimse
escreval("=====================================================================================")
escreval("Aluno: ",nome)
escreval("AS duas maiores notas são: ",maior," / ",maior2)
escreval("Media: ",media)
escreval("Situação: ",msg)




fimalgoritmo
