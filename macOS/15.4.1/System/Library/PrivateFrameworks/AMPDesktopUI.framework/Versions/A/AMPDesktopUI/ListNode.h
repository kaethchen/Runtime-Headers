@class NSArray, NSObject;

@interface ListNode : NSObject

@property (weak, nonatomic) ListNode *parent;
@property (retain, nonatomic) NSObject *item;
@property (retain, nonatomic) NSArray *children;

- (void).cxx_destruct;
- (void)addChildren:(id)a0;

@end
