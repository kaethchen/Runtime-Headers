@class NSString, WBTabGroupManager, NSPopUpButton, NSButton;

@interface AcceptSharedTabGroupInProfileAlertController : NSObject {
    NSString *_title;
    WBTabGroupManager *_tabGroupManager;
    id /* block */ _completionHandler;
    NSButton *_openInProfileButton;
    NSPopUpButton *_profilePopUpButton;
}

+ (id)acceptSharedTabGroupInProfileDialogWithTitle:(id)a0 tabGroupManager:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)showAlert;
- (id)_buttonTitleForProfile:(id)a0;
- (id)_initWithTitle:(id)a0 tabGroupManager:(id)a1 completionHandler:(id /* block */)a2;
- (void)_sharedTabGroupProfileSelectionDidChange:(id)a0;
- (void)_updateProfilePopUpMenuItem:(id)a0 withProfile:(id)a1;
- (void)updateProfileOptions;
- (void)updateProfileWithIdentifier:(id)a0;

@end
