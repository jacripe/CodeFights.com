int shapeArea(int n) {
    bool verb = false;
    if(verb) { cout << "START\n"; }
    return (n == 1) ? n : (shapeArea(n-1)+(4*(n-1)));
}

// 1:1, 2:5, 3:13, 4:25
//   =   +4    +8   +12
//   =   +4   +12   +24
//   n
//   1+4^(n-1)
//   1+4*n
//   1+4*6
