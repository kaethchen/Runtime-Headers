@interface _AXFStackNode : NSObject

@property (retain, nonatomic) id object;
@property (weak, nonatomic) _AXFStackNode *prev;
@property (retain, nonatomic) _AXFStackNode *next;

- (void).cxx_destruct;

@end
