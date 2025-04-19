@class GEOResumeRouteHandle;

@interface MNNavigationServiceCallback_DidUpdateResumeRouteHandle : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;

+ (BOOL)supportsSecureCoding;
+ (id)didUpdateResumeRouteHandle:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
