@class NSXPCConnection, NSString, _NSQuickActionProvider, _NSQuickActionTouchBarClientItemSourceMonitor, NSSet, NSDictionary, _NSQuickActionValidator, NSRunningApplication;

@interface _NSQuickActionTouchBarClient : NSObject <_NSQuickActionProviderObserver, _NSQuickActionValidatorObserver, _NSQuickActionTouchBarClientProtocol> {
    _NSQuickActionProvider *_provider;
    _NSQuickActionValidator *_validator;
    _NSQuickActionTouchBarClientItemSourceMonitor *_itemSourceMonitor;
    NSDictionary *_quickActionsByIdentifier;
    NSSet *_enabledQuickActionIdentifiers;
    NSXPCConnection *_connectionToService;
    NSRunningApplication *_currentApplication;
    int _touchBarRegistrationToken;
    BOOL _needsRegistration;
    BOOL _isRegistrationOpen;
    BOOL _scheduledUpdate;
    BOOL _isUpdating;
    BOOL _isActive;
    BOOL _isObservingItemSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)deactivate;
- (void)invokeQuickActionWithIdentifier:(id)a0;
- (void)quickActionTouchBarDidHide;
- (void)quickActionTouchBarWillShow;
- (void)quickActionsDidChange;
- (void)validQuickActionsDidChange;

@end
