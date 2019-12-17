filename = "output"

points = []

with open(filename, "r") as file:
    for line in file:
        points.append(line.strip().lstrip())

print("X,", end="")
print(",".join(points))
for allele in points:
    print(f"{allele},{','*(len(points)-1)}")