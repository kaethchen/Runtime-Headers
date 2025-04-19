@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CXCallDirectoryManager : NSObject

@property (class, readonly) CXCallDirectoryManager *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *defaultConnection;
@property (retain, nonatomic) NSXPCConnection *maintenanceConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanUpLiveLookupDataWithCompletionHandler:(id /* block */)a0;
- (void)compactStoreWithCompletionHandler:(id /* block */)a0;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)fetchLiveBlockingInfoForHandle:(id)a0 timeout:(double)a1;
- (id)firstEnabledLiveBlockingExtensionIdentifierForPhoneNumber:(id)a0 timeout:(double)a1;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)a0 cacheOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)a0 cacheOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)getLastUpdatedCallDirectoryInfoWithCompletionHandler:(id /* block */)a0;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)openSettingsWithCompletionHandler:(id /* block */)a0;
- (void)reloadExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setEnabled:(BOOL)a0 forExtensionWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setPrioritizedExtensionIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)synchronizeExtensionsWithCompletionHandler:(id /* block */)a0;

@end
