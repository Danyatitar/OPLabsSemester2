import TBall as ba
import TParallelepiped as pa
def square(p:int)->float:
    p_array=[]
    for i in range(p):
        parallelepiped=pa.TParallelepiped()
        p_array.append(parallelepiped)
    s=0
    for i in range(len(p_array)):
        s=s+p_array[i].square_of_surface()
    return s
def volume(b:int)->float:
    b_array=[]
    for i in range(b):
        ball=ba.TBall()
        b_array.append(ball)
    v=0
    for i in range(len(b_array)):
        v=v+b_array[i].volume()
    return v
