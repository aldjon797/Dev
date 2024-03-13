import turtle as t

def half():
    t.forward(100)
    t.right(45)
    t.forward(100)
    t.right(90)
    t.forward(100)
    t.right(45)
    t.forward(100)

def get_pos():
    x, y = t.pos()
    print(f"Posizione corrente: ({x}, {y})")

def eye():
    t.penup()
    t.right(90)
    t.forward(160)
    t.left(90)
    t.forward(70)
    t.pencolor("black")
    t.dot(35)

def sec_dot():
    t.left(90)
    t.penup()
    t.forward(310)
    t.left(90)
    t.forward(120)
    t.pendown()
    t.dot(35)

t.fillcolor("#306998")
t.begin_fill()
half()
t.end_fill()
get_pos()
t.fillcolor("#FFD43B")
t.begin_fill()
half()
t.end_fill()

eye()
sec_dot()

def pause():
    t.speed(2)
    for i in range(100):
        t.left(90)

pause()
t.done()
