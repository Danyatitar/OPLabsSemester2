import Tbody as f
import random as r
import math
class TBall(f.TBody):
    def __init__(self):
        self.r=1 + (r.random() * (50 - 1))
    def getRadius(self):
        return self.r
    def SerRadius(self,r):
        self.r=r
    def square_of_surface(self):
        s=4*math.pi*self.r*self.r
        return s
    def volume(self):
        v=self.r*self.r*self.r*math.pi*3/4
        return v

