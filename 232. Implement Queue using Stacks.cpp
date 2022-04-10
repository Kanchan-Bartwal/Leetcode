class MyQueue {
public:
	stack<int> first;
	stack<int> second;

	MyQueue() {}

	void push(int x) {
		first.push(x);    
	}

	int pop() {
		int temp = -1;
		while(first.empty() == false){
			temp = first.top();
			first.pop();
			if(first.empty() == true){
				break;
			}
			second.push(temp);
		}
		while(second.empty() == false){
			first.push(second.top());
			second.pop();
		}
		return temp;
	}

	int peek() {
		int temp = -1;
		while(first.empty() == false){
			temp = first.top();
			first.pop();
			second.push(temp);
		}
		while(second.empty() == false){
			first.push(second.top());
			second.pop();
		}
		return temp;
	}

	bool empty() {
		if(first.empty() == true){
			return true;
		}
		return false;
	}
};
