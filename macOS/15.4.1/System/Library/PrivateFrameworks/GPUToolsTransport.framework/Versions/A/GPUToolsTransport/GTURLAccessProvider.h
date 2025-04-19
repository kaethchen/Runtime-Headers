@class NSString, NSMutableDictionary, GTServiceVendor, NSObject;
@protocol OS_os_log, GTServiceProvider, GTConnectionProvider;

@interface GTURLAccessProvider : NSObject <GTURLAccessProvider> {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_registeredURLs;
    NSString *_deviceUDID;
    id<GTServiceProvider> _serviceProvider;
    id<GTConnectionProvider> _connectionProvider;
    GTServiceVendor *_serviceVendor;
}

- (void).cxx_destruct;
- (BOOL)_sharesFileSystemWith:(id)a0 remoteConnection:(id)a1;
- (void)copyIdentifier:(id)a0 toDevice:(id)a1 allowLocalURL:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)copyIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithServiceProvider:(id)a0 connectionProvider:(id)a1 serviceVendor:(id)a2;
- (id)makeURL:(id)a0;
- (void)securityScopedURLFromSandboxID:(id)a0 completionHandler:(id /* block */)a1;
- (void)transferIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)urlForPath:(id)a0;

@end
