@class NSString, BKSTerminationAssertion;

@interface FBSApplicationTerminationAssertion : NSObject {
    BKSTerminationAssertion *_assertion;
    long long _assertionState;
}

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) long long assertionState;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithBundleID:(id)a0 reason:(id)a1 acquisitionHandler:(id /* block */)a2;

@end
