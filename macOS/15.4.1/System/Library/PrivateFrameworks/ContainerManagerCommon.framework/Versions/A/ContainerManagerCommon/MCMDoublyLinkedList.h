@class MCMDoublyLinkedListNode;

@interface MCMDoublyLinkedList : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) MCMDoublyLinkedListNode *head;
@property (retain, nonatomic) MCMDoublyLinkedListNode *tail;

- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)addToTail:(id)a0;
- (id)removeFromHead;
- (void)removeNodeAndAddToTail:(id)a0;

@end
