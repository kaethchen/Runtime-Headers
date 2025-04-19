@interface Navigation.MNNavigationServiceCallback_DidUpdateUpcomingAnchorPointIndex : MNNavigationServiceCallbackParameters

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ anchorPointIndex;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchorPointIndex:(long long)a0;

@end
