@interface Navigation.MNNavigationServiceCallback_DidUpdateTargetLegIndex : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ targetLegIndex;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetLegIndex:(long long)a0;

@end
