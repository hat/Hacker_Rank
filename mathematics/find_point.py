# Point reflection

from sys import stdin

num_sets = stdin.readline()
for i in range(0, int(num_sets)):
    all_points = stdin.readline()
    points = all_points.split()
    #print (all_points)
    print ("%s %s" % (int(points[2]) * 2 - int(points[0]), int(points[3]) * 2 - int(points[1])))