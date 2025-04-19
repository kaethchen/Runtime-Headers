@class NSDictionary, NSMutableSet, NSObject, FPPacer;
@protocol OS_dispatch_queue;

@interface FPProviderDomainChangesReceiver : NSObject {
    NSMutableSet *_changesHandlers;
    NSDictionary *_providerDomainsByID;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    int _settingsChangedToken;
    FPPacer *_pacer;
    BOOL _dontLoadCacheFromDisk;
    BOOL _ignoreUpdateNotifications;
}

@property (readonly, copy) NSDictionary *cachedProviderDomainsByID;

+ (id)_sharedChangesReceiverInitIfNeeded:(BOOL)a0;
+ (BOOL)allowedToReadCacheFromDisk;
+ (id)readCacheFromDisk:(BOOL)a0;
+ (id)sharedChangesReceiver;
+ (id)sharedChangesReceiverIfAvailable;

- (void).cxx_destruct;
- (id)_init;
- (void)_t_discardCache;
- (void)_t_forceReadCacheFromDisk;
- (void)_t_ignoreUpdateNotifications:(BOOL)a0;
- (void)_t_loadCacheOnHandlerAdding:(BOOL)a0;
- (id)addChangesHandler:(id /* block */)a0;
- (void)callChangesHandlersWithProviderDomains:(id)a0 error:(id)a1;
- (BOOL)ignoreUpdateNotifications;
- (void)providerDomainsHaveChanged:(id)a0 error:(id)a1;
- (void)removeChangesHandlerToken:(id)a0;
- (void)signalChange;
- (void)updateProviderDomainsWithAttemptCount:(unsigned long long)a0;

@end
