class MinStack {
public:
    MinStack() {
        cur_pointer = 0;
    }

    void push(int val) {
        data[cur_pointer] = val;
        if (cur_pointer == 0)
            data[cur_pointer + 1] = val;
        else
            data[cur_pointer + 1] = min(data[cur_pointer-1], val);
        cur_pointer += 2;
    }

    void pop() {
        cur_pointer -= 2;
        
    }

    int top() {
        return data[cur_pointer -2];
    }

    int getMin() {
        return data[cur_pointer-1];
    }
private:
    int cur_pointer;
    int data[60002];
};