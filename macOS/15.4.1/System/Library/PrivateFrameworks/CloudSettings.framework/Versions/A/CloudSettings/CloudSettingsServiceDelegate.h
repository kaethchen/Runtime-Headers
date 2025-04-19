@class NSString, CloudSettingsService;

@interface CloudSettingsServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (retain) CloudSettingsService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithStoreIdentifier:(id)a0 settingsMediator:(id)a1;

@end
