@interface MCMDoublyLinkedListNode : NSObject

@property (retain, nonatomic) id data;
@property (retain, nonatomic) id key;
@property (weak, nonatomic) MCMDoublyLinkedListNode *prev;
@property (retain, nonatomic) MCMDoublyLinkedListNode *next;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 data:(id)a1;

@end
