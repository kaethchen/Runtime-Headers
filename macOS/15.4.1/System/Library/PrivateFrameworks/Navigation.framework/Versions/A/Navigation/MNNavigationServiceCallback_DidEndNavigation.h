@interface MNNavigationServiceCallback_DidEndNavigation : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long reason;

+ (BOOL)supportsSecureCoding;
+ (id)didEndNavigationWithReason:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
