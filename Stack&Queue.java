class St{
  int arr[];
  int top = -1;
  int capacity;

  St(int size){
    this.capacity = size;
    this.arr = new int[this.capacity];
  }

  void push(int d){
    if(top < this.capacity){
      top++;
      arr[top] = d;
    }
    else{
      System.out.println("Index exceded max capacity..!");
      return;
    }
    return;
  }

  int pop(){
    if(top == -1){
      System.out.print("No Element to pop!");
      return 0;
    }
  int topVal = arr[top];
  top--;
  return topVal;
  }
}

class Q{
  int arr[];
  int back = 0;
  int front = 0;
  int capacity = 0;

  Q(int size){
    this.capacity = size;
    arr = new int[this.capacity];
    // this.front = capacity -1;
  }

  void push(int d){
    if(back < this.capacity){
      arr[back] = d;
      back++;
    }
    else{
      System.out.println("max Capacity exceeded..!");
    }
  return;
  }

  int popFront(){
    if(back == -1){
      System.out.println("No element to pop..!");
      return 0;
    }
    else{
      int ans = arr[front];
      front++; 
      return ans;
    }
  }
}

class Main {
  public static void main(String[] args) {
    System.out.println("Hello world!");

    St st_1 = new St(10);
    Q q_1 = new Q(10);

    for(int i =0; i<10; i++){
      st_1.push(i);
    }
    for(int i =0; i<10; i++){
      System.out.println(st_1.pop());
    }

    System.out.println("------------ Q");

    for(int i =0; i<10; i++){
      q_1.push(i);
    }
    for(int i =0; i<10; i++){
      System.out.println(q_1.popFront());
    }
  }
}
