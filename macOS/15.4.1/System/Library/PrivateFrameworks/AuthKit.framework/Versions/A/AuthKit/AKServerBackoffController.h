@protocol AKServerBackoffControllerDelegate;

@interface AKServerBackoffController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serverBackoffLock;
}

@property (weak, nonatomic) id<AKServerBackoffControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)_objectForKey:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (id)_sanitizeServerBackoffInfoDict:(id)a0;
- (id)_clientInfoForContext:(id)a0;
- (id)_clientInfoForContext:(id)a0 matchingClients:(id)a1;
- (BOOL)_isBackoffSupported;
- (BOOL)_isStaleClientInfo:(id)a0;
- (id)_serverBackoffDefaults;
- (BOOL)_shouldBackoffContext:(id)a0 matchingClients:(id)a1;
- (void)_updateServerBackoffInfoWithDictionary:(id)a0;
- (id)_updatedServerBackoffInfoForClients:(id)a0 cachedClients:(id)a1;
- (void)clearServerBackoffInfoCache;
- (void)configureFromHeaderFields:(id)a0;
- (void)reportTelemetryForContext:(id)a0 backoffType:(unsigned long long)a1;
- (id)serverBackoffInfoCache;
- (id)serverBackoffInfoForContext:(id)a0;
- (BOOL)shouldBackoffContext:(id)a0;

@end
