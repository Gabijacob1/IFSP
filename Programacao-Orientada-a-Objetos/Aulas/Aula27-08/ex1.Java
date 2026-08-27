package arraylist;

public class ex1 {
public static void main (String[] args){
    ArrayList<Integer> valores = new ArrayList <>();
    valores.add(10);
    valores.add(20);
    valores.add(15);

    System.out.println(valores.size()-1);


    for (Integer v : valores){
        System.out.println(v);
    }


}
        }