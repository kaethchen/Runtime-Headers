@interface CLServiceSessionDiagnostic : NSObject {
    unsigned long long _diagnostics;
}

@property (readonly, nonatomic) BOOL authorizationDenied;
@property (readonly, nonatomic) BOOL authorizationDeniedGlobally;
@property (readonly, nonatomic) BOOL authorizationRestricted;
@property (readonly, nonatomic) BOOL insufficientlyInUse;
@property (readonly, nonatomic) BOOL serviceSessionRequired;
@property (readonly, nonatomic) BOOL fullAccuracyDenied;
@property (readonly, nonatomic) BOOL alwaysAuthorizationDenied;
@property (readonly, nonatomic) BOOL authorizationRequestInProgress;

- (void)dealloc;
- (id)initWithDiagnostics:(unsigned long long)a0;

@end
