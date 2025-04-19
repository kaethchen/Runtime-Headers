@class CLLocation;

@interface CLUpdate : NSObject {
    unsigned long long _diagnostics;
}

@property (readonly, nonatomic) BOOL authorizationDenied;
@property (readonly, nonatomic) BOOL authorizationDeniedGlobally;
@property (readonly, nonatomic) BOOL authorizationRestricted;
@property (readonly) BOOL isStationary;
@property (readonly) BOOL stationary;
@property (readonly, nonatomic) BOOL insufficientlyInUse;
@property (readonly, nonatomic) BOOL locationUnavailable;
@property (readonly, nonatomic) BOOL accuracyLimited;
@property (readonly, nonatomic) BOOL serviceSessionRequired;
@property (readonly, nonatomic) BOOL authorizationRequestInProgress;
@property (readonly, nonatomic) CLLocation *location;

- (void)dealloc;
- (id)initWithLocation:(id)a0 diagnostics:(unsigned long long)a1;

@end
