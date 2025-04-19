@class NSString;

@interface BridgeOSInstallController : NSObject

@property (retain) NSString *client;

+ (BOOL)currentHardwareHasBridgeOS;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (BOOL)checkForUpdateFailureWithError:(id *)a0;
- (BOOL)checkForPendingUpdateWithError:(id *)a0;
- (id)_queryCurrentStateWithError:(id *)a0;
- (id)cancelPendingUpdate;
- (BOOL)checkForPreparedUpdateWithError:(id *)a0;
- (double)estimatedTimeRequiredForPrepareWithApply:(BOOL)a0 options:(id)a1;
- (void)prepareUpdateWithPackageSpecifiers:(id)a0 apply:(BOOL)a1 options:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (BOOL)updateAvailableForPackageSpecifiers:(id)a0;
- (BOOL)updatePreparedForPackageSpecifiers:(id)a0;

@end
