void mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama= " << nama << endl;
}

int main() {
    mahasiswa mhs1 (102030);
    mahasiswa mhs2("Andi");
    mahasiswa mhs3(010203, "Santi");

    //tampilkan nilai
    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();

    return 0;
}