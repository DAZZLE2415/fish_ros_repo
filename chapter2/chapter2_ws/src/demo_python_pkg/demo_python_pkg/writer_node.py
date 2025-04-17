import rclpy
from demo_python_pkg.person_node import PersonNode


class WriterNode(PersonNode):
    def __init__(self, node: str, name: str, age: int, book: str) -> None:
        print('PersonNode __init__方法被调用了')
        super().__init__(node, name, age)
        self.book = book
        
    def writerbook(self):
        """
        方法：写书
        """
        
        # print(f"{self.name}, {self.age}岁，在写{self.book}")
        self.get_logger().info(f"{self.name}, {self.age}岁，在写{self.book}")



def main():
    rclpy.init()
    node = WriterNode('zhangsan', '法外狂徒张三', 18, '《论快速入狱》')
    node.writerbook()
    node.eat('鱼香肉丝')
    rclpy.spin(node)
    rclpy.shutdown()