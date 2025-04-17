from demo_python_pkg.person_node1 import PersonNode1

class WriterNode1(PersonNode1):
    def __init__(self, name: str, age: int, book: str) -> None:
        print('PersonNode __init__方法被调用了')
        super().__init__(name, age)
        self.book = book
        
    def writerbook(self):
        """
        方法：写书
        """
        print(f"{self.name}, {self.age}岁，在写{self.book}")



def main():
    node = WriterNode1('法外狂徒张三', 18, '《论快速入狱》')
    node.writerbook()
    node.eat('鱼香肉丝')