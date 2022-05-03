#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <vector>
#include "structures.h"
vector<University> input_university(int n) {
	vector <University> uv;
	for (int i = 0; i < n; i++) {
		University u;
		vector <Fakultet> fv;
		cout << "������ ����� ����" << endl;
		cin >> u.name;
		cout << "������ ����" << endl;
		cin >> u.town;
		cout << "������ ������ �����������" << endl;
		cin >> u.degree_of_acreditation;
		cout << "������ �-�� ����������" << endl;
		cin >> u.number_of_fakultets;
		for (int i = 0; i < u.number_of_fakultets; i++) {
			Fakultet f;
			cout << "������ ����� ����������" << endl;
			cin >> f.name;
			cout << "������ �-�� �������� ����������" << endl;
			cin >> f.number_of_students;
			fv.push_back(f);
		}
		cout << endl;
		u.fakultet = fv;
		uv.push_back(u);
	}
	return uv;
}
vector <string> max_student(string town, vector <University> uv) {
	vector <int> students;
	vector <string> name_and_fakultet;
	for (int i = 0; i < uv.size(); i++) {
		if (uv[i].town == town) {
			for (int j = 0; j < uv[i].fakultet.size(); j++) {
				students.push_back(uv[i].fakultet[j].number_of_students);
			}
		}
	}
	int max = 0;
	for (int i = 0; i < students.size(); i++) {
		if (students[i] > max) {
			max = students[i];
		}
	}
	for (int i = 0; i < uv.size(); i++) {
		if (uv[i].town == town) {
			for (int j = 0; j < uv[i].fakultet.size(); j++) {
				if (uv[i].fakultet[j].number_of_students == max) {
					name_and_fakultet.push_back(uv[i].name);
					name_and_fakultet.push_back(uv[i].fakultet[j].name);
				}
			}
		}
	}
	return name_and_fakultet;
}
vector <NewFileUniversity> acreditation(vector <University> uv) {
	vector <NewFileUniversity> nfuv;

	for (int i = 0; i < uv.size(); i++) {
		if (uv[i].degree_of_acreditation == 3 || uv[i].degree_of_acreditation == 4) {
			NewFileUniversity nfu;
			nfu.name = uv[i].name;
			nfu.town = uv[i].town;
			nfu.degree_of_acreditation = uv[i].degree_of_acreditation;
			nfuv.push_back(nfu);

		}
	}
	return nfuv;
}
void Write_to_File(vector <University> uv) {
	ofstream file("Universities.bin", ios::binary | std::ios::trunc);
	for (size_t i{ 0 }; i < uv.size(); i++) {
		file.write((char*)&uv[i], sizeof(University));
	}
	file.close();
}
void NewFile(vector < NewFileUniversity > nfuv) {
	ofstream file("NewUniversities.bin", ios::binary);
	for (int i = 0; i < nfuv.size(); i++) {
		file.write((char*)&nfuv[i], sizeof(nfuv[i]));
	}
	file.close();
}


void OutofEndFile(vector <NewFileUniversity> nfuv) {
	for (int i = 0; i < nfuv.size(); i++) {
		nfuv[i].toString();
		cout << endl;
	}
}
void OutofFirstfile(vector <University> uv) {
	for (int i = 0; i < uv.size(); i++) {
		uv[i].toString();
		cout << endl;
	}
}
