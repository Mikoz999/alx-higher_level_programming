#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    result = []

    for i in range(list_length):
        try:
            num1 = my_list_1[i] if i < len(my_list_1) else 0
            num2 = my_list_2[i] if i < len(my_list_2) else 1
            division_result = 0

            if isinstance(num1, (int, float)) and isinstance(num2, (int, float)):
                if num2 != 0:
                    division_result = num1 / num2
                else:
                    print("division by 0")
            else:
                print("wrong type")

            result.append(division_result)
        except IndexError:
            print("out of range")
        finally:
            pass

    return result
