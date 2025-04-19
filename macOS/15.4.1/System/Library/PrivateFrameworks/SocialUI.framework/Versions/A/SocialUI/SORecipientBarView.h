@class SOTokenField, SOAdjustableLayoutView, NSLayoutConstraint, SOFlexibleScrollView, NSView;

@interface SORecipientBarView : NSView

@property (retain) NSLayoutConstraint *recipientActionsLeadingLock;
@property (retain) SOFlexibleScrollView *recipientScrollView;
@property (retain) SOTokenField *recipientTokenField;
@property (retain) SOAdjustableLayoutView *recipientActionsView;
@property (retain, nonatomic) NSView *displayedRecipientActionsView;

+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_preferredScrollerStyleDidChange;
- (void)_textViewChangedSelection:(id)a0;

@end
