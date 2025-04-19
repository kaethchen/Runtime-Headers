@interface WidgetKit._WidgetExtensionBaseContext : NSExtensionContext <EXExtensionContextHostConfigurationProviding>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)_shouldSendHostApplicationStateNotifications;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;

@end
