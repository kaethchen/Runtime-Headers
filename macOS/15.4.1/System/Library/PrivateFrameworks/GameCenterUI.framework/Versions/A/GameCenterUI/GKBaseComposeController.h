@class GKContiguousContainerView, NSView, NSScrollView, NSLayoutConstraint, NSArray, GKTextView;

@interface GKBaseComposeController : GKLoadableContentViewController

@property (retain, nonatomic) GKContiguousContainerView *headerFieldContainer;
@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) double scrollContentInsetAdjustY;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *messageFieldTrailingConstraint;
@property (nonatomic) BOOL showHeaderFieldContainer;
@property (retain, nonatomic) NSScrollView *backgroundView;
@property (retain, nonatomic) NSArray *composeHeaderFields;
@property (retain, nonatomic) GKTextView *messageField;
@property (nonatomic) NSView *intendedFirstResponder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownKeyboardFrame;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (void)loadView;
- (void)textViewDidChangeSelection:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(int)a0;
- (void)textViewDidChange:(id)a0;
- (void)_adjustContentInsetForShowingKeyboard:(BOOL)a0;
- (BOOL)_gkWantsCustomRightBarButtonItemInViewService;
- (void)_scrollSelectedTextToVisible;
- (void)keyboardWillHideShow:(id)a0;
- (void)messageFieldTextDidChange;
- (void)setMessageFieldText:(id)a0;
- (id)viewMetricsForContainerView:(id)a0;

@end
