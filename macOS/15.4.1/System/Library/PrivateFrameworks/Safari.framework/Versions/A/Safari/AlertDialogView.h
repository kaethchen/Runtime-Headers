@class NSTextField, NSString, NSScrollView, NSSecureTextField, ButtonPlus, NSStackView, AlertDialogViewOriginMessageAccessibilityHelper, NSTextView, BackgroundColorView, NSLayoutConstraint, NSArray, NSTableView;
@protocol AlertDialogViewDelegate;

@interface AlertDialogView : KeyLoopSplicingContainerView <NSTableViewDelegate, NSTableViewDataSource, TabDialogView> {
    NSLayoutConstraint *_scrollViewToTextViewHeightConstraint;
    AlertDialogViewOriginMessageAccessibilityHelper *_originMessageAccessibilityHelper;
    id /* block */ _customLeftMostAction;
    NSArray *_tableData;
    id /* block */ _tableDidSelectRowAction;
    long long _tableSelectedRow;
}

@property (weak) NSScrollView *dialogMessageScrollView;
@property NSTextView *dialogMessageTextView;
@property (weak) BackgroundColorView *separatorView;
@property (weak) NSLayoutConstraint *maximumHeightConstraint;
@property (weak) NSLayoutConstraint *userResponsePromptFieldHeightConstraint;
@property (weak) NSLayoutConstraint *widthConstraint;
@property (weak) NSTextField *dialogTitleView;
@property (retain, nonatomic) NSStackView *promptFieldStackView;
@property (weak) NSScrollView *tableScrollView;
@property (weak) NSTableView *tableView;
@property (weak) NSLayoutConstraint *tableScrollViewHeightConstraint;
@property (weak, nonatomic) id<AlertDialogViewDelegate> delegate;
@property (weak) NSTextField *promptUserResponseTextField;
@property (weak) NSSecureTextField *securePromptUserResponseTextField;
@property (weak) ButtonPlus *secondaryButton;
@property (weak) ButtonPlus *okButton;
@property (weak) ButtonPlus *optionalButton;
@property (copy, nonatomic) NSString *originStringForAccessibility;
@property (nonatomic) BOOL shouldIgnoreKeyPresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)cancel;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (id)accessibilitySubrole;
- (id)accessibilityTitle;
- (id)accessibilityValue;
- (void)awakeFromNib;
- (void)drawPageBorderWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isAccessibilityElement;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)updateConstraints;
- (void)accept;
- (void)reject;
- (void)secondaryButtonPressed:(id)a0;
- (void)_dialogMessageTextViewFrameDidChangeNotification:(id)a0;
- (id)_originStringForPrinting;
- (void)_removePromptFieldStackView;
- (void)_removeViewFromSuperviewAndSetUpKeyView:(id)a0;
- (void)_setDialogMessage:(id)a0;
- (void)_setDialogTitle:(id)a0;
- (void)_setTableView:(id)a0 tableDidSelectRowAction:(id /* block */)a1;
- (void)fadeInWithCompletionHandler:(id /* block */)a0;
- (void)fadeOutWithCompletionHandler:(id /* block */)a0;
- (void)okButtonPressed:(id)a0;
- (void)optionalButtonPressed:(id)a0;
- (void)setUpUsingConfiguration:(id)a0;

@end
