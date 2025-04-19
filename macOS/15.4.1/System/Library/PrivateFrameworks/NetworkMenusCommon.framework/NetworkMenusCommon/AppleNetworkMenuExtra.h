@class NSMenu, NSFileHandle, NSString, NSArray, NSMenuItem, AppleNetworkMenuExtraView, NSOperationQueue, NSBundle, NSMutableArray;

@interface AppleNetworkMenuExtra : NSMenuExtra <NSMenuDelegate> {
    NSBundle *mBundle;
    NSMutableArray *mImages;
    NSArray *mAlternateImages;
    NSMenu *mMenu;
    NSMenuItem *mShowStatusMenuItem;
    NSMenuItem *mShowTimeMenuItem;
    NSMenuItem *mNoConfigsMenuItem;
    struct __SCPreferences { } *mPrefs;
    struct __CFRunLoopSource { } *mRunLoopSource;
    NSFileHandle *mFileHandle;
    AppleNetworkMenuExtraView *mMenuBarView;
    NSArray *mControllers;
    BOOL mProcessingPrefChanges;
    NSOperationQueue *mRefreshQueue;
    NSMutableArray *mUnprocessedSCControllers;
    NSMutableArray *mUnprocessedNEControllers;
    NSArray *mNEControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNetworkExtensionServiceQueue;

- (void)dealloc;
- (void *)copyValueForKey:(id)a0;
- (id)menu;
- (struct __SCPreferences { } *)preferences;
- (id)initWithBundle:(id)a0;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (BOOL)validateMenuItem:(id)a0;
- (void)willUnload;
- (id)localizedString:(id)a0;
- (void)storeValue:(void *)a0 forKey:(id)a1;
- (id)AXValue;
- (BOOL)convertedForNewUI;
- (void)loadImages;
- (id)getImage:(id)a0;
- (void)runSelfTest:(unsigned long long)a0 duration:(double)a1;
- (void)createMenu;
- (void)refreshAll;
- (BOOL)boolValueForKey:(id)a0 noValueReturns:(BOOL)a1;
- (id)keyForShowStatusMenuTitleString;
- (void)a_launchThirdPartyVPNApplication:(id)a0;
- (void)a_showStatusInMenuBar:(id)a0;
- (void)updateMenuWidth;
- (void)loadMenuBarView;
- (void)a_launchNetworkPrefs:(id)a0;
- (void)a_showSpecificTimeInMenuBar:(id)a0;
- (void)a_showTimeInMenuBar:(id)a0;
- (void)setProcessingPreferenceChanges:(BOOL)a0;
- (void)delayedSetup;
- (void)handleDynamicStoreChangedNotification:(id)a0;
- (id)imageNameArray;
- (void)initializeDynamicStoreMonitoring;
- (void)initializeNetworkExtensionChangeQueueMonitoring;
- (BOOL)interfaceTypeHasSubtypes:(id)a0;
- (BOOL)isServiceConfigured:(struct __SCNetworkService { } *)a0;
- (id)keyForShowSpecificTimeMenuTitleString;
- (id)keyForShowTimeMenuTitleString;
- (id)localizedMenuNameString;
- (id)localizedNoConfigsString;
- (id)networkPrefSectionName;
- (void)noopAction:(id)a0;
- (void)processControllers;
- (BOOL)processingPreferenceChanges;
- (void)refreshForPreferencesChange:(id)a0;
- (void)refreshServicesAndControllers;
- (void)registerForPrefsFileChangeNotifications;
- (void)releaseMenuItems;
- (void)reloadNetworkExtensionControllers;
- (void)reloadSystemConfigurationControllers;
- (void)resetPreferences;
- (struct __SCNetworkService { } *)serviceInList:(id)a0 withID:(id)a1;
- (BOOL)supportsInterfaceSubtype:(id)a0;
- (BOOL)supportsInterfaceType:(id)a0;
- (BOOL)supportsNetworkExtension;
- (id)systemConfigurationRawServices;
- (id)timeMenuForServiceControllers:(id)a0;

@end
