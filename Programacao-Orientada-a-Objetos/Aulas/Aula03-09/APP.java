package  app;

public class APP {
    public static void main (String[] args){

        Jogador jogador1 = new Jogador();
        Jogador jogador2 = new Jogador();

        jogador1.nome = "Tanjirou";
        System.out.println(jogador1.nome);
        jogador1.destreza = 10;
        System.out.println(jogador1.destreza);

        jogador2.nome = "Zoro";

        ArrayList<Jogador> timeA = new ArrayList<>();
        timeA.add(jogador1);
        timeA.add(new Jogador());


    }
}