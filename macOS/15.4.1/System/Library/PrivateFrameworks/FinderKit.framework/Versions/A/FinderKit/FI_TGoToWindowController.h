@class FI_TGoToAutoCompletionController, FI_TPathTextField, FI_TRunAfterHelper, NSButton, FI_TTouchBar, NSObject, NSString, FI_TGoToItemsViewController, FI_TCustomTouchBarItem, NSVisualEffectView, FI_TGoToAutoCompletionControllerFinderDelegate, NSWindow, NSTextField, FI_TGoToFinderItem;
@protocol TGoToWindowDelegate;

@interface FI_TGoToWindowController : FI_TScriptableWindowController <NSTouchBarDelegate, TTouchBarGoToViewDelegate, NSWindowDelegate, NSTextFieldDelegate, NSMenuDelegate> {
    FI_TPathTextField *_pathTextField;
    NSTextField *_pathCompletionTextField;
    NSButton *_closeButton;
    FI_TGoToItemsViewController *_itemsViewController;
    NSVisualEffectView *_spinnerView;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _initialPath;
    BOOL _isLastTwoTabCompletionSame;
    BOOL _isInSuggestionUpdate;
    BOOL _isInUserDidTypeTab;
    BOOL _isInUserDidTypeMarkedText;
    BOOL _isInUserSingleClick;
    BOOL _shouldGoToSelection;
    BOOL _shouldTabToSelection;
    FI_TGoToFinderItem *_relativeToItem;
    struct TGoToPathToAutoCompleteHelper { struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fUIPathPrefix; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fAutoCompletePathPrefix; } _autoCompleteHelper;
    FI_TGoToAutoCompletionController *_autoCompletionController;
    FI_TGoToAutoCompletionControllerFinderDelegate *_autoCompletionControllerDelegate;
    struct function<void (FI_TGoToWindowController *)> { struct __value_func<void (FI_TGoToWindowController *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _initialItemsDidLoadHandler;
    struct function<void (FI_TGoToWindowController *, const TFENode &, const TFENode &, const TString &)> { struct __value_func<void (FI_TGoToWindowController *, const TFENode &, const TFENode &, const TString &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _completionHandler;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _initialItemsTimeoutToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _autoCompleteNowToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _autoCompleteSpinnerToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _singleClickDelayToken;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _notificationCenterObservers;
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct __compressed_pair<TKeyValueObserver *, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__value_; } __end_cap_; } _keyValueObservers;
    struct TEventMonitor { NSObject *fEventMonitorToken; } _keyDownEventMonitor;
    struct TNSWeakPtr<FI_TTouchBar> { FI_TTouchBar *fWeakObject; } _goAndCancelButtonsTouchBar;
    struct TNSWeakPtr<FI_TCustomTouchBarItem> { FI_TCustomTouchBarItem *fWeakObject; } _goAndCancelButtonsTouchBarItem;
}

@property (weak, nonatomic) NSWindow *parentWindow;
@property (readonly, nonatomic) BOOL enablePathComboBox;
@property (readonly, nonatomic) BOOL showProgress;
@property (weak, nonatomic) id<TGoToWindowDelegate> delegate;
@property (nonatomic) BOOL allowLeftoverLastPathComponent;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct TGoToPathToAutoCompleteHelper { struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x0; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x1; })calcPathToAutoComplete:(void *)a0 relativeToNode:(struct TFENode { struct OpaqueNodeRef *x0; } *)a1 delegate:(id)a2;
+ (id)showGoToWindowRelativeToNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 parentWindow:(id)a1 initialPath:(const void *)a2 allowLeftoverLastPathComponent:(BOOL)a3 completionHandler:(const void *)a4;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)cancel:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)effectiveAppearanceDidChange;
- (id)handleEvent:(id)a0;
- (id)makeTouchBar;
- (void)menuNeedsUpdate:(id)a0;
- (id)nextResponder;
- (void)windowDidLoad;
- (void)windowWillClose:(id)a0;
- (void)aboutToTearDown;
- (BOOL)areUIPathAndProcessedPathInSync;
- (void)autoCompleteNow;
- (void)go:(id)a0;
- (id)_initWithRelativeToNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 parentWindow:(id)a1 initialPath:(const void *)a2 allowLeftoverLastPathComponent:(BOOL)a3 initialItemsDidLoadHandler:(const void *)a4 completionHandler:(const void *)a5;
- (void)autoCompleteSoon;
- (BOOL)canOpenSelectedItemInNewTabOrWindow;
- (BOOL)canOpenSelectedItemInTerminal;
- (void)copySelectedItemAsPath;
- (void)goToSelectedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 leftoverPathComponent:(const void *)a1;
- (void)handleCloseButtonAction:(id)a0;
- (void)handleTableViewDoubleClick:(id)a0;
- (void)handleTableViewSingleClick:(id)a0;
- (void)openSelectedItemInNewTabOrWindow:(BOOL)a0;
- (void)openSelectedItemInTerminal;
- (BOOL)pathViewInsertionCaretAtEnd;
- (struct TFENode { struct OpaqueNodeRef *x0; })relativeToNode;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })uiPath;
- (BOOL)updateOrigAutoCompletePath:(const void *)a0 withAdjustedAutoCompletePath:(const void *)a1 adjustedPathIsValid:(BOOL)a2;
- (void)updatePathHandler;
- (void)updatePathTextFieldMask;
- (void)updatePlaceholderWithSelectedItem;
- (void)updateSuggestedItems:(id)a0;
- (void)userDidTypeTab;

@end
