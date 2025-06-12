# Pecas-de-Xadrez

# Explicação do Código 
Este programa em C simula os movimentos de quatro peças de xadrez: Torre, Bispo, Rainha e Cavalo, utilizando técnicas avançadas de programação, como funções recursivas e loops aninhados. O objetivo é aplicar estruturas de repetição e recursividade para representar, de forma didática, o comportamento dessas peças no tabuleiro.

# Estrutura Geral
O programa define uma função principal main() e várias funções auxiliares, cada uma responsável por simular os movimentos de uma peça. Os movimentos são apenas simulados por meio de mensagens no console, não há um tabuleiro real implementado.

Torre (Recursividade)
A função moverTorre é recursiva e simula a Torre movendo-se 5 casas para a direita.
A cada chamada da função, é impresso um passo do movimento.
A função para quando o número de casas restantes chegar a zero.


Bispo (Recursividade e Loops Aninhados)
O Bispo é simulado de duas maneiras:
Com recursividade (moverBispoRecursivo), para mover-se em diagonal (Cima Direita).
Com loops aninhados (moverBispoComLoops), onde o loop externo simula o movimento vertical e o interno o horizontal.
Essa abordagem reforça o uso de diferentes estruturas de repetição.

Rainha (Recursividade)
A função moverRainha simula a Rainha movendo-se 8 casas para a esquerda, utilizando recursividade.
Assim como a Torre, a função imprime cada passo e se chama recursivamente até terminar.

Cavalo (Loops Aninhados com Controle de Fluxo)
O Cavalo é simulado com loops aninhados, representando seu movimento em “L” (duas casas para cima e uma para a direita).
O uso de break e continue pode ser expandido para refinar o controle, mas aqui o movimento é representado com contadores simples para fins didáticos.

# Conclusão
Este programa não simula um jogo real de xadrez, mas serve como ferramenta educacional para demonstrar:
Como funções recursivas podem substituir laços de repetição simples;
Como utilizar loops aninhados para representar movimentos combinados;
Como aplicar controle de fluxo (como break) para alterar o comportamento de laços.
Além de reforçar os conceitos fundamentais da linguagem C, o exercício desenvolve o raciocínio lógico e prepara o estudante para desafios mais complexos em lógica de programação.
