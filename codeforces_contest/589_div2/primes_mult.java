import java.math.BigInteger;
import java.util.*;

class prime_mult{
    public ArrayList<Integer> primelist(Double n){
    ArrayList<Integer> p=new ArrayList<Integer>(n);
    while(n%2==0){
        p.add(2);
        n=n/2;
    }
    for(int i=3;i<(Math.sqrt(n))+1;i+=2){
        while(n%i==0){
            p.add(i);
            n=n/i;
        }
    }
    if(n>2){
        p.add((int)(n));
    }
    return p;
}
    Scanner sc=new Scanner(System.in);

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Double x=sc.nextLong();
        Double n=sc.nextLong();
        prime_mult pm=new prime_mult();
        ArrayList<Integer> p=pm.primelist(n);
        ArrayList<Integer> dp={0};
        int j=0;
        for(int i:p){
            if(i!=dp.get(j)){
                dp.add(i, 0);
                j++;
            }
        }
        double m=ie9+7,a=1;
        for(double k:dp){
            int l=Math.ceil(Math.log);
    
        }
    }
}