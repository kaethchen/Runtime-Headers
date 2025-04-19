@class NSString, NSMutableArray, NSLock;

@interface AppleTypeCRetimerDFUChecker : AppleTypeCRetimerUpdaterHelper {
    BOOL _forceDFU;
    NSString *_deviceNamePrefix;
    NSMutableArray *_notReadyRouterIDs;
    NSLock *_notReadyRouterIDsLock;
}

- (void).cxx_destruct;
- (BOOL)doCheck;
- (BOOL)checkDeferredRouterIDs;
- (BOOL)doCheckForRouterID:(unsigned char)a0 allowsNotReady:(BOOL)a1;
- (BOOL)doCheckForRouterIDList:(id)a0 allowsNotReady:(BOOL)a1;
- (void)initForceDFU;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 deviceNamePrefix:(id)a3;
- (BOOL)waitForACEsWithRouterIDs:(id)a0;

@end
