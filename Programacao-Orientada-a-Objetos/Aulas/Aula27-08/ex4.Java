package strings;

public class scratch {
    public static void main(String[] args) {
        String texto1 = "ola,";
        String texto2 = texto1 + " turma!";

        System.out.println(texto2);
        System.out.println(texto2.toUpperCase());

        String linha = "  ana;bv30045Z;16;informatica;ND   ";
        String proc1 = linha.trim(); //tira todos os espaços do começo e do final
        String proc2 = linha.stripLeading(); //tira os espaços do começo
        String proc3 = linha.stripTrailing(); //tira os espaços do final

        System.out.println(linha);
        System.out.println(proc1);
        System.out.println(proc2);
        System.out.println(proc3);

        String proc4 = linha.replace("ND", "0");

        System.out.println(proc4);

        String [] campos = proc4.split(";");
        for (String campo : campos){
            System.out.println(campo);
        }

        String bordao = "tudo bem?";
        System.out.println(bordao.startsWith("tudo"));
        System.out.println(bordao.endsWith("bem?"));
    }
}