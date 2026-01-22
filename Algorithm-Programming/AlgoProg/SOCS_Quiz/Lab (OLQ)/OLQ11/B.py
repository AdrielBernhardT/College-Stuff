t = int(input())


def init_map():
    return [[0 for i in range(8)] for j in range(8)]


def recursive(map, y, x, steps):
    if x < 0 or y < 0 or x >= 8 or y >= 8:
        return

    if steps == 0:
        map[y][x] = 1
        return

    recursive(map, y + 2, x + 1, steps - 1)
    recursive(map, y - 2, x + 1, steps - 1)
    recursive(map, y + 2, x - 1, steps - 1)
    recursive(map, y - 2, x - 1, steps - 1)
    recursive(map, y + 1, x + 2, steps - 1)
    recursive(map, y + 1, x - 2, steps - 1)
    recursive(map, y - 1, x + 2, steps - 1)
    recursive(map, y - 1, x - 2, steps - 1)


for i in range(t):
    steps = int(input(), 10)
    temp = input()
    x1, y1, x2, y2 = [
        ord(temp[0]) - ord("A"),
        int(temp[1]) - 1,
        ord(temp[3]) - ord("A"),
        int(temp[4]) - 1,
    ]
    map1 = init_map()
    map2 = init_map()

    print(x2, y2)

    recursive(map1, y1, x1, steps)
    recursive(map2, y2, x2, steps)

    found = False
    for y in range(8):
        for x in range(8):
            if map1[y][x] == map2[y][x] and map1[y][x] == 1:
                found = True
                break
        if found:
            break

    if found:
        print("Case #{}: YES".format(i + 1))
    else:
        print("Case #{}: NO".format(i + 1))
