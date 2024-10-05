def grade_marks(marks):
    if marks < 25:
        return "F"
    elif marks <= 44:
        return "E"
    elif marks <= 49:
        return "D"
    elif marks <= 59:
        return "C"
    elif marks <= 79:
        return "B"
    elif marks <= 100:
        return "A"
    else:
        return "Invalid Entry of MARKS"

def get_user_input():
    try:
        marks = int(input("\n Enter the marks: \n"))
        return marks
    except ValueError:
        print("Please enter a valid integer for marks.")
        return None

def main():
    marks = get_user_input()
    if marks is not None:
        grade = grade_marks(marks)
        print(grade)

if __name__ == "__main__":
    main()
