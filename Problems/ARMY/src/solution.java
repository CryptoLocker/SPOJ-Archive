/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
//package spoj_army;
 
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
 
/**
 *
 * @author Gokul
 */
class Main {
 
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while(t-->0)
        {
            String d = br.readLine();
            String[] s = br.readLine().trim().split(" ");
            int x = Integer.parseInt(s[0]);
            int y = Integer.parseInt(s[1]);
            int[] arr = new int[x];
            int[] arr2 = new int[y];
            String[] ss = br.readLine().trim().split(" ");
            String[] sss = br.readLine().trim().split(" ");
            int i;
            for(i=0;i<x;i++)
            {
                arr[i] = Integer.parseInt(ss[i]);
            }
            for(i=0;i<y;i++)
            {
                arr2[i] = Integer.parseInt(sss[i]);
            }
            Arrays.sort(arr);
            Arrays.sort(arr2);
            i=0;
            int j=0;
            while(i<x && j<y)
            {
                if(arr[i]<arr2[j])
                    i++;
                else
                    j++;
            }
            if(i==x)
                System.out.println("MechaGodzilla");
            else
                System.out.println("Godzilla");
        }
    }
}
 