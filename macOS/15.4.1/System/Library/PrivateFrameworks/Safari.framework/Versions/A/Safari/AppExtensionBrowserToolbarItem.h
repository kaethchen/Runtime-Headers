@class NSUUID, BrowserWindowController, NSString, NSImage, SafariAppExtensionsController, AppExtensionToolbarItem;

@interface AppExtensionBrowserToolbarItem : BrowserToolbarItem <BadgedButtonDelegate> {
    NSImage *_activeImage;
    SafariAppExtensionsController *_appExtensionsController;
}

@property (readonly, nonatomic) BOOL canBeDisabledByExtension;
@property (readonly, weak, nonatomic) AppExtensionToolbarItem *appExtensionToolbarItem;
@property (readonly, weak, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIcon:(id)a0;
- (void)showPopover;
- (void)validate;
- (void)updateToolTip;
- (void)setBadgeText:(id)a0;
- (BOOL)_extensionNeedsAccessToCurrentURL;
- (void)_manageExtension:(id)a0;
- (void)_performClickAction:(id)a0;
- (void)_setImage:(id)a0 forButton:(id)a1;
- (id)badgedButton:(id)a0 menuForEvent:(id)a1;
- (void)displayMenu;
- (id)initWithExtensionToolbarItem:(id)a0 browserWindowController:(id)a1 extensionsController:(id)a2;
- (void)setShowsActiveExtensionIcon:(BOOL)a0;
- (void)setShowsNewExtensionBadge:(BOOL)a0;

@end
