@interface STKEmojiGenerationViewController : StickerKit.EmojiGenerationBaseController <NSMenuDelegate> {
    void /* unknown type, empty encoding */ addButton;
    void /* unknown type, empty encoding */ previousButton;
    void /* unknown type, empty encoding */ previousButtonContainer;
    void /* unknown type, empty encoding */ nextButton;
    void /* unknown type, empty encoding */ nextButtonContainer;
    void /* unknown type, empty encoding */ captionView;
    void /* unknown type, empty encoding */ initialFrame;
    void /* unknown type, empty encoding */ imageLayoutGuide;
    void /* unknown type, empty encoding */ callingWindowFrame;
    void /* unknown type, empty encoding */ callingWindowArrowPositioning;
    void /* unknown type, empty encoding */ keyHandler;
    void /* unknown type, empty encoding */ ttrButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ttrMenu;
    void /* unknown type, empty encoding */ personPickerSheetViewController;
    void /* unknown type, empty encoding */ onboardingWindowController;
    void /* unknown type, empty encoding */ editingWindowController;
    void /* unknown type, empty encoding */ personSelectionState;
    void /* unknown type, empty encoding */ selectedPersonItem;
    void /* unknown type, empty encoding */ chooseAPersonItem;
    void /* unknown type, empty encoding */ isObservingFirstResponderChanges;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)mouseDown:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)makeKeyWindowAndFirstResponder:(BOOL)a0;
- (void)setScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowPositioning:(long long)a1;
- (id)initWithPrompt:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)tearDownNotifications;
- (void)addButtonPressed:(id)a0;
- (void)willCloseForNonFocusLostReason:(id)a0;
- (void)closeEditingUI:(id)a0;
- (void)_promptEntryViewTextDidChange:(id)a0;
- (void)chooseAPersonMenuItemDidPress:(id)a0;
- (void)closeOnboardingUIIfPresent:(id)a0;
- (void)macEditButtonPressedWith_macEditButton:(id)a0;
- (void)navigationButtonDidPress:(id)a0;
- (void)resetDefaultsMenuItemDidPress:(id)a0;
- (void)resetGenericEmoji:(id)a0;
- (void)resetStickyPerson:(id)a0;
- (void)tapToRadarMenuItemDidPress:(id)a0;
- (void)toggleAutoscroll:(id)a0;
- (void)ttrButtonPressed:(id)a0;
- (void)willCloseForFocusLostReason:(id)a0;

@end
