//implement a singly linked list

function LinkedList(){
  this.head = null;
}


LinkedList.prototype.push = function(val){
  //create memory reference to next node
    var node = {
       value: val,
       next: null
    }

    let current;
    // If there are no nodes in the linked list, set the given value as the list's head
    if(!this.head){
      this.head = node;
    }
    else {
      current = this.head;
      //chains the next reference until reaching the null pointer at the end of the list
      while(current.next){
        current = current.next;
      }
      current.next = node;
    }
  }


const list = new LinkedList();

list.push(1)
list.push(2)

console.log(list.head)
console.log(list.head.next)
