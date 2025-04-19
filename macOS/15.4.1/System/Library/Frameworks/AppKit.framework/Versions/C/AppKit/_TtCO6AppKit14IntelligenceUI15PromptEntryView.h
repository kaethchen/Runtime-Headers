@interface _TtCO6AppKit14IntelligenceUI15PromptEntryView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ suggestionsDelegate;
    void /* unknown type, empty encoding */ wrappedSuggestionsDelegate;
    void /* unknown type, empty encoding */ controlSize;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ visibleLineLimit;
    void /* unknown type, empty encoding */ accessoryView;
    void /* unknown type, empty encoding */ leadingImage;
    void /* unknown type, empty encoding */ backgroundConfiguration;
    void /* unknown type, empty encoding */ characterLimit;
    void /* unknown type, empty encoding */ trailingButton;
    void /* unknown type, empty encoding */ overrideLeadingImage;
    void /* unknown type, empty encoding */ leadingImageContainerView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ ambiguitiesByID;
    void /* unknown type, empty encoding */ needsStyleUpdate;
    void /* unknown type, empty encoding */ textDidChangeObserver;
    void /* unknown type, empty encoding */ linesOfTextObserver;
    void /* unknown type, empty encoding */ isInKeyWindow;
    void /* unknown type, empty encoding */ windowDidBecomeKeyNotificationObserver;
    void /* unknown type, empty encoding */ windowDidResignKeyNotificationObserver;
    void /* unknown type, empty encoding */ entryContainerView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ disambiguationMenuIsOpen;
    void /* unknown type, empty encoding */ isCallingTextFieldDidSelectSuggestionItem;
    void /* unknown type, empty encoding */ textFieldLeadingConstraint;
    void /* unknown type, empty encoding */ textFieldTrailingConstraint;
    void /* unknown type, empty encoding */ leadingImageContainerViewCenterXConstraint;
    void /* unknown type, empty encoding */ leadingImageContainerViewCenterYConstraint;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;

@end
