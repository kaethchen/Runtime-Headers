@interface UAFInstrumentationProvider : NSObject

+ (id)defaultDeviceId;
+ (id)_constructNamespaceStatusEventForNamespace:(unsigned int)a0 withClient:(id)a1;
+ (id)_constructSelfAssetSet:(id)a0 storeManager:(id)a1;
+ (void)_emitAssetDailyStatusEvent:(id)a0;
+ (int)_getAssetSource:(id)a0;
+ (id)getDeviceMetadata;
+ (id)getPersistedDeviceId;
+ (void)logAvailableAssetDailyStatus;
+ (void)logAvailableAssetDailyStatusWithFeedbackLogger:(id)a0 completion:(id /* block */)a1;
+ (void)logDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1 retryCount:(unsigned int)a2;
+ (id)logSubscriptionsStatus;
+ (void)logUAFAssetSetDailyStatus:(id)a0 assetSetArrived:(BOOL)a1;

@end
