@class GKPlayerInternal, GKDaemonProxy;

@interface GKClientPreferencesSupport : NSObject <GKPreferencesSupport>

@property (readonly) GKDaemonProxy *daemonProxy;
@property (readonly) BOOL shouldRefreshPreferencesAfterBackgrounding;
@property (readonly) GKPlayerInternal *localPlayerInternal;

- (id)valueRestrictionForKey:(id)a0 handler:(id /* block */)a1;
- (void)didSetEnvironment;
- (void)didSetInboxContactsOnlyWithRefresh:(BOOL)a0;
- (void)didSetStoreBagUrl;
- (BOOL)restrictionEnabledForKey:(id)a0;
- (BOOL)restrictionEnabledForKey:(id)a0 applicationID:(id)a1;
- (id)valueRestrictionForKey:(id)a0;

@end
