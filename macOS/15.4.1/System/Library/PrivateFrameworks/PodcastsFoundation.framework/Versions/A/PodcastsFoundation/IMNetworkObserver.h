@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface IMNetworkObserver : NSObject <CoreTelephonyClientDataDelegate, IMNetworkObserverProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _networkReachabilityFlags;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_operatorName;
    struct __SCNetworkReachability { } *_reachability;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _observing;
    CoreTelephonyClient *_telephonyClient;
    struct __CTServerConnection { } *_telephonyServer;
    NSString *_dataStatusIndicator;
}

@property long long networkType;
@property (readonly) NSString *connectionTypeHeader;
@property (readonly, getter=isObserving) BOOL observing;
@property (readonly) unsigned int networkReachabilityFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_networkObserverLogConfig;
+ (BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (id)operatorName;
- (void)currentDataSimChanged:(id)a0;
- (void)internetDataStatus:(id)a0;
- (void)beginObserving;
- (void)endObserving;
- (void)_applicationForegroundNotification:(id)a0;
- (void)_copyConnectionDataStatus:(id /* block */)a0;
- (unsigned int)_currentNetworkReachabilityFlags;
- (id)_dataStatusIndicator;
- (void)_handleTelephonyNotificationWithName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)a0;
- (long long)_networkTypeFromCTDataIndicator:(int)a0;
- (long long)_networkTypeFromDataIndicator:(id)a0;
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)a0 toValue:(unsigned int)a1;
- (void)_postTypeChangedNotificationFromValue:(long long)a0 toValue:(long long)a1;
- (void)_reloadDataStatusIndicator;
- (void)_reloadNetworkType;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)a0;
- (long long)_setNetworkType:(long long)a0;
- (void)_telephonyClient_withLockUpdateOperatorNameWithContext:(id)a0;
- (void)_telephonyServer_withLockUpdateOperatorName;
- (void)_withLockBeginObserving;
- (void)_withLockDisconnectFromReachabilityService;
- (void)_withLockDisconnectFromTelephonyServer;
- (void)_withLockEndObserving;
- (void)_withLockInitializeTelephonyServer;
- (void)_withLockInitializeWiFiNetworkReachability;
- (void)_withLockReloadOperatorName;
- (void)_withLockUpdateObservingStatus;
- (id)dataStatusIndicator;
- (BOOL)networkTypeIsCellularType:(long long)a0;
- (void)reloadNetworkType;
- (id)stringForNetworkType:(long long)a0;

@end
