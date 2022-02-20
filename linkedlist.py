

class node:
    def __init__(self,data):
        self.__data=data
        self.__next=None
    def get_data(self):
       return self.__data
    def set_data(self,data):
        self.__data=data
    def next_data(self):
        return self.__next
    def set_next(self,next_node):
        self.__next=next_node
store=node("sugar")
print(store.get_data())
store=node("milk")
print(store.set_next())

