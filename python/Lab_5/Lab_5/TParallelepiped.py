import Tbody as f
import random as r
class TParallelepiped(f.TBody):
    def __init__(self):
        self.a=1 + (r.random() * (50 - 1))
        self.b=1 + (r.random() * (50 - 1))
        self.c=1 + (r.random() * (50 - 1))
    def getA(self):
        return self.a
    def getB(self):
        return self.b
    def getC(self):
        return self.c
    def setA(self,a):
        self.a=a
    def setB(self,b):
        self.b=b
    def setC(self,c):
        self.c=c
    def square_of_surface(self):
        s=self.a*self.b*2+self.a*self.c*2+self.b*self.c*2
        return s
    def volume(self):
        v=self.a*self.b*self.c
        return v

