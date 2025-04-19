@class CPKPickerSearchField, NSButton, NSLayoutConstraint;
@protocol CPKSearchViewDelegate;

@interface CPKSearchView : NSView

@property NSLayoutConstraint *fieldTrailingConstraintForButton;
@property NSLayoutConstraint *fieldTrailingConstraintForSuperview;
@property double trailingConstantForButton;
@property double trailingConstantForField;
@property (readonly) CPKPickerSearchField *searchField;
@property (readonly) NSButton *showCVButton;
@property (readonly) NSButton *genmojiButton;
@property (readonly) NSButton *optionsButton;
@property id<CPKSearchViewDelegate> delegate;
@property BOOL showMemojiControls;

- (void)viewDidMoveToWindow;
- (BOOL)isRTL;
- (void)_genmojiButtonSelected:(id)a0;
- (void)_optionsButtonSelected:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tableInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 hasCVButton:(BOOL)a2;
- (void)setCVButtonVisible:(BOOL)a0;

@end
