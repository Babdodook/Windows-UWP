#pragma once

#include <Windows.h>

using namespace Platform;

ref class CSimpleObject sealed
{
	String^		_Name;
	
	~CSimpleObject();
public:	// �ٸ� ���ε� ȣ�Ⱑ��. ���� �޼ҵ� ���� �� ���ӵ� Ÿ���� ����� �� ����.
	property Platform::String^ Name
	{
		// property ���� �ڵ�
		Platform::String^ get()	
		{
			return _Name;
		}
		void set(Platform::String^ name)
		{
			_Name = name;
		}
	}
	property	int			Value;		// get(),set()�ڵ� ����

	CSimpleObject();
	CSimpleObject(String^ name,int value)
	{
		_Name = name;
		Value = value;
	}
internal:
	CSimpleObject^ operator+(CSimpleObject^ obj);
};

