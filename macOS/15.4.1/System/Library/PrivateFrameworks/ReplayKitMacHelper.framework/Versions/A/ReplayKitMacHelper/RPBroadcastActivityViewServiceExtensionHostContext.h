@class NSString, RPBroadcastActivityHostRemoteNSViewController;

@interface RPBroadcastActivityViewServiceExtensionHostContext : NSExtensionContext <RPBroadcastActivityViewServiceHostProtocol>

@property (retain, nonatomic) RPBroadcastActivityHostRemoteNSViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

@end
