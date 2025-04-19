@class NSImageView, EMIMDFRCategoryButton, NSLayoutConstraint, NSButton, NSMutableArray;

@interface CPKEmojiIMCategoryView : NSView

@property long long categoryCount;
@property BOOL isExpanded;
@property BOOL animating;
@property NSButton *closeButton;
@property EMIMDFRCategoryButton *categoryButtonCell;
@property NSImageView *expandArrowImage;
@property (retain) NSMutableArray *expandedImageCells;
@property EMIMDFRCategoryButton *pickerButtonCell;
@property double expandedViewWidthForTap;
@property double expandedViewWidthForPress;
@property double expandedCategoryButtonWidth;
@property (retain) id firstTouchID;
@property BOOL clickedPickerButton;
@property BOOL touchCanceled;
@property long long highlightedCategoryIndex;
@property BOOL buttonHighlighted;
@property BOOL inPressAndHold;
@property BOOL inPulledOut;
@property BOOL startingSearchMode;
@property (nonatomic) BOOL inSearchMode;
@property NSLayoutConstraint *categoryViewWidthConstraint;
@property NSLayoutConstraint *categoryButtonWidthConstraint;
@property NSLayoutConstraint *categoryButtonLeadingConstraint;
@property NSLayoutConstraint *categoryButtonTrailingConstraint;
@property NSLayoutConstraint *firstCategoryCellLeadingConstraint;
@property (readonly) double pulloutLimitWidth;

- (void)dealloc;
- (id)init;
- (void)reset;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)expand;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (id)_buttonBoxWithImage:(id)a0;
- (void)_characterPickerButtonClicked;
- (void)_collapseByScroll:(BOOL)a0 withAnimation:(BOOL)a1;
- (void)_didClickedCloseButton:(id)a0;
- (void)_expandByPressAndHold:(BOOL)a0 withAnimation:(BOOL)a1;
- (void)_handlePressed;
- (void)_highlightSegementCellAtIndex:(long long)a0 needScroll:(BOOL)a1;
- (void)_setStateOfButtonCell:(id)a0 highlighted:(BOOL)a1;
- (void)_trackCellsWithTouch:(id)a0;
- (void)collapseByScroll:(BOOL)a0;
- (id)getStateInfo;
- (void)pullOutBy:(double)a0 start:(BOOL)a1 finished:(BOOL)a2;
- (void)scrollViewChangedToCategory:(long long)a0;
- (void)setStateInfo:(id)a0;

@end
