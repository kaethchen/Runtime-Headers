@class NSString, BrowserWindowController, NSMapTable, NSPopover;

@interface WebExtensionToolbarItem : WBSWebExtensionToolbarItem <SafariExtensionPerSiteAccessViewControllerDelegate, WBSWebExtensionToolbarItemImplementation> {
    NSMapTable *_browserWindowControllerToToolbarItemMap;
    BrowserWindowController *_popupParentBrowserWindowController;
    NSPopover *_popup;
    NSPopover *_perSiteAccessPopup;
}

@property (readonly, copy, nonatomic) NSString *toolbarItemUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *paletteLabel;
@property (readonly, nonatomic) BrowserWindowController *windowControllerForPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)validateToolbarItemInAllWindows;
- (void)_browserContentDidChange:(id)a0;
- (void)_closePerSiteAccessPopupIfNecessary;
- (void)_manageExtension:(id)a0;
- (BOOL)_showPerSiteAccessPopupIfNecessaryWithSender:(id)a0 inBrowserWindowController:(id)a1;
- (void)_updateNewExtensionBadgeStateForBrowserWindowController:(id)a0;
- (void)_updateWarningBadgeStateForBrowserWindowController:(id)a0;
- (void)didSelectPerSiteAccess:(long long)a0 forExtension:(id)a1 inBrowserViewController:(id)a2 withDomains:(id)a3;
- (void)didSelectTab:(id)a0;
- (id)initWithWebExtension:(id)a0;
- (void)insertIntoPrivateToolbar;
- (void)insertIntoToolbar;
- (id)menuForEvent:(id)a0 inBrowserWindowController:(id)a1;
- (void)performClickActionInWindowController:(id)a0;
- (void)performClickActionWithSender:(id)a0 inBrowserWindowController:(id)a1;
- (void)removeFromPrivateToolbar;
- (void)removeFromToolbar;
- (void)showExtensionPopupOrPerSitePopoverInBrowserWindowController:(id)a0;
- (void)showExtensionPopupWithSender:(id)a0 inBrowserWindowController:(id)a1;
- (BOOL)showingExtensionPopup;
- (id)toolbarItemForBrowserWindowController:(id)a0;
- (id)toolbarItemForBrowserWindowController:(id)a0 forToolbar:(BOOL)a1;
- (void)updateExtensionIconForBrowserWindowController:(id)a0;
- (void)webKitExtensionAction:(id)a0 didChangeForTab:(id)a1;

@end
