public class Estatistica {
    public static double media (double[] valores) {
        double soma = 0;
        for (double v : valores) {
            soma += v;
        }
        return soma / valores.length;
    }
    public static double variancia (double [] valores) {
        double media = media(valores);
        double soma = 0;
        for (double v : valores){
            soma += Math.pow (v - media, 2);
        }
        return soma / valores.length;
    }
    public static double desvioPadrao (double [] valores) {
        return Math.sqrt(variancia(valores));
    }
    public static  void main( String[] args) {
        double[] valores = {10, 20, 30, 40, 50};
        System.out.println("Média: " + media(valores));
        System.out.println("Variância: " + variancia(valores));
        System.out.println("Desvio Padrão: " + desvioPadrao(valores));
    }
}