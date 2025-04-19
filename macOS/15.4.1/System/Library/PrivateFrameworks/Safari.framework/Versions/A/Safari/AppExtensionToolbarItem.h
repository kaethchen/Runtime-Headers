@class NSUUID, NSString, NSArray, SFSafariExtensionRemoteViewController, SafariAppExtensionsController, NSImage, NSPopover, NSMapTable, BrowserWindowController;

@interface AppExtensionToolbarItem : NSObject <SafariExtensionPerSiteAccessViewControllerDelegate, NSPopoverDelegate, SFSafariExtensionRemoteViewControllerDelegate> {
    NSMapTable *_browserWindowControllerToToolbarItemMap;
    NSPopover *_visiblePopover;
    id _queuedSender;
    BrowserWindowController *_queuedBrowserWindowController;
    NSPopover *_perSiteAccessPopup;
    SafariAppExtensionsController *_appExtensionsController;
}

@property (readonly, copy, nonatomic) NSString *toolbarIdentifier;
@property (readonly, copy, nonatomic) NSString *toolbarItemUniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *extensionUUID;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSArray *allToolbarItems;
@property (retain, nonatomic) SFSafariExtensionRemoteViewController *remotePopoverViewController;
@property (readonly, nonatomic) BOOL isShowingPerSiteAccessPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniqueToolbarItemIdentifier:(id)a0 toolbarIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)safariExtensionRemoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)insertIntoToolbarWithExtension:(id)a0;
- (void)_closePerSiteAccessPopupIfNecessary;
- (BOOL)_requiresBadgeToBeShownForExtension:(id)a0 onPageWithURL:(id)a1;
- (void)_updateNewExtensionBadgeStateForBrowserWindowController:(id)a0;
- (void)didSelectPerSiteAccess:(long long)a0 forExtension:(id)a1 inBrowserViewController:(id)a2 withDomains:(id)a3;
- (id)initWithIdentifier:(id)a0 composedExtensionIdentifier:(id)a1 extensionUUID:(id)a2 label:(id)a3 image:(id)a4 action:(id)a5 extensionsController:(id)a6;
- (void)insertIntoPrivateToolbar;
- (void)performClickActionWithSender:(id)a0 inWindowController:(id)a1;
- (void)removeFromPrivateToolbar;
- (void)removeFromToolbar;
- (id)toolbarItemForBrowserWindowController:(id)a0;
- (id)toolbarItemForBrowserWindowController:(id)a0 forToolbar:(BOOL)a1;
- (id)toolbarItemWithUUID:(id)a0;
- (void)validateExtensionToolbarItem:(id)a0;

@end
