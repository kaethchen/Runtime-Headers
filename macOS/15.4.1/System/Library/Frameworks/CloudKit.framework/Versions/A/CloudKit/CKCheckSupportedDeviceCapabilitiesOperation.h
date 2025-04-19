@class CKDeviceCapabilityCheckOptions, NSArray, NSString, NSMutableDictionary, CKCheckSupportedDeviceCapabilitiesOperationInfo;
@protocol CKCheckSupportedDeviceCapabilitiesOperationCallbacks;

@interface CKCheckSupportedDeviceCapabilitiesOperation : CKDatabaseOperation <CKCheckSupportedDeviceCapabilitiesOperationCallbacks> {
    NSMutableDictionary *_recordZoneErrors;
    NSMutableDictionary *_resultsByRecordZoneID;
}

@property (readonly, nonatomic) id<CKCheckSupportedDeviceCapabilitiesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKCheckSupportedDeviceCapabilitiesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perResultBlock_wrapper;
@property (copy, nonatomic) id /* block */ checkSupportedDeviceCapabilitiesCompletionBlock_wrapper;
@property (readonly, copy, nonatomic) NSArray *zoneIDs;
@property (readonly, copy, nonatomic) NSArray *desiredCapabilitySets;
@property (readonly, copy, nonatomic) CKDeviceCapabilityCheckOptions *options;
@property (copy, nonatomic) id /* block */ perResultBlock;
@property (copy, nonatomic) id /* block */ checkSupportedDeviceCapabilitiesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleSupportedDeviceCapabilityCheckResultForRecordZoneID:(id)a0 capabilitySet:(id)a1 result:(id)a2 error:(id)a3;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithDesiredCapabilities:(id)a0 zoneIDs:(id)a1 options:(id)a2;
- (id)initWithDesiredCapabilitySets:(id)a0 zoneIDs:(id)a1 options:(id)a2;
- (void)performCKOperation;
- (void)setCheckSupportedDeviceCapabilitiesCompletionBlockIVar:(id /* block */)a0;

@end
