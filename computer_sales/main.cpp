#include "iostream"
using namespace std;

struct Computer{
	char model[20];
	int total;
}computers[100];

int modelCount = 0;

void list();
void enterWarehouse();
void outWarehouse();
int find(char* model);

int main()
{
	int action;
	do{
		cout<<"-----------�˵�-----------"<<endl;
		cout<<"1)�鿴���"<<endl;
		cout<<"2)�������"<<endl;
		cout<<"3)�۳�"<<endl;
		cout<<"4)�˳�����"<<endl;

		cin>>action;
		switch(action){
		case 1:
			list();
			break;
		case 2:
			enterWarehouse();
			break;
		case 3:
			outWarehouse();
			break;
		case 4:
			return 0;
		default:
			cout<<"�������˴���Ĳ˵��������ѡ��";
		}
	}while(1);
}

void list(){
	cout<<"-------���-------"<<endl;
	cout<<"�ͺ�\t"<<"����"<<endl;
	for(int i=0;i<modelCount;i++){
		cout<<computers[i].model<<"\t"<<computers[i].total<<endl;
	}
	cout<<"-------���-------"<<endl;
}
void enterWarehouse(){
	struct Computer computer;
	cout<<"���:"<<endl;
	cout<<"�ͺţ�";
	cin>>computer.model;

	cout<<"������";
	cin>>computer.total;

	int index = find(computer.model);
	if(index == modelCount){
		strcpy(computers[index].model , computer.model);
		computers[index].total = computer.total;
		modelCount++;
	}else{
		computers[index].total += computer.total;
	}
}

void outWarehouse(){
	struct Computer computer;
	cout<<"������"<<endl;
	cout<<"�ͺţ�";
	cin>>computer.model;

	cout<<"������";
	cin>>computer.total;

	int index = find(computer.model);
	if(index == modelCount){
		cout<<"�ͺŴ���"<<endl;
	}else{
		computers[index].total -= computer.total;
	}
}

int find(char* model){
	int i;
	for(i=0;i<modelCount;i++){
		if(strcmp(computers[i].model,model) == 0){
			break;
		}
	}
	return i;
}
