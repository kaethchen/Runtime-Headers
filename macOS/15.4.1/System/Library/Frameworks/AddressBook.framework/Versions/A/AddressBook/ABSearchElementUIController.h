@class NSTextField, NSView, NSLayoutConstraint, ABSmartGroup, NSPopUpButton, NSMutableArray, ABSearchElementSetView, NSButton, NSWindow, NSBox;

@interface ABSearchElementUIController : NSObject <ABSearchElementRepresentationBuilder> {
    NSWindow *window;
    ABSearchElementSetView *searchElementSetView;
    NSButton *okButton;
    NSButton *hilightButton;
    NSTextField *groupNameField;
    NSView *singleMatchDescription;
    NSView *multipleMatchDescription;
    NSBox *rulesBox;
    NSPopUpButton *andOrPopUp;
    NSButton *plusMinusTemplate;
    NSLayoutConstraint *searchElementsSetViewWidthConstraint;
    NSWindow *_docWindow;
    id _delegate;
    SEL _didEndSelector;
    void *_contextInfo;
    NSMutableArray *_elementViews;
    NSMutableArray *_plusButtons;
    NSMutableArray *_minusButtons;
    ABSmartGroup *_smartGroup;
    id /* block */ _completionHandler;
}

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)setName:(id)a0;
- (void)awakeFromNib;
- (void)textDidChange:(id)a0;
- (void)addRepresentationForElementWithProperty:(id)a0 value:(id)a1 comparison:(long long)a2 order:(id)a3;
- (void)setConjunction:(long long)a0;
- (id)nameValueForConjoinedSearchElement:(id)a0 comparison:(long long *)a1;
- (id)propertiesOfSearchElements:(id)a0;
- (id)searchElement;
- (BOOL)tracksModification;
- (void)help:(id)a0;
- (void)addElementView:(id)a0;
- (void)alertSheetDidEnd:(id)a0 resultCode:(long long)a1 contextInfo:(void *)a2;
- (void)animateToEncloseElements;
- (void)beginSheetWithName:(id)a0 modalForWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginSheetWithSmartGroup:(id)a0 modalForWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)buildElementsFromSmartGroup:(id)a0;
- (void)fixKeyViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlusButton:(BOOL)a0 atIndex:(long long)a1;
- (void)handleCancel:(id)a0;
- (void)handleOK:(id)a0;
- (id)newButtonAsPlus:(BOOL)a0 atIndex:(long long)a1;
- (id)nextKeyViewForElement:(id)a0;
- (void)removeElementView:(id)a0;
- (void)setDocWindow:(id)a0;
- (id)smartGroup;
- (void)updateAndOrUI;
- (void)updateOKButton;

@end
