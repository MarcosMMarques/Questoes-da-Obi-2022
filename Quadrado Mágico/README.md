# Solution
* [C](https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Quadrado%20M%C3%A1gico/Quadrado%20M%C3%A1gico(C%20solution).c)
* [Go](https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Quadrado%20M%C3%A1gico/Quadrado%20M%C3%A1gico(Go%20Solution).go)
# Enunciado da Questão
  Em um Quadrado Mágico, a soma de qualquer coluna, linha ou diagonal tem sempre o mesmo valor, e nenhum número aparece mais do que uma vez.
  <div align="center">
  <img src="https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Quadrado%20M%C3%A1gico/Example_1.png" height="100"></br>
  </div>
  A dimensão de um quadrado mágico é o número de colunas (ou de linhas, já que o número de colunas é igual ao número de linhas).
  Rita encontrou um caderno antigo de sua avó, repleto de quadrados mágicos de todas as dimensões. Infelizmente alguns dos números estão ilegíveis. Você pode ajudá-la?
  Dado um quadrado mágico com exatamente um número ilegível, determine o valor e a posição desse número.
## Entrada
  A primeira linha da entrada contém um número inteiro N, a dimensão do quadrado mágico. Cada uma das N linhas seguintes contém N inteiros Xi. Exatamente um dos números do quadrado da entrada é igual a zero, indicando o número ilegível.
## Saída
  Seu programa deve produzir três linhas, cada uma contendo um único número inteiro. A primeira linha deve conter o valor do número ilegível. A segunda linha deve conter a linha do número ilegível no quadrado (as linhas do quadrado variam de 1 a N). A terceira linha deve conter a coluna do número ilegível no quadrado (as colunas do quadrado variam de 1 a N).

## Restrições
* 3 ≤ N ≤ 10
* 0 ≤ Xi ≤ 100, para 1 ≤ i ≤ N

<div align="center">
  <img src="https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Quadrado%20M%C3%A1gico/Example_2.png" height="100"></br>
  <img src="https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Quadrado%20M%C3%A1gico/Example_3.png" height="175">   
</div>

