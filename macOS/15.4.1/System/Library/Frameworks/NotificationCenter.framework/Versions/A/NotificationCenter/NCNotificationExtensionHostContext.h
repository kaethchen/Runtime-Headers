@class NSString;

@interface NCNotificationExtensionHostContext : NSExtensionContext <NCRemoteViewExtensionContextProtocol>

@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)hostInterface;
+ (id)serviceInterface;

@end
