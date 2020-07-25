class Simulation:
    def __init__(self):
        self._state = 1

    def print_log(self, message='', mod='a'):
        with open('log.txt', mod) as file:
            file.write("{msg}\n".format(msg=message))
    
    def start_simu(self):
        print("start_simulation")
        _ = input()

    def stop_simu(self):
        print("stop_simulation")
        _ = input()
    
    def run(self):
        if self._state == 0:
            return False
        return True
    
    def mod_state(self, state):
        self._state = state

class Car:
    def __init__(self):
        self.speed = 0.5
        self.dir = 0
        self.sense = []
        self.log = ""
    
    def get_lidar(self):
        self.sense = []
        print("get_info_lidar")
        self.log = input().split(':')
        for tile in self.log[2:]:
            try:
                tile = float(tile)
                self.sense.append(tile)
            except:
                pass


    def forward(self, speed=0.5):
        self.speed = speed
        print("car_forward:{spd}".format(spd=speed))
        _ = input()


simu = Simulation()
car = Car()

simu.start_simu()
simu.print_log(mod='w')

while simu.run():
    car.get_lidar()
    simu.print_log(car.sense)
    car.forward()

simu.stop_simu()