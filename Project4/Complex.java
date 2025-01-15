public class Complex{

    private double realNum;
    private double imagNum;

    //Overloaded constructors 
    public Complex(){
        this(0,0);
    }

    public Complex(double realNum){
        this(realNum, 0);
    }

    public Complex(double realNum, double imagNum){
        this.realNum = realNum;
        this.imagNum = imagNum;
    }

    //Add methods
    public Complex add(Complex o){
        return new Complex(this.realNum + o.realNum, this.imagNum + o.imagNum);

    }

    public Complex add(double num){
        return new Complex(this.realNum + num, this.imagNum );

    }

    //Subtraction methods 

    public Complex subtract(Complex o){
        return new Complex(this.realNum - o.realNum, this.imagNum - o.imagNum);

    }

    public Complex subtract(double num){
        return new Complex(this.realNum - num , this.imagNum);

    }

    //Multiplication methods

    public Complex multiply(Complex o){
        double real = this.realNum * o.realNum - this.imagNum * o.imagNum;
        double imag = this.realNum * o.imagNum + this.imagNum * o.realNum;
        return new Complex(real, imag);

    }

    public Complex multiply(double num){
        return new Complex(this.realNum * num , this.imagNum * num);
    }

    //Division methods

    public Complex divide(Complex o){
        double deno = o.realNum * o.realNum + o.imagNum * o.imagNum;
        if(deno == 0){
            throw new ArithmeticException("Can't Divide by zero chief");
        }
        double real = (this.realNum * o.realNum + this.imagNum * o.imagNum)/deno;
        double imag = (this.imagNum * o.realNum - this.realNum * o.imagNum)/deno;
        return new Complex(real, imag);

    }

    public Complex divide(double num){
        if(num == 0){
            throw new ArithmeticException("Can't divide by zero chief");
        }
        return new Complex(this.realNum / num , this.imagNum / num);
    }

    @Override
    public String toString(){
        String real = realNum % 1 == 0 ? String.valueOf((int) realNum):String.valueOf(realNum);
        String imag = imagNum % 1 == 0 ? String.valueOf((int)imagNum) : String.valueOf(imagNum);

        if(imagNum >= 0){
            return "(" + real + " + " + imag + "j)";
        }else{
            return "(" + real + imag + "j)";
        }

    }

}