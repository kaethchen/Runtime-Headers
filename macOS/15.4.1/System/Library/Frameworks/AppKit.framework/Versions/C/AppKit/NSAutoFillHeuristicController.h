@class RTITextOperations, NSString, NSUUID, RTIDocumentState, RTIDocumentTraits, NSTextInputContext, RTIInputSystemClient, NSWindow;
@protocol AFUITargetDetectionController_Staging;

@interface NSAutoFillHeuristicController : NSObject <RTIInputSystemClientDelegate, NSMenuItemValidation> {
    RTIInputSystemClient *_rtiClient;
    RTIDocumentState *_documentState;
    RTIDocumentTraits *_documentTraits;
    NSUUID *_sessionUUID;
    id<AFUITargetDetectionController_Staging> _targetDetectionController;
    BOOL _didResignActiveForExpectedProcess;
    id _autoFillResponder;
    id _explicitAutoFillResponder;
    NSTextInputContext *_explicitAutoFillTextInputContext;
    NSUUID *_catalystExplicitAutoFillSessionUUID;
    RTITextOperations *_catalystSavedTextOperations;
    NSTextInputContext *_menuTrackedTextInputContext;
    id _eventMonitorDuringActiveTextInputContext;
    NSTextInputContext *_trackedTextInputContext;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _trackedSelectedTextRect;
    NSWindow *_trackedWindow;
}

@property (class, readonly, nonatomic) NSTextInputContext *inputContextForExplicitAutoFillMenu;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_inputContext;
+ (id)_inputContextForChromiumSecureTextField;
+ (id)_inputContextForChromiumSecureTextFieldFromResponder:(id)a0;
+ (BOOL)_isValidInputContext:(id)a0;
+ (id)textInputContextForExplicitAutoFillContextMenuRequestorChain:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_debounceTextInputContextUpdate;
- (void)showAutoFillCreditCardsForView:(id)a0;
- (void)_applicationDidResignActive;
- (long long)_autoFillInsertionMethodForTextInputClient:(id)a0;
- (void)_beginRTISessionIfNecessary;
- (void)_cancelTextInputContextUpdateDebounce;
- (void)_createRTIClientIfNecessary;
- (void)_createTargetDetectionControllerIfNecessary;
- (void)_didEndLiveResizingWindow;
- (void)_didStartLiveResizingWindow;
- (void)_dismissAutoFill;
- (void)_endRTISessionIfNecessary;
- (void)_hideAutoFillPanel;
- (BOOL)_isAbleToHandleAutoFillForTextInputContext:(id)a0;
- (void)_menuDidBeginTracking;
- (void)_menuDidEndTracking;
- (void)_presentAutoFillPanelForTextInputContext:(id)a0 overrideAutoFillMode:(unsigned long long)a1 selectedTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_presentAutoFillPanelForTextInputContext:(id)a0 withOverrideAutoFillMode:(unsigned long long)a1;
- (void)_presentAutoFillPanelForView:(id)a0 withOverrideAutoFillMode:(unsigned long long)a1;
- (void)_reshowAutoFillForWindow:(id)a0;
- (void)_selectedTextRectAndRangeForTextInputContext:(id)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedTextRectFromView:(id)a0;
- (BOOL)_selectedTextRectIsInvalid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_showAutoFillPanelIfNecessaryForView:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_showOneTimeCodeAutoFillIfNecessaryForTextInputContext:(id)a0 view:(id)a1 selectedTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_showPasswordAutoFillIfNecessaryForView:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_updateDocumentStateForView:(id)a0;
- (void)_updateDocumentTraitsForView:(id)a0;
- (void)_windowDidBecomeKey:(id)a0;
- (BOOL)completeCatalystAutoFillIfNecessary;
- (void)performTextOperations:(id)a0 resultHandler:(id /* block */)a1;
- (id)preferredInsertionOrder;
- (void)showAutoFillContactsForView:(id)a0;
- (void)showAutoFillContactsPopover;
- (void)showAutoFillContactsPopoverForTextInputContext:(id)a0;
- (void)showAutoFillCreditCardsPopover;
- (void)showAutoFillCreditCardsPopoverForTextInputContext:(id)a0;
- (void)showAutoFillIfNecessaryForTraits:(id)a0 state:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)showAutoFillPasswordsForView:(id)a0;
- (void)showAutoFillPasswordsPopover;
- (void)showAutoFillPasswordsPopoverForTextInputContext:(id)a0;
- (void)showOrHideAutoFillForCurrentTextInputContextIfAppropriate;
- (BOOL)validateAutoFillMenuItem:(id)a0 textInputContext:(id)a1;
- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidBecomeFirstResponder:(id)a0;
- (void)viewWillResignFirstResponder:(id)a0;
- (void)willShowAutoFillIfNecessaryFor:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
