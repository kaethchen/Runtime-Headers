@interface Navigation.MNNavigationServiceCallback_DidUpdateNavTrayGuidance : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ navTrayGuidanceEvent;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNavTrayGuidanceEvent:(id)a0;

@end
