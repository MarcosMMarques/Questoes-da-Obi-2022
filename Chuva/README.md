# Solution
* [C](https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Chuva/Chuva(C%20Solution).c)
* [Go](https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Chuva/Chuva(Go%20Solution).go)
# Enunciado da Questão
  Eventos climáticos extremos como chuvas descomunais estão cada vez mais frequentes e intensos em todo o mundo.
  O Centro Nacional de Monitoramento da Nlogônia tem medidores de quantidade de chuva dia-a-dia espalhados por todo o reino. Cada medição é um número inteiro, indicando a quantidade de chuva, em milímetros, que caiu na Nlogônia num determinado dia. Como o sistema existe há vários anos, a lista de medições é muito grande.
Preocupado com o assunto, o rei da Nlogônia mandou que o Ministro da Ciência crie um programa de computador para calcular quantos intervalos de dias existem na lista de medições tal que a soma das medições nesse intervalo é igual a um certo valor.
  Mais precisamente, considere uma lista com N medições, indicando a quantidade de chuva do dia 1 ao dia N. Considere ainda todos os possíveis intervalos de dias entre 1 e N, cada intervalo definido pelo dia inicial e dia final do intervalo. O rei deseja saber quantos intervalos têm a soma das
medições exatamente igual a um certo valor S.
  O Ministro da Ciência é um físico brilhante, mas não sabe resolver essa tarefa. Você poderia ajudá-lo?

## Entrada
A primeira linha contém um inteiro N, o número de medições na lista. A segunda linha contém um inteiro S, o valor da soma desejada. A terceira linha contém N inteiros Xi, os valores das medições.

## Saída
Seu programa deve produzir uma única linha, contendo um único inteiro, que deve ser o número de intervalos que têm a soma das medições igual a S.

## Restrições
* 1 ≤ N ≤ 100 000
* 0 ≤ S ≤ 1 000 000
* 0 ≤ Xi ≤ 10, para 1 ≤ i ≤ N

<div align="center">
  <img src="https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Chuva/Example_1.png" height="100"></br>
  <img src="https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Chuva/Example_1.1.png" height="45"></br>
  <img src="https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Chuva/Example_2.png" height="128"></br>
  <img src="https://github.com/MarcosMMarques/Questoes-da-Obi-2022/blob/main/Chuva/Example_3.png" height="128">   
</div>
