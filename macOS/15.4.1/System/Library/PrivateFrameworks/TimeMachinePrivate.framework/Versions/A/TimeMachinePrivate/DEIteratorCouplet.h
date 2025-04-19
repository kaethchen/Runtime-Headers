@class DEItem;

@interface DEIteratorCouplet : NSObject {
    DEItem *_leftItem;
    DEItem *_rightItem;
}

@property unsigned long long depth;

+ (id)coupletWithLeftItem:(id)a0 rightItem:(id)a1;

- (void).cxx_destruct;
- (id)leftItem;
- (id)rightItem;
- (id)initWithLeftItem:(id)a0 rightItem:(id)a1;

@end
