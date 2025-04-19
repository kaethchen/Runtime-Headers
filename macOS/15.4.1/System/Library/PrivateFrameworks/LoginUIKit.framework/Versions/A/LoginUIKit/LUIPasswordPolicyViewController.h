@class NSImageView, NSString, NSView, NSTextField, NSArray;

@interface LUIPasswordPolicyViewController : NSObject {
    NSArray *_topLevelObjects;
}

@property (copy) NSString *policyIdentifier;
@property (retain) NSView *policyView;
@property (retain) NSImageView *policySatisfiedImageView;
@property (retain) NSTextField *policyDescriptionTextField;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
