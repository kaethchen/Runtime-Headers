@interface GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving>

@property (class, nonatomic, readonly) GKMatchBackgroundAssertionManager *shared;

@property (nonatomic, retain) void /* unknown type, empty encoding */ activeAssertion;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)assertionWillInvalidate:(id)a0;
- (void)acquire;

@end
