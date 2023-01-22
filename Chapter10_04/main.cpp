#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor;	// forward declaration

class Patient
{
public:
	Patient(string name)
		: m_name(name)
	{}

	void AddDoctor(Doctor* doctor)
	{
		m_doctors.push_back(doctor);
	}

	void MeetDoctors();

	friend class Doctor;

private:
	string m_name;
	vector<Doctor*> m_doctors;
};

class Doctor
{
public:
	Doctor(string name)
		: m_name(name)
	{}

	void AddPatient(Patient* patient)
	{
		m_patients.push_back(patient);
	}

	void MeetPatients()
	{
		for (const auto& i : m_patients)
		{
			cout << "Meet patient : " << i->m_name << endl;
		}
	}

	friend class Patient;

private:
	string m_name;
	vector<Patient*> m_patients;
};

void Patient::MeetDoctors()
{
	for (const auto& i : m_doctors)
	{
		cout << "Meet doctor : " << i->m_name << endl;
	}
}

int main()
{
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Docter K");
	Doctor* d2 = new Doctor("Docter L");

	p1->AddDoctor(d1);
	d1->AddPatient(p1);

	p2->AddDoctor(d2);
	d2->AddPatient(p2);

	p2->AddDoctor(d1);
	d1->AddPatient(p2);

	// patients meet doctors
	p1->MeetDoctors();

	// doctors meet patients
	d1->MeetPatients();

	// deletes
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}