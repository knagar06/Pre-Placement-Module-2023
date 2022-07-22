class MyQueue {
private:
  std::stack<int> st_main;

  int get_value(bool remove) {
    std::stack<int> st_aux;

    while(!st_main.empty()) {
      st_aux.push(st_main.top());
      st_main.pop();
    }

    int result = st_aux.top();
    if (remove) {
      st_aux.pop();
    }

    while(!st_aux.empty()) {
      st_main.push(st_aux.top());
      st_aux.pop();
    }
    return result;
  }

public:
  void push(int x) {
     st_main.push(x);
  }

  int pop() {
    return get_value(true);
  }
    
  int peek() {
    return get_value(false);
  }

  bool empty() {
    return st_main.empty();
  }
};
