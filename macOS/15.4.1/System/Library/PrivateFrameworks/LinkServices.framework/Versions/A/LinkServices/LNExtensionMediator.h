@class NSString;

@interface LNExtensionMediator : NSObject <LNMediator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedQueue;
+ (void)getConnectionHostInterfaceForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getWidgetKitXPCListenerEndpointForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getXPCListenerEndpointForBundleIdentifier:(id)a0 extensionMediatorBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;


@end
