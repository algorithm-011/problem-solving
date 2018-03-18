class Student():
    def __init__(self, name, kr, en, ma):
        self._name = name
        self._kr = kr
        self._en = en
        self._ma = ma

    def __lt__(self, other):
        return (-self._kr, self._en, -self._ma, self._name) < (-other._kr, other._en, -other._ma, other._name)

    def __str__(self):
        return self._name

    @classmethod
    def parse(cls, line):
        name, *scores = line.strip().split()
        scores = [int(s) for s in scores]
        return cls(name, *scores)

if __name__ == '__main__':
    student_count = int(input().strip())
    students = []
    for _ in range(student_count):
        students.append(Student.parse(input()))
    print('\n'.join([str(s) for s in sorted(students)]))

