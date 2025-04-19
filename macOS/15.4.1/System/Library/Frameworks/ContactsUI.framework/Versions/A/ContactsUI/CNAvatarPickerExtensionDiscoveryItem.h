@class NSUUID, NSExtension, NSRemoteViewController;

@interface CNAvatarPickerExtensionDiscoveryItem : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSUUID *requestIdentifier;

- (void).cxx_destruct;

@end
