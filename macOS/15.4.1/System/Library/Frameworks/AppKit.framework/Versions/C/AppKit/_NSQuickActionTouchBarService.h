@class NSString, NSMapTable, NSRunningApplication, _NSQuickActionTouchBarController;

@interface _NSQuickActionTouchBarService : NSObject <_NSQuickActionTouchBarControllerDelegate, _NSQuickActionTouchBarServiceProtocol> {
    NSRunningApplication *_frontmostApplication;
    NSMapTable *_connectionsByApplication;
    NSMapTable *_applicationsByConnection;
    _NSQuickActionTouchBarController *_touchBarController;
    id /* block */ _timeoutHandler;
    int _registrationToken;
    BOOL _touchBarIsShowing;
    BOOL _dismissOnApplicationSwitch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)enableQuickActionsWithIdentifiers:(id)a0;
- (void)handleShowPopoverNotification;
- (void)invokeQuickActionWithIdentifier:(id)a0;
- (void)registerClient;
- (void)unregisterClientForApp:(id)a0;

@end
