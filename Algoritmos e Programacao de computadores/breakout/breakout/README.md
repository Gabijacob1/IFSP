# README

## Coisas a mais no projeto do Breakout

### 1.	Controle da direção da bola pelo jogador
- Bate na esquerda do jogador e a bola vai para a esquerda. 
- Bate no centro do jogador e a bola sobe. 
- Bate na direita do jogador e a bola vai para a direita.

### 2.  Telas personalizadas 
- Tela inicial com título colorido, instruções de como jogar e iniciar o jogo.
- Tela de perda de vida com aviso e instruções de como continuar a partida.
- Tela de Game Over com a pontuação final e instruções para reiniciar o jogo.

### 3.  Dificuldade Aumentando
Depois de passar de 1000 pontos, a cada 300 pontos algumas coisas acontecem:
- Jogador diminui de tamanho, 15 pixels por nível (limitado a no mínimo 75 pixels);
- A velocidade do jogador aumenta;
- A velocidade da bolinha aumenta.

### 4.  Alvo Especial com Bolinha Extra
- A cada partida, um alvo é sorteado aleatoriamente entre todos os alvos para ser o "alvo especial".
- Ao destruir esse alvo, uma bolinha extra (de cor amarela) é liberada na tela, aumentando a chance de quebrar mais alvos ao mesmo tempo.
- A bolinha extra colide normalmente com a tela, o jogador e os alvos, mas se ela sair pela parte de baixo da tela, ela é apenas desativada 
  (o jogador não perde vida por isso, já que é só um bônus).
- É possível ter até 3 bolinhas extras ativas simultaneamente.