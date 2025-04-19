@class RBSTerminationAssertion;

@interface MCMApplicationTerminationAssertion : NSObject

@property (retain, nonatomic) RBSTerminationAssertion *termAssertion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithBundleIdentifier:(id)a0 reason:(id)a1;

@end
