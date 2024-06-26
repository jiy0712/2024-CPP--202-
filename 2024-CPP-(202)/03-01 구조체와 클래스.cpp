#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	//생성자 : 객체가 생성될 때 호출되는 함수
	//생성자는 반환형이 없다. (반환형 = 리턴타입)

	Student() {
		this -> hakbun_ = 2222;
		name_ = "swag";
	}

	// 멤버변수 초기화 : 객체 생성과 동시에 멤버변수 ...
	// const : 참조 멤버변수를 초기화 할 수 있다.
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name){}

	//클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << " ";
	}

	
private:
	int hakbun_;
	string name_;
};
int main(void) {
	//동적 할당 : 메모리는 heap에서 할당. 실행(런타임) 시 메모리 크기가 정해짐
	Student* stu = new  Student[3]{
		{2202, "나지수"},
		{2203, "박지영"},
		{2215, "choo"}
	};
	
	stu[0].show();
	stu[1].show();
	stu[2].show();

	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}

	//배열의 동적할당 해제
	delete[] stu;
	return 0;
}