
def last_line(name):
    f = open(name, "r", encoding="utf-8")
    lines = f.readlines()
    return lines[-1]



if __name__ == "__main__":
    if last_line('sample.txt') == "Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.":
        print("True")