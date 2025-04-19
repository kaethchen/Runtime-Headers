@protocol STProtectedControlDelegate;

@interface STProtectedSegmentedControl : NSSegmentedControl

@property (nonatomic) long long selectedSegmentIndex;
@property (weak) id<STProtectedControlDelegate> actionCancelDelegate;

- (void).cxx_destruct;
- (long long)selectedSegment;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;

@end
