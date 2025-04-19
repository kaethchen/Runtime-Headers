@interface GPSGameFilter : NSObject

+ (id)queue;
+ (void)_onqueue_processLaunchTaskQueue;
+ (id)launchTaskQueue;
+ (void)_onqueue_enqueueLaunchTask:(id)a0;
+ (void)_onqueue_processLaunchTask:(id)a0 mobileAssetInfo:(id)a1;
+ (BOOL)filterApplication:(id)a0 withLaunchingApplication:(struct __LSASN { } *)a1 sessionID:(int)a2;
+ (void)mobileAssetRetrieved;
+ (id)mobileAssetRetriever;

@end
