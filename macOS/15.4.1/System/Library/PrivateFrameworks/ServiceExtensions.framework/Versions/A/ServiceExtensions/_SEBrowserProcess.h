@interface _SEBrowserProcess : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (class, nonatomic, readonly) struct { unsigned int x0[8]; } _currentAuditToken;

+ (BOOL)checkBrowserEngineEntitlementForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (BOOL)checkBrowserEngineEntitlementForCurrentProcess;

- (id)init;
- (void).cxx_destruct;

@end
