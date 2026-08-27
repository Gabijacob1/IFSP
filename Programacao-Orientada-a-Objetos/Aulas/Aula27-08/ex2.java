package arraylist;

import java.util.ArrayList;
import java.util.Collections;

public class ex2 {
    public static void main (String[] args){
        ArrayList<Integer> bandas = new ArrayList <>();
        bandas.add("Led Zeppelin");
        bandas.add("Nickelback");
        bandas.add("Nickelback");
        bandas.add("Tonico e Tinoco");

        Collections.sort(bandas);

        for (Integer banda : bandas){
            System.out.println(v);
        }


    }
}