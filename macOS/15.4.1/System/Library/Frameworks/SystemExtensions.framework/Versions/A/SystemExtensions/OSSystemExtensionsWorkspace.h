@class NSMutableDictionary, NSMutableSet, OSSystemExtensionsWorkspaceClient, NSString;

@interface OSSystemExtensionsWorkspace : NSObject <_OSSystemExtensionsWorkspaceServerToClientInterface>

@property (class, readonly) OSSystemExtensionsWorkspace *sharedWorkspace;

@property (retain, nonatomic) OSSystemExtensionsWorkspaceClient *sharedConnection;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) NSMutableDictionary *stateForObserver;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_callForEachObserverWithLock:(id /* block */)a0;
- (BOOL)_updateState:(unsigned long long)a0 forObserver:(id)a1 extensionInfo:(id)a2;
- (BOOL)addObserver:(id)a0 error:(id *)a1;
- (id)cleanupOrphanedSystemExtensionsWithError:(id *)a0;
- (void)systemExtensionWillBecomeDisabled:(id)a0;
- (void)systemExtensionWillBecomeEnabled:(id)a0;
- (void)systemExtensionWillBecomeInactive:(id)a0;

@end
