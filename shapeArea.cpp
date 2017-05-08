int shapeArea(int n) {
    bool verb = false;
    if(verb) { cout << "START\n"; }
    return (n == 1) ? n : (shapeArea(n-1)+(4*(n-1)));
}

// CHALLENGE: Calculate area for an expanding polygon fitting pattern:
// n=1:1, n=2:5, n=3:13, n=4:25
//
// NOTES:
//   =   +4    +8   +12
//   =   +4   +12   +24
//   n
//   1+4^(n-1)
//   1+4*n
//   1+4*6
