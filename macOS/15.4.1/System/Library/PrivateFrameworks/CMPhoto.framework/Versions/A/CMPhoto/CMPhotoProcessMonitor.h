@interface CMPhotoProcessMonitor : NSObject

+ (BOOL)isForegroundApp;
+ (BOOL)isManagedByRunningBoard;
+ (id)getShared;
+ (BOOL)isCameraCaptured;
+ (BOOL)isDeferredMediad;

- (void)dealloc;
- (id)init;
- (void)_takeOSTransactionForContext:(void *)a0;
- (void)_takeRBSAssertionForContext:(void *)a0 until:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (int)registerBackgroundNotificationHandlerForContext:(void *)a0 handler:(id /* block */)a1;
- (int)releaseAssertionForContext:(void *)a0;
- (int)takeAssertionUntilTime:(unsigned long long)a0 forContext:(void *)a1;
- (int)unregisterBackgroundNotificationForContext:(void *)a0;
- (void)waitForPendingNotifications;

@end
