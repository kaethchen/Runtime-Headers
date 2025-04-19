@class NSXPCListener, NSString, NSMutableDictionary, NSURL, _NSPersistentUIStoreDirectoryMapper;

@interface _NSPersistentUIStorageServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    _NSPersistentUIStoreDirectoryMapper *_directoryMapper;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_activeConnectionByURL;
}

@property (class, readonly) _NSPersistentUIStorageServiceListener *sharedListener;

@property (readonly, copy) NSURL *savedApplicationStateDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (id)_activeConnectionForURL:(id)a0;
- (id)_activeConnections;
- (void)_addActiveConnection:(id)a0 forURL:(id)a1;
- (void)_removeConnectionIfActive:(id)a0 forURL:(id)a1;
- (void)flushAllServicesImmediately;
- (id)persistentStateDirectoryURLForASN:(struct __LSASN { } *)a0;
- (BOOL)setUpConnection:(id)a0;

@end
