#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	string read, ID, topID;
	int coursework, midterm, final, invalidCounter=0, numOfStudents;
	float finalscore, top=0;

	ifstream fin("assessments_2026.txt");
	ofstream fout("assessment_full_report_2026.txt");

	fin>>numOfStudents;

	fout<<"Full Assessment Report (Fall 2025/2026)"<<endl;
	fout<<"---------------------------------------------------"<<endl;
	fout<<"ID         Course-Work  Midterm  Final  Final-Score"<<endl;

	while(getline(fin, read))
	{
		fin>>ID>>coursework>>midterm>>final;
		if (coursework>=0 && coursework<=100 && midterm>=0 && midterm<=100 && final>=0 && final<=100)
		{
			finalscore = coursework*0.3 + midterm*0.3 + final*0.4;
			if (finalscore>top)
			{
				topID=ID;
				top=finalscore;
			}
			fout<<ID<<setw(14)<<coursework<<setw(8)<<midterm<<setw(8)<<final<<setw(12)<<showpoint<<setprecision(3)<<finalscore<<endl;
		}
		else
		{
			fout<<ID<<setw(14)<<coursework<<setw(8)<<midterm<<setw(8)<<final<<setw(12)<<"*** Invalid"<<endl;
			invalidCounter++;
		}
	}
	fout<<endl;
	fout<<"Top Performing Student"<<endl<<endl;
	fout<<topID<<setw(14)<<showpoint<<setprecision(3)<<top<<endl;
	fout<<"-----------------------"<<endl;
	fout<<"Total Valid Students Processed: "<<numOfStudents - invalidCounter<<endl;
	fout<<"Total Invalid Students Records: "<<invalidCounter;

	fin.close();
	fout.close();


	return 0;
}