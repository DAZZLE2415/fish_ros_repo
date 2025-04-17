import rclpy
from rclpy.node import Node

def mian(): # 函数名与setup.py一致
    rclpy.init() # 初始化工作，分配资源
    node = Node('python_node')
    node.get_logger().info('hello python node!')
    node.get_logger().warn('hello python node!')
    rclpy.spin(node)
    rclpy.shutdown()