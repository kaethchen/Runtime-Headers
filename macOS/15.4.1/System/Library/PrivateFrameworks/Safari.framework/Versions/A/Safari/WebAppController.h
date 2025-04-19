@class SFContentBlockerManager, NSString, SafariWebExtensionsController, WebAppDocumentController, NSMenu, NSMenuItem, SafariContentBlockerAppExtensionsController;

@interface WebAppController : NSObject <NSMenuDelegate, NSApplicationDelegate> {
    WebAppDocumentController *_webAppDocumentController;
    SafariContentBlockerAppExtensionsController *_contentBlockerAppExtensionsController;
    NSMenuItem *_reloadWithInvertedContentBlockersMenuItem;
    BOOL _hasFinishedLaunching;
}

@property (weak) NSMenu *fileMenu;
@property (weak) NSMenu *viewMenu;
@property (weak) NSMenuItem *applicationMenuItem;
@property (weak) NSMenuItem *aboutMenuItem;
@property (weak) NSMenuItem *hideMenuItem;
@property (weak) NSMenuItem *quitMenuItem;
@property (weak) NSMenuItem *shareMenuItem;
@property (weak) NSMenuItem *reloadMenuItem;
@property (weak) NSMenuItem *newWindowMenuItem;
@property (weak) NSMenuItem *fileMenuFirstSeparatorItem;
@property (readonly, nonatomic) SFContentBlockerManager *contentBlockerManager;
@property (readonly, nonatomic) SafariWebExtensionsController *webExtensionsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_applicationIdentifier;
- (id)_scope;
- (void)applicationWillFinishLaunching:(id)a0;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (void)application:(id)a0 openURLs:(id)a1;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (id)applicationDockMenu:(id)a0;
- (void)applicationWillBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)_loadEnabledContentBlockers;
- (id)_pathFromScope:(id)a0;
- (void)_addReloadWithInvertedContentBlockersMenuItem;
- (void)_addShortcutsToMenu:(id)a0 startingAtIndex:(unsigned long long)a1;
- (void)_extensionEnabledStateDidChange:(id)a0;
- (void)_ingestUniversalLinks;
- (id)_jsonDataByDomainNameFromJSONData:(id)a0 host:(id)a1;
- (void)_loadEnabledWebExtensions;
- (void)_reloadWithInvertedContentBlockersSetting;
- (void)_updateShortcutsMenuItems;
- (void)_updateTemplateBundleIfNeeded;
- (void)backForwardButtonClicked:(id)a0;
- (void)manifestDidChange;
- (void)orderFrontTemplateAboutPanel:(id)a0;
- (void)setShouldShowToolbar:(BOOL)a0;
- (void)shortcutMenuItemClicked:(id)a0;
- (void)showKeyboardShortcuts:(id)a0;
- (void)showPreferences:(id)a0;
- (void)showSharingServicePicker:(id)a0;
- (void)toggleStatusBar:(id)a0;
- (void)updateMenuBar;

@end
