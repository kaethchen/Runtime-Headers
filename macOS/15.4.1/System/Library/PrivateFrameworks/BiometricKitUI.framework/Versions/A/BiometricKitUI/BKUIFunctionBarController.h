@class NSTouchBar, NSString, BKUITouchIDArrowView, BKUIFingerSecurePairingStateObserver, NSMutableDictionary, BiometricKit, NSCustomTouchBarItem, NSObject;
@protocol BKUITouchBarDelegate, OS_os_log;

@interface BKUIFunctionBarController : NSObject <NSTouchBarDelegate> {
    BOOL _inBuddy;
    BOOL _isDone;
    NSMutableDictionary *_properties;
    NSObject<OS_os_log> *bkui_function_bar_controller_log;
}

@property (retain, nonatomic) NSTouchBar *mesaEnrollTouchBar;
@property (retain) BKUITouchIDArrowView *touchIDArrowLabel;
@property (retain) NSCustomTouchBarItem *mesaCancelButtonItem;
@property (retain) NSCustomTouchBarItem *mesaPromptLabelItem;
@property (retain) NSCustomTouchBarItem *mesaDoneButtonItem;
@property (retain, nonatomic) BKUIFingerSecurePairingStateObserver *securePairingStateObserver;
@property (retain) NSString *prompt;
@property (retain) BiometricKit *biometricKit;
@property (nonatomic) int connectedAccessoryToken;
@property (nonatomic) id<BKUITouchBarDelegate> delegate;
@property (copy, nonatomic) NSString *restorePrompt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)doneButtonPressed;
- (void)hidePrompt;
- (id)_createMesaCancelButtonItem;
- (id)_createMesaDoneButtonItem;
- (id)_createMesaPromptLabelItem:(id)a0;
- (id)_functionBarItemIdentifiers;
- (BOOL)_isInClamshellMode;
- (BOOL)_shouldHideTouchBar;
- (void)cancelButtonePressed;
- (id)currentPrompt;
- (id)functionBarControllerWithRestoredPrompt;
- (void)showDoneButton;
- (void)showPrompt:(id)a0;
- (void)updateExternalInputDeviceConnection;

@end
