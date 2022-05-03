#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <vector>
#include "structures.h"
using namespace std;
vector<University> input_university(int n);
vector <string> max_student(string, vector <University>);
vector <NewFileUniversity> acreditation(vector <University>);
void Write_to_File(vector <University> uv);
void NewFile(vector < NewFileUniversity >);
void OutofEndFile(vector <NewFileUniversity>);
void OutofFirstfile(vector <University>);
void OutofFirstfile2();