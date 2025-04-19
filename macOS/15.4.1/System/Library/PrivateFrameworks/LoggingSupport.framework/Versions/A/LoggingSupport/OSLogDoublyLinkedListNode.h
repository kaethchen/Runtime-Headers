@interface OSLogDoublyLinkedListNode : NSObject

@property (retain, nonatomic) id data;
@property (retain, nonatomic) id key;
@property (weak, nonatomic) OSLogDoublyLinkedListNode *prev;
@property (retain, nonatomic) OSLogDoublyLinkedListNode *next;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 data:(id)a1;

@end
