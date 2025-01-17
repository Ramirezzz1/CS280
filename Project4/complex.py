class complex:
    def __init__(self, realNum, imagNum):
        self.realNum = realNum
        self.imagNum = imagNum
    
    def __add__(self,other):
        if isinstance(other, complex):
            return complex(self.realNum + other.realNum, self.imagNum + other.imagNum)
        elif isinstance(other, (int, float)):
            return complex(self.realNum + other, self.imagNum)
        else:
            raise TypeError("Invalid operand type")
        
    def __sub__(self, other):
        if isinstance(other,complex):
            return complex(self.realNum - other.realNum, self.imagNum - other.imagNum)
        elif isinstance(other, (int, float)):
            return complex(self.realNum - other, self.imagNum )
        else:
            raise TypeError("Invalid operand type")
    #(a+bi)*(c+di) = (ac - bd) + (ad + bc)j)
    def __mul__(self,other):
        if isinstance(other,complex):
            real = self.realNum * other.realNum - self.imagNum * other.imagNum 
            imag = self.realNum * other.imagNum + self.imagNum * other.realNum 
            return complex(real, imag)
        elif isinstance(other,(int,float)):
            return complex(self.realNum * other, self.imagNum * other)
        else:
            return TypeError("Invalid type")
        
    def __truediv__(self,other):
        if isinstance(self, complex):
            deno = other.realNum**2 + other.imagNum**2
            if deno == 0:
                raise ZeroDivisionError("Denominator is zero")
            real = (self.realNum * other.realNum + self.imagNum * other.imagNum)/deno
            imag = (self.imagNum * other.realNum - self.realNum * other.imagNum)/deno
            return complex(real, imag)
        elif isinstance(other,(int,float)):
            if other == 0:
                raise ZeroDivisionError("Denominator is zero")
            return complex(self.realNum / other, self.imagNum / other)
        else:
            raise TypeError("Invalid operand type")
        
    def __rtruediv__(self,other):
        if isinstance(other,(int , float)):
            deno = self.realNum**2 + self.imagNum**2
            if deno == 0:
                raise ZeroDivisionError("Can't divide by zero ")
            real = (other * self.realNum)/ deno
            imag = (-other * self.imagNum) / deno
            return complex(real, imag)
        else:
            raise TypeError
        
    def __str__(self):
        real = f"{self.realNum:.2f}".rstrip('0').rstrip('.')  # Format realNum to 2 decimal places
        imag = f"{self.imagNum:.2f}".rstrip('0').rstrip('.')  # Format imagNum to 2 decimal places
        if self.imagNum >= 0:
            return f"({real}+{imag}j)"
        else:
            return f"({real}{imag}j)"
        
    #handles when left hand operand isn't complex   
    def __radd__(self,other):
        return self + other
    
    def __rsub__(self,other):
        return complex(other, 0) - self
    
    def __rmul__(self,other):
        return self * other
    
    def __float__(self):
        return (self.realNum**2 + self.imagNum**2) **0.5
    
    def __init__(self):
        return int(self.realNum)
    

    if __name__ == '__main__':
        c1 = complex(2,3)
        c2 = complex(1,2)

        i =5
    print(f"{c1} + {c2} = {c1 + c2}")
    print(f"{c1} - {c2} = {c1 - c2}")
    print(f"{c1} * {c2} = {c1 * c2}")
    print(f"{c1} / {c2} = {c1 / c2}")

    print(f"{c1} + {i} = {c1 + i}")
    print(f"{c1} - {i} = {c1 - i}")
    print(f"{c1} * {i} = {c1 * i}")
    print(f"{c1} / {i} = {c1 / i}")

    print(f"{i} + {c1} = {i + c1}")
    print(f"{i} - {c1} = {i - c1}")
    print(f"{i} * {c1} = {i * c1}")
    print(f"{i} / {c1} = {i / c1}")

