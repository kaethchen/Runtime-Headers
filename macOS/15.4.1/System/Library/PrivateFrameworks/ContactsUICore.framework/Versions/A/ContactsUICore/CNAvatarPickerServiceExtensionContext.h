@class NSString;
@protocol CNAvatarPickerServiceExtensionProtocol;

@interface CNAvatarPickerServiceExtensionContext : NSExtensionContext <CNAvatarPickerServiceExtensionProtocol>

@property (weak, nonatomic) id<CNAvatarPickerServiceExtensionProtocol> exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)remoteProxy;
- (void)overrideUserInterfaceStyle:(long long)a0;
- (void)setCurrentMemojiMetadata:(id)a0;
- (void)setSelectedRecordIdentifier:(id)a0;
- (void)setSetupUserAvatarRecords:(id)a0;

@end
