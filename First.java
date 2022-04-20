package First;

class Stack{
    private int[] stack;
    int top;
    int index = -1;
    int sizeOfStack;
    Stack(int sizeOfStack){
        stack = new int[sizeOfStack];
        this.sizeOfStack = sizeOfStack;
    }
    void push(int data){
        if(isFull()){
            System.out.println("Stack Overflow");
        }
        else{
            top = data;
            index++;
            stack[index] = top;
        }
    }
    int pop(){
        if(isEmpty()){
            System.out.println("Stack Underflow");
        }
        else{
            index--;
            top = stack[index];
        }
        return stack[index + 1];
    }
    boolean isEmpty(){
        if(index == -1) return true;
        else return false;
    }
    boolean isFull(){
        if(index == sizeOfStack - 1) return true;
        else return false;
    }
    void showStackData(){
        for(int i = 0; i <= index; i++){
            System.out.print(stack[i] + " ");
        }
        System.out.println();
    }
}

public class First {
    public static void main(String[] args){
        Stack stack = new Stack(5);

        stack.push(3);
        stack.push(7);
        stack.push(9);
        stack.showStackData();
    }
}
