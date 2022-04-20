package First;

class Stack{
    
    private int[] stack;
    int top;
    int index = -1;
    int sizeOfStack;
    
    Stack(int sizeOfStack){     // this is the constructor of the class Stack
        stack = new int[sizeOfStack];
        this.sizeOfStack = sizeOfStack;
    }
    
    void push(int data){        // this method adds data to the stack
        if(isFull()){
            System.out.println("Stack Overflow");
        }
        else{
            top = data;
            index++;
            stack[index] = top;
        }
    }
    
    int pop(){                  // this method pops out the latest data from the stack
        if(isEmpty()){
            System.out.println("Stack Underflow");
        }
        else{
            index--;
            top = stack[index];
        }
        return stack[index + 1];
    }
    
    boolean isEmpty(){          // this method checks if the stack is empty or not
        if(index == -1) return true;
        else return false;
    }
    
    boolean isFull(){           // this method checks if the stack is full or not
        if(index == sizeOfStack - 1) return true;
        else return false;
    }
    
    void showStackData(){       // this method shows all the recent values of the stack
        for(int i = 0; i <= index; i++){
            System.out.print(stack[i] + " ");
        }
        System.out.println();
    }
    
}

public class First {
    public static void main(String[] args){
        
        Stack stack = new Stack(5);     // stack is the object of class Stack

        stack.push(3);
        stack.push(7);
        stack.push(9);
        stack.showStackData();
        
    }
}
