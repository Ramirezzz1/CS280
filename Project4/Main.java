public class Main{
    public static void main(String[] args) {
        Complex a1 = new Complex(1,2);
        Complex a2 = new Complex(1,3);

        double num = 5;

        System.out.println(a1 + " + " + a2 + " = " + a1.add(a2));
        System.out.println(a1 + " - " + a2 + " = " + a1.subtract(a2));
        System.out.println(a1 + " * " + a2 + " = " + a1.multiply(a2));
        System.out.println(a1 + " / " + a2 + " = " + a1.divide(a2));

        System.out.println(a1 + " + " + num + " = " + a1.add(num));
        System.out.println(a1 + " - " + num + " = " + a1.subtract(num));
        System.out.println(a1 + " * " + num + " = " + a1.multiply(num));
        System.out.println(a1 + " / " + num + " = " + a1.divide(num));



    }
}