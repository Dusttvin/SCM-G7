import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
import math
import random
import csv
import matplotlib.pyplot as plt

# Calculator Module
def calculator():
    print("Simple Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    choice = int(input("Choose an operation: "))

    if choice in [1, 2, 3, 4]:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == 1:
            print(f"Result: {num1 + num2}")
        elif choice == 2:
            print(f"Result: {num1 - num2}")
        elif choice == 3:
            print(f"Result: {num1 * num2}")
        elif choice == 4:
            if num2 != 0:
                print(f"Result: {num1 / num2}")
            else:
                print("Error: Division by zero.")
    else:
        print("Invalid choice.")

# File Manipulation Module
def file_operations():
    print("File Operations")
    print("1. Write to File")
    print("2. Read from File")
    choice = int(input("Choose an operation: "))

    if choice == 1:
        filename = input("Enter filename: ")
        content = input("Enter content to write: ")
        with open(filename, 'w') as f:
            f.write(content)
        print(f"Content written to {filename}")
    elif choice == 2:
        filename = input("Enter filename: ")
        try:
            with open(filename, 'r') as f:
                print("File content:")
                print(f.read())
        except FileNotFoundError:
            print("File not found.")
    else:
        print("Invalid choice.")

# Sorting Algorithms Module
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Sorting Menu
def sorting_menu():
    print("Sorting Algorithms")
    print("1. Bubble Sort")
    print("2. Quick Sort")
    choice = int(input("Choose a sorting algorithm: "))

    if choice in [1, 2]:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if choice == 1:
            print(f"Sorted Array: {bubble_sort(arr)}")
        elif choice == 2:
            print(f"Sorted Array: {quick_sort(arr)}")
    else:
        print("Invalid choice.")

# Data Visualization Module
def visualize_data():
    print("Data Visualization")
    data = {}
    print("Enter data in 'label:value' format. Type 'done' to finish.")
    while True:
        entry = input("Enter data: ")
        if entry.lower() == 'done':
            break
        label, value = entry.split(":")
        data[label] = float(value)

    labels = list(data.keys())
    values = list(data.values())

    plt.bar(labels, values)
    plt.title("Data Visualization")
    plt.xlabel("Labels")
    plt.ylabel("Values")
    plt.show()

# Main Menu
def main_menu():
    while True:
        print("Main Menu")
        print("1. Calculator")
        print("2. File Operations")
        print("3. Sorting Algorithms")
        print("4. Data Visualization")
        print("5. Exit")
        choice = int(input("Choose an option: "))

        if choice == 1:
            calculator()
        elif choice == 2:
            file_operations()
        elif choice == 3:
            sorting_menu()
        elif choice == 4:
            visualize_data()
        elif choice == 5:
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
