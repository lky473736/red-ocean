
w = 600
h = 600 
n_people = 110 
p_infection = 0.25 #1.5% 
p_recovery = 0.001
p_death = 0.0002
p_rd = 0.01
p_rip = 0.1
p_reinfection = 0.001

class Person():
    def __init__(self,id,x,y,vx,vy):
        self.id = id
        self.x = x
        self.y = y
        self.vx = vx
        self.vy = vy
        self.status = 'normal' # infected
    
    def move(self):
        if self.x < 0 or self.x > w:
            self.vx *= -1
        if self.y < 0 or self.y > h:
            self.vy *= -1
        
        self.x += self.vx
        self.y += self.vy
        
        
    def display (self) :
        if self.status == 'infected' :
            fill (255,0,0) #255,0,0 is red
        elif self.status == 'recovered':
            fill (0,255,0) #0,255,0 is green
        elif self.status == 'deceased':
            fill (0,0,255) 
            
            self.vx = 0
            self.vy = 0
            
        elif self.status == 'reinfected' :
            fill (255,0,127) #pink
        elif self.status == 'rd':
            fill (255,228,0) #yellow
            self.vx = 0
            self.vy = 0
            
        else : 
            fill (127)
            
        ellipse (self.x, self.y, 10, 10)
        
    def collide (self) : #distance through the circles' middle < 20
        for i in range(self.id+1, len(people)):
            person = people[i]
            
            if self.status in ['recovered', 'deceased'] or person.status in ['recovered', 'deceased']:
                continue
            
            distance = sqrt((self.x - person.x)**2 + (self.y - person.y)**2)
            
            if distance < 20 and random(0, 1) < p_infection:
                if self.status == 'infected' and person.status == 'normal':
                    person.status = 'infected' 
                elif self.status == 'normal' and person.status == 'infected':
                    self.status = 'infected'
                    
            elif distance < 20 and random(0,1) < p_recovery:
                if self.status == 'recovered' and person.status == 'infected':
                    person.status = 'reinfected'
                    
                    if self.status == 'reinfected' and person.status == 'reinfected':
                        person.status = 'rd'
                        
            elif distance < 20 and random (0,1) < p_rip:
                if self.status == 'normal' and person.status == 'reinfected':
                    person.status = 'infected'

        #collide study
    
    def change_status(self):
        if self.status == 'infected':
            if random(0, 1) < p_recovery:
                self.status = 'recovered'
                
            elif random(0, 1) < p_death:
                self.status = 'deceased'
                
        elif self.status == 'recovered':
            if random (0,1) < p_reinfection :
                self.status = 'reinfected'
            else :
                fill (0,255,0)
        
        elif self.status == 'reinfected':
            if random (0,1) < p_rd:
                    self.status = 'rd'
                

people = []
for i in range(n_people) : #person number is 20
        person = Person (i, random(w), random(h), random(0, 2), random (0, 2)) # Person is a circle. (size x, size y, x's speed, y's speed)
        people.append(person)

people[0].status = 'infected'

def setup ():
    global w,h
    size(w, h)
    background(255)
    
def draw ():
    background (209) #color of background
    
    board = {
             'Coded by Lim' : 0,
             'normal' : 0,
             'infected' : 0,
             'reinfected' : 0,
             'recovered' : 0,
             'deceased' : 0,
             'rd' : 0
             }
             
    for person in people :
          person.move()
          person.collide()
          person.change_status()
          person.display() #the call
          
          board[person.status] += 1
    
    for i, (status, n) in enumerate (board.items()):
        textSize(16)
        fill (0)
        text("%s: %d" % (status, n), 5, 20 * (i + 1))
        
          
