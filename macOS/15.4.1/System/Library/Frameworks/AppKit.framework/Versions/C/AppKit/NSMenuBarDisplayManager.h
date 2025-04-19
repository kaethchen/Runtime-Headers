@class NSString;

@interface NSMenuBarDisplayManager : NSObject {
    NSString *_menuBarApplicationName;
    double _reservedStatusBarWidth;
    BOOL _isRegisteredForSafeApertureNotifications;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationNameChanged:(id)a0;
- (void)_invalidateSafeApertureOnDisplay:(unsigned int)a0;
- (void)_notifyNotchBoundsChangedOnDisplay:(unsigned int)a0;

@end
