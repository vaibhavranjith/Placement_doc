//https://www.youtube.com/watch?v=Wg8IiY1LbII check this video out contains an O(1) amortized worst case.

/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // Your Code
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code  
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        if(!s2.empty()){
            int ret=s2.top();
            s2.pop();
    
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return ret;
        }
        return -1;
    
}
