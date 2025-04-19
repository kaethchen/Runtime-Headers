@class MNActiveRouteInfo;

@interface MNNavigationServiceCallback_DidUpdateBackgroundWalkingRoute : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNActiveRouteInfo *routeInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
