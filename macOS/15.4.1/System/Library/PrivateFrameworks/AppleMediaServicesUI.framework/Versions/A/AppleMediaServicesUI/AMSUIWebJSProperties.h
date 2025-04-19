@class NSDictionary, AMSUIWebClientContext;
@protocol AMSUIWebJSPropertiesDelegate;

@interface AMSUIWebJSProperties : NSObject

@property (weak) AMSUIWebClientContext *context;
@property (retain) NSDictionary *lastAccountsExport;
@property (weak) id<AMSUIWebJSPropertiesDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)_lastConnectionReportDidChange:(id)a0;
- (void)_accessibilityPropertiesDidChange:(id)a0;
- (id)_accountsProperties;
- (id)_appearanceProperties;
- (id)_clientOptionsProperties;
- (id)_deviceProperties;
- (id)_hexStringFromColor:(id)a0;
- (id)_pluginProperties;
- (id)_processProperties;
- (id)_propertiesForClientInfo:(id)a0;
- (id)generateProperties;

@end
