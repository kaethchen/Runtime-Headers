@class NSArray, NSImage, NSTrackingArea, RolloverImageButton, NSLayoutConstraint;
@protocol RolloverActionButtonTableCellViewDelegate;

@interface RolloverActionButtonTableCellView : NSTableCellView {
    BOOL _cancelRemoveButtonAnimation;
    NSArray *_actionButtonLayoutConstraints;
    NSLayoutConstraint *_titleFieldTrailingConstraintWhenActionButtonIsVisible;
}

@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (weak, nonatomic) id<RolloverActionButtonTableCellViewDelegate> delegate;
@property (nonatomic) int actionButtonState;
@property (weak, nonatomic) RolloverImageButton *actionButton;
@property (nonatomic) BOOL showsActionButton;
@property (nonatomic) BOOL updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges;
@property (retain, nonatomic) NSImage *actionButtonImage;
@property (nonatomic) double actionButtonVerticalMargin;
@property (nonatomic) double actionButtonHorizontalMargin;
@property (nonatomic) double actionButtonYOffsetWhenVerticallyCentered;
@property (nonatomic) double actionButtonAnimationDuration;

+ (double)actionButtonTrailingMarginBasedOnPreferredScrollerStyle;
+ (id)closeActionButtonImage;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_actionButtonClicked:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)_addTrackingArea;
- (void)_removeTrackingArea;
- (void)_didHideActionButton;
- (void)_performSharedSetup;
- (void)_positionActionButton;
- (void)_updateTitleTextFieldFrameAccountingForActionButtonBeingVisible:(BOOL)a0;
- (void)_willShowActionButton;
- (void)updateTextFieldToAccountForButtonBeingVisible:(BOOL)a0;

@end
