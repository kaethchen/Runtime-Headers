@class NSString, CNAvatarPickerServiceHostContext, CNMemojiMetadata, NSArray, NSExtension, NSRemoteViewController;
@protocol CNAvatarPickerExtensionViewControllerDelegate;

@interface CNAvatarPickerExtensionViewController : NSViewController <CNAvatarPickerServiceHostProtocol>

@property (retain, nonatomic) NSString *extensionIdentifier;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) CNAvatarPickerServiceHostContext *context;
@property (retain, nonatomic) NSRemoteViewController *extensionViewController;
@property (retain, nonatomic) id extensionMatchToken;
@property (retain, nonatomic) NSString *avatarRecordIdentifier;
@property (retain, nonatomic) CNMemojiMetadata *memojiMetadata;
@property (weak, nonatomic) id<CNAvatarPickerExtensionViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *setupUserAvatarRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)memojiEditorViewControllerForAvatarRecordIdentifier:(id)a0;
+ (id)memojiPickerViewControllerForSelectedAvatarRecordIdentifier:(id)a0;
+ (id)posePickerViewControllerForAvatarRecordIdentifier:(id)a0;
+ (id)posePickerViewControllerForMemojiMetadata:(id)a0;

- (void).cxx_destruct;
- (id)inputItems;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)avatarPickerExtensionDidSelectItemWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:(id)a0 identifier:(id)a1;
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(id)a0;
- (void)avatarPickerExtensionDidFinishWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(id)a0;
- (void)embedRemoteViewController:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0;
- (void)loadExtensionView;
- (void)themeDidChange;

@end
