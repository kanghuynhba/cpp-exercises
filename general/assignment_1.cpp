#include <bits/stdc++.h>

using namespace std;

struct Vector3D{
    double x, y, z;
};


void inputVector(Vector3D& A) {
    cin >> A.x >> A.y >> A.z;
}

Vector3D sumVector(Vector3D& A, Vector3D& B) {
    Vector3D C;
    C.x=A.x+B.x;
    C.y=A.y+B.y;
    C.z=A.z+B.z;
    return C;
}

Vector3D subtractVector(Vector3D& A, Vector3D& B) {
    Vector3D C;
    C.x=A.x-B.x;
    C.y=A.y-B.y;
    C.z=A.z-B.z;
    return C;
}

Vector3D multiplyVector(Vector3D& A, Vector3D& B) {
    Vector3D C;
    C.x=A.x*B.x;
    C.y=A.y*B.y;
    C.z=A.z*B.z;
    return C;
}

void outputVector(Vector3D& C, string oprt) {
    cout << "Ket qua " << oprt << " cong 2 vector: " << C.x << " " << C.y << " " << C.z << endl; 
} 

int main() {
    Vector3D A, B, C;
    cout << "Nhap vector A:" << endl;
    inputVector(A);
    cout << "Nhap vector B:" << endl;
    inputVector(B);
    C=sumVector(A, B);
    outputVector(C, "cong");
    C=subtractVector(A, B);
    outputVector(C, "tru");
    C=multiplyVector(A, B);
    outputVector(C, "nhan");
    return 0;
}