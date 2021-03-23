import pgzrun
apple = Actor('apple')
def draw():
    screen.clear()
    apple.draw()
    screen.fill("red")
def place_apple():
    apple.x=300
    apple.y=200
    place_apple()
    def on_mouse_down(pos):
        if apple.collidepoin(pos):
            print("good")
            place_apple()
        else:
            print("miss")

pgzrun.go()