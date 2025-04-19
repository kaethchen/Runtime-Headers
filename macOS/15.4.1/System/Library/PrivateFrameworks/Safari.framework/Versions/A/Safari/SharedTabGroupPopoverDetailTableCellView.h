@class NSTextField, NSString, NSView, CNContactCardViewController, NSStackView, CNContact, NSImage, NSImageView, NSButton, CNAvatarViewController;

@interface SharedTabGroupPopoverDetailTableCellView : UnifiedFieldCompletionStyledTableCellView <CNAvatarViewDelegate> {
    NSStackView *_stackView;
    NSButton *_infoButton;
    NSImageView *_imageView;
    NSView *_avatar;
    CNAvatarViewController *_avatarViewController;
    CNContactCardViewController *_contactsView;
}

@property (copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSTextField *titleLabel;
@property (copy, nonatomic) NSImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayout:(long long)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)avatarViewControllerDidRefresh:(id)a0;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (void)_setInfoButtonColor;
- (void)_showContactInfo;
- (void)_updateStackView;

@end
