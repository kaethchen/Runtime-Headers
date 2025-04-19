@interface MNNavigationServiceCallback_DidUpdateStepIndex : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic) unsigned long long segmentIndex;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
