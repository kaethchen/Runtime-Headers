@interface _PSBlockedHandlesCache : NSObject {
    id /* block */ _isHandleBlocked;
}

+ (id)sharedBlockedHandlesCache;

- (id)init;
- (void).cxx_destruct;
- (void)rebuildCacheWithBlockedHandles:(id)a0;
- (void)beginSyncingWithTU;
- (void)handlePrivacyManagerChangeNotification:(id)a0;
- (BOOL)isHandleBlocked:(id)a0;
- (void)rebuildCacheFromPrivacyManager;

@end
