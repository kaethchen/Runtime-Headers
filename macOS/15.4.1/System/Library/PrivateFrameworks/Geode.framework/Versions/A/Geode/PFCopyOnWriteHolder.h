@interface PFCopyOnWriteHolder : NSObject {
    int _interestCount;
}

@property (readonly, nonatomic) id object;

- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)beginInterest;
- (void)endInterest;
- (BOOL)hasMultipleInterests;

@end
