@class CWFInterface, NSString, NSMutableDictionary, NSMutableSet, CUCoalescer, NSObject, CUSystemMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APBonjourCacheManager : NSObject {
    BOOL _auditCaches;
    BOOL _cacheChanged;
    NSMutableDictionary *_cachedItems;
    NSMutableSet *_removedItems;
    NSMutableDictionary *_deviceMap;
    int _pairedPeersChangedToken;
    BOOL _pairedPeersGetting;
    NSMutableDictionary *_pairedPeersMap;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_networkSignature;
    double _networkSignatureWasValidAt;
    CUCoalescer *_writeCoaleser;
    CUSystemMonitor *_systemMonitor;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    CWFInterface *_coreWiFiInterface;
    NSObject<OS_dispatch_queue> *_coreWiFiQueue;
    BOOL _isMonitoringKnownNetworkProfile;
    BOOL _isPublicAirPlayNetwork;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ reportDeviceFoundHandler;
@property (copy, nonatomic) id /* block */ reportDeviceLostHandler;
@property (copy, nonatomic) NSString *serviceType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_addDeviceToCache:(id)a0 pairedPeerInfo:(id)a1 event:(long long)a2;
- (void)_auditCachesIfNecessary:(id)a0 event:(long long)a1;
- (void)_cancelRetryGetPairedPeers;
- (void)_deviceFound:(id)a0 altPairedInfo:(id)a1 recheck:(BOOL)a2 event:(long long)a3;
- (void)_ensureKnownNetworkProfileMonitoringStarted;
- (void)_flushCachedItems;
- (id)_getCacheDirectoryURLCreateIfNecessary:(BOOL)a0 error:(id *)a1;
- (id)_getCacheFileURLCreateIfNecessary:(BOOL)a0 error:(id *)a1;
- (void)_handleKnownNetworkProfileUpdate:(BOOL)a0;
- (void)_migrateCacheDirectoryIfNecessary;
- (void)_networkSignatureChanged;
- (void)_pairedPeersChanged;
- (id)_readCachedItems;
- (void)_recheckDevices:(long long)a0;
- (void)_refreshCachedItems;
- (void)_refreshOrRemoveCachedItem:(id)a0;
- (void)_removeIfDuplicatesFoundOrIfNoLongerCacheable:(unsigned long long)a0 identifier:(id)a1 serialNumber:(id)a2 manufacturer:(id)a3 isCacheable:(BOOL)a4;
- (void)_replaceIfnameFromDNSString:(id)a0;
- (void)_reportCachedItemLost:(id)a0 event:(long long)a1;
- (void)_reportCachedItemsFound:(long long)a0;
- (void)_reportCachedItemsLost:(long long)a0;
- (void)_sanitizeDNSStrings:(id)a0;
- (void)_startRetryGetPairedPeersTimer;
- (void)_updateCachedDeviceInfoWhenRealDeviceIsFound:(id)a0 event:(long long)a1;
- (void)_updateLastSeenTimestamp:(id)a0;
- (BOOL)_writeCachedItems:(id)a0;
- (void)cacheHKPeerIfNeeded:(id)a0 pairedPeerInfo:(id)a1;
- (void)deviceFound:(id)a0;
- (BOOL)deviceLost:(id)a0;
- (void)forceReportCachedDevices;

@end
