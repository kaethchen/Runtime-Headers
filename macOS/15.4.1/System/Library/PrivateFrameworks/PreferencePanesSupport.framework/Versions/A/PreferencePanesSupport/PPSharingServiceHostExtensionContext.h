@class NSString;

@interface PPSharingServiceHostExtensionContext : NSExtensionContext <PPSharingServiceHostExtensionContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;


@end
