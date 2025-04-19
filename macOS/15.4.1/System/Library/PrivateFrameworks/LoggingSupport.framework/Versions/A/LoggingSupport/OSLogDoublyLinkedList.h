@class OSLogDoublyLinkedListNode;

@interface OSLogDoublyLinkedList : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) OSLogDoublyLinkedListNode *head;
@property (retain, nonatomic) OSLogDoublyLinkedListNode *tail;

- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)addToTail:(id)a0;
- (id)removeFromHead;
- (void)removeNodeAndAddToTail:(id)a0;

@end
