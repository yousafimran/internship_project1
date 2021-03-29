#include<iostream>
#include<string>

using namespace std;

class rectangle{
	public:
		float len, wid,inc_len,inc_length,dec_len,dec_length,inc_wid,inc_width,dec_wid,dec_width;
		void length(){
			cout<<"Enter length of rectangle"<<endl;
			cin>>len;
		}
		void width(){
			cout<<"Enter width of rectangle"<<endl;
			cin>>wid;
		}
		void increase_len(){
			cout<<"Enter amount you want to increase in length"<<endl;
			cin>>inc_len;
			inc_length=inc_len+len;
			cout<<"after increase in length :"<<inc_length<<endl;
		}
		void decrease_len(){
			cout<<"Enter amount you want to decrease in length"<<endl;
			cin>>dec_len;
			dec_length=len-dec_len;
			cout<<"after decrease in legth:"<<dec_length<<endl;
		}
		void increase_wid(){
			cout<<"Enter amount of width you want to increase "<<endl;
			cin>>inc_wid;
			inc_width=wid+inc_wid;
			cout<<"after increase in width:"<<inc_width<<endl;
		}
		void decrease_wid(){
			cout<<"Enter amount you width you want to decrease"<<endl;
			cin>>dec_wid;
			dec_width=wid-dec_wid;
			cout<<"after deacrcese in width:"<<dec_width<<endl;
		}
		void draw(){
			cout<<"*************************"<<endl;
			cout<<"*                       *"<<endl;
			cout<<"*                       *"<<endl;
			cout<<"*                       *"<<endl;
			cout<<"*************************"<<endl;
		}
};
int main(){
	rectangle obj;
	obj.length();
	obj.width();
	obj.increase_len();
	obj.decrease_len();
	obj.increase_wid();
	obj.decrease_wid();
	obj.draw();
	
}
