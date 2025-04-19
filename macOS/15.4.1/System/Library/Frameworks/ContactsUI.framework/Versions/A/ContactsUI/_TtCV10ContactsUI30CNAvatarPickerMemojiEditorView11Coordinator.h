@interface _TtCV10ContactsUI30CNAvatarPickerMemojiEditorView11Coordinator : NSObject <CNAvatarPickerExtensionViewControllerDelegate> {
    void /* unknown type, empty encoding */ didCancel;
    void /* unknown type, empty encoding */ didSelectItem;
    void /* unknown type, empty encoding */ didCreateAvatarForSetupUser;
    void /* unknown type, empty encoding */ didDeleteAvatarForSetupUser;
}

- (id)init;
- (void).cxx_destruct;
- (void)avatarPickerExtensionDidSelectItemWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:(id)a0 identifier:(id)a1;
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(id)a0;
- (void)avatarPickerExtensionDidFinishWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(id)a0;

@end
