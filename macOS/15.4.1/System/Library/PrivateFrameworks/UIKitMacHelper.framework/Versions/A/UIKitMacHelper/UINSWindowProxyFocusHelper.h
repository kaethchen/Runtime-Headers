@class UINSWindowProxy;

@interface UINSWindowProxyFocusHelper : NSObject {
    struct { unsigned char windowVisible : 1; unsigned char didSendInitialNotifications : 1; unsigned char lastSentWindowVisible : 1; unsigned char lastKnownTrueKeyStatus : 1; unsigned char lastSentMacComponentActiveAppearanceStatus : 1; unsigned char lastSentNotificationKeynessStatus : 1; unsigned char isUpdatingKeyWindowsAndResponders : 1; unsigned char isApplicationActive : 1; } _flags;
    UINSWindowProxy *_windowProxyIvar;
}

@property (copy, nonatomic) id /* block */ _deferredWindowDidBecomeKey;

- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidResignActive:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidChangeOcclusionState:(id)a0;
- (void)windowDidResignKey:(id)a0;
- (void)__notifyWindowVisibilityChanged;
- (void)inputViewResignedFirstResponder;
- (void)_notifyIfAppearsKeyChanged;
- (void)_notifyWindowVisibilityChanged;
- (id)_parentWindowOfResponder:(id)a0;
- (void)_postWindowNotificationName:(id)a0;
- (void)_updateIfAppearsKeyChanged;
- (void)_updateIfTrueAppKitKeyWindowChanged;
- (void)_updateIfUIKitKeyWindowOrFirstResponderChanged;
- (void)_windowDidBecomeKey;
- (void)activeSpaceDidChange:(id)a0;
- (void)applicationDidChangeHidden:(id)a0;
- (id)initWithWindowProxy:(id)a0;
- (void)inputViewFinishedBecomeFirstResponder:(BOOL)a0;
- (void)inputViewStartedBecomeFirstResponder;
- (void)notifyIfAppearsKeyChanged;
- (void)notifyWindowVisibilityChanged;
- (void)sendInitialWindowVisibilityChangedNotifications;
- (void)setupWindowObservations:(id)a0;
- (void)teardownWindowObservations:(id)a0;
- (void)uiWindowDidBecomeApplicationKey:(id)a0;
- (void)uiWindowFirstResponderDidChange:(id)a0;
- (void)updateAndNotifyIfAppearsKeyChanged;
- (void)updateIfAppearsKeyChanged;
- (void)updateIfTrueAppKitKeyWindowChanged;
- (void)updateIfUIKitKeyWindowOrFirstResponderChanged;
- (void)windowItselfBecameFirstResponder;

@end
