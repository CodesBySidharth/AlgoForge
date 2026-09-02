from abc import ABC, abstractmethod
class Shape(ABC):
    @abstractmethod
    def area(self):
        pass
    @abstractmethod
    def perimeter(self):
        pass
class Rectangle(Shape):
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth
    def area(self):
        return self.length * self.breadth
    def perimeter(self):
        return 2 * (self.length + self.breadth)
r = Rectangle(10, 5)
print("Area =", r.area())
print("Perimeter =", r.perimeter())

''' Create an abstract class of vehicle.Use obejct serialization pickle to save and  the restore the objects '''
from abc import ABC, abstractmethod
import pickle
class Vehicle(ABC):
    def __init__(self, name, price):
        self.name = name
        self.price = price
    @abstractmethod
    def display(self):
        pass
class Car(Vehicle):
    def display(self):
        print("Vehicle:", self.name)
        print("Price:", self.price)
car = Car("BMW", 5000000)
with open("vehicle.pkl", "wb") as file:
    pickle.dump(car, file)
print("Object saved successfully.")
with open("vehicle.pkl", "rb") as file:
    restored_car = pickle.load(file)
print("\nRestored Object:")
restored_car.display() 