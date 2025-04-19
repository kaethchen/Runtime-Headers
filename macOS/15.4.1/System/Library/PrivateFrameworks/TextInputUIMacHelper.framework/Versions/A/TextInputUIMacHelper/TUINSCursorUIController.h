@class NSTimer, NSView, NSArray, NSString, TUINSCursorLocationCache, TUINSWindow, TUINSCursorUISwitcher, TUICursorAccessoryAssertionController;
@protocol TUINSCursorUIViewServiceProtocol, NSTextInputClient, TUICursorAccessoryAssertion;

@interface TUINSCursorUIController : NSObject <TUICursorAccessoryAssertionControllerSubject, TUINSCursorUIRemoteProtocol>

@property (retain, nonatomic) TUINSWindow *hostWindow;
@property (readonly, nonatomic) id<TUINSCursorUIViewServiceProtocol> serviceViewControllerProxy;
@property (retain, nonatomic) NSArray *cursorAccessories;
@property (retain, nonatomic) TUICursorAccessoryAssertionController *assertionController;
@property (retain, nonatomic) TUINSCursorUISwitcher *inputSourceSwitcher;
@property (retain, nonatomic) id eventMonitor;
@property (retain, nonatomic) NSTimer *capsLockTimer;
@property (retain, nonatomic) id<TUICursorAccessoryAssertion> capslockAssertion;
@property (retain, nonatomic) NSTimer *timerForRestoringCursorAccessories;
@property (nonatomic) BOOL cursorAccessoriesVisibilityBeforeHidden;
@property (nonatomic) BOOL forceHideCursorAccessories;
@property (nonatomic) BOOL scrolling;
@property (retain, nonatomic) NSView<NSTextInputClient> *client;
@property (nonatomic) BOOL scrollAwayIndicatorEnabled;
@property (nonatomic) BOOL selectedTextIndicatorEnabled;
@property (nonatomic) BOOL autoHideEnabled;
@property (nonatomic) struct CGPoint { double x; double y; } cursorLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectedRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) unsigned long long scrollAwayDirection;
@property (nonatomic) long long textLayoutOrientation;
@property (retain, nonatomic) NSTimer *updateCursorLocationTimer;
@property (readonly, nonatomic) TUINSCursorLocationCache *cursorLocationCache;
@property (nonatomic) BOOL showsCursorAccessories;
@property (nonatomic) long long cursorAccessoryPlacement;
@property (readonly, nonatomic) BOOL supportsTextCursorAccessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enabled;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)activate:(id)a0;
- (void)deactivate:(id)a0;
- (void)invalidateCharacterCoordinates;
- (void)textInputClientDidEndScrollingOrZooming;
- (void)textInputClientWillStartScrollingOrZooming;
- (void)windowDidResize:(id)a0;
- (void)commitTextInputMenuHUD:(id)a0;
- (void)hideTextInputMenuHUD:(id)a0;
- (void)moveTextInputMenuHUD:(id)a0;
- (void)showTextInputMenuHUD:(id)a0;
- (void)_selectCurrentInputSource;
- (void)didUpdateIndicator:(struct CGSize { double x0; double x1; })a0;
- (void)getCursorLocation:(id /* block */)a0;
- (void)hideCursorAccessory;
- (void)invokeCursorAccessoryAction:(id)a0 withUserInfo:(id)a1;
- (void)scheduleUpdateCapslockIndicator:(double)a0;
- (void)scheduleUpdateCursorLocation;
- (BOOL)shouldShowCursorAccessories;
- (void)updateAccessoryActiveState;
- (void)updateCasplockIndicator;
- (void)updateCursorLocation;
- (void)updateParentWindowIfNeeded;

@end
