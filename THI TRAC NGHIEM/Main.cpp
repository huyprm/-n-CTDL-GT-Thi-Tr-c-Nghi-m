#include<iostream>
#include<string.h>
#include"graphics.h"
#include"Lop.h"
#include"SinhVien.h"
#pragma comment(lib,"graphics.lib")
void menu() {
	bool kt = true;
	DSLOP ds;
	//doclop(ds);
	system("cls");
	cout << "================Menu===========";
	cout << "\n\n\t1.them lop:";
	cout << "\n\n\t2.hieu chinh sinh vien:";
	cout << "\n\n\t3.xuat lop:";
	cout << "\n\n\t4. xoa lop";
	cout << "\n\n\t5.Thoat";
	cout << "\n\n===================================\n";

	while (kt) {
		int luachon;
		cout << "Nhap lua chon: ";
		cin >> luachon;
		switch (luachon)
		{
		case 1:
			Themlop(ds);
			break;
		case 2:
			hieuchinhLop(ds);
			system("pause");
			break;


		case 3:
			xuatDSLOP(ds);
			break;
			system("pause");
		case 4:
			XoaLop(ds);
			system("pause");
			break;
		case 5:
			kt = false;
			break;
		default:
			break;
		}
	}
}
int main()
    {
	menu();
    return 0;
    }
