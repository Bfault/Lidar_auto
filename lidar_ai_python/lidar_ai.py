class Simulation:
    '''
        Class used to process all the simulation
    '''

    def __init__(self):
        self._state = 1

    def print_log(self, message='', mod='a'):
        '''
            Function used to print in log.txt file
        '''
        with open('log.txt', mod) as file:
            file.write("{msg}\n".format(msg=message))
    
    def start_simu(self):
        print("start_simulation")
        self._state = get_state(input(), self._state)

    def stop_simu(self):
        print("stop_simulation")
        self._state = get_state(input(), self._state)
    
    def run(self):
        '''
            Function used to detect the end of the race
        '''
        if self._state == 0:
            return False
        return True


class Car(Simulation):
    '''
        Class used to process the car

        Parent :
            - Simulation
    '''

    def __init__(self):
        super().__init__()
        self.speed = 0.5
        self.dir = 0
        self.sense = []
        self.log = ""

    def get_lidar(self):
        '''
            Function used to get the position informations
        '''
        self.sense = []
        print("get_info_lidar")
        self.log = input().split(':')
        self._state = get_state(self.log, self._state)
        for tile in self.log[2:]:
            try:
                tile = float(tile)
                self.sense.append(tile)
            except:
                pass

    def forward(self, speed=0.5):
        self.speed = speed
        print("car_forward:{spd}".format(spd=speed))
        self._state = get_state(input(), self._state)

    def drive(self, rotation=0):
        self.dir = rotation
        print("wheels_dir:{dir}".format(dir=rotation))
        self._state = get_state(input(), self._state)


def get_state(data, state):
    '''
        Function used to modify the state of the race
    '''
    if len(data) == 37:
        checkpoint = data[-2]
    else:
        checkpoint = data[-1]
    if checkpoint == "First CP Cleared":
        return state + 1
    elif checkpoint == "CP Cleared":
        return state + 1
    elif checkpoint == "Track Cleared":
        return 0
    else:
        return state

simu = Simulation()
car = Car()

simu.start_simu()
simu.print_log("Log file :", mod='w')

while simu.run():
    car.get_lidar()

    simu.print_log(len(car.log))
    simu.print_log(car.log)
    simu.print_log()

    car.forward()

simu.stop_simu()