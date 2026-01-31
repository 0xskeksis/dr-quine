with open(0, "r") as f:
    raw = f.read()
    for c in raw:
        if c == '\n':
            print("%1$c", end="")
        elif c == '"':
            print("%2$c", end="")
        elif c == '?':
            print("%3$s", end="")
        elif c == 'B':
            print("%4$d", end="")
        else:
            print(c, end="")
