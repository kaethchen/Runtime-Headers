@class NSXPCListener, NSString;

@interface _LSServerSettingsStore : _LSInProcessSettingsStore <NSXPCListenerDelegate>

@property (readonly) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_internalQueue_initializeDatabase;
- (void)_internalQueue_insertIdentifier:(id)a0 userElection:(unsigned char)a1;
- (void)_internalQueue_insertIdentifier:(id)a0 userElection:(unsigned char)a1 timestamp:(double)a2;
- (void)_internalQueue_loadDatabase;
- (void)_internalQueue_loadPluginKitDatabase;
- (void)_internalQueue_resetUserElection;
- (void)postSettingsChangeNotification;
- (BOOL)resetUserElectionsWithError:(id *)a0;
- (void)resetUserElectionsWithReply:(id /* block */)a0;
- (BOOL)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 error:(id *)a2;
- (void)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 reply:(id /* block */)a2;
- (id)settingsStoreConfigurationForProcessWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)userElectionForExtensionKey:(id)a0 reply:(id /* block */)a1;

@end
