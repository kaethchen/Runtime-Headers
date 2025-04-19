@class NSURL, NSString, NSArray, SidecarDisplayManager, NSMutableSet, NSImage, NSUserDefaults;

@interface SidecarDisplayMenuController : NSObject {
    SidecarDisplayManager *_displayManager;
    NSArray *_recentItemsCache;
    NSArray *_otherItemsCache;
    NSMutableSet *_recents;
    NSImage *_buttonImage;
    NSImage *_buttonImageTinted;
    NSImage *_noButtonImage;
    NSImage *_noButtonImageTinted;
    NSUserDefaults *_defaults;
    int statusToken;
    NSURL *_prefsURL;
    BOOL _touchbarAllowed;
}

@property (readonly) BOOL deviceAvailable;
@property (readonly) NSString *connectedDeviceName;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)_toggleSidebar:(id)a0;
- (void)_connectToDevice:(id)a0;
- (BOOL)_devicesHaveHomeButton:(id)a0;
- (void)_devicesChanged;
- (id)_menuItemForDevice:(id)a0 isConnected:(BOOL)a1;
- (id)connectedDisplayPreferenceItems;
- (id)_connectedDisplayPreferenceItems;
- (void)_deviceSelected:(id)a0;
- (id)preferenceItems;
- (void)_disconnectFromDevice:(id)a0;
- (void)_openPreferences:(id)a0;
- (id)_tintedImage:(id)a0 color:(id)a1;
- (void)_toggleTouchbar:(id)a0;
- (void)_updateMenuItems;
- (id)deviceImage:(BOOL)a0;
- (id)otherItems;
- (id)preferencePaneItem;
- (id)recentItems;

@end
