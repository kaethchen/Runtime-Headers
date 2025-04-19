@class NSView, NSLayoutConstraint, NSLayoutGuide, CalUIFastStackView;
@protocol CalUIAccordionViewControllerDelegate;

@interface CalUIAccordionViewController : NSViewController

@property (retain) NSView *scrollHandleView;
@property (retain) CalUIFastStackView *overlayStackView;
@property (retain) NSView *effectsView;
@property (retain) CalUIFastStackView *stackView;
@property long long indexOfLeadingView;
@property long long levelOfLeadingView;
@property (retain) NSLayoutConstraint *centerViewAlignmentConstraint;
@property (retain) NSLayoutGuide *centerViewOffsetGuide;
@property (retain) NSLayoutConstraint *centerViewSizeConstraint;
@property (weak) id<CalUIAccordionViewControllerDelegate> delegate;
@property long long orientation;
@property (nonatomic) long long level;
@property (nonatomic) double viewSize;
@property (nonatomic) double indexAndOffset;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)loadView;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidLoad;
- (void)reload;
- (void)updateView;
- (long long)_centerIndex;
- (long long)_convertFromStackViewIndex:(long long)a0;
- (long long)_convertToStackViewIndex:(long long)a0;
- (long long)_countOfLeadingViews;
- (long long)_countOfTrailingViews;
- (BOOL)_delegateSupportsOverlays;
- (long long)_indexFromIndexAndOffset:(double)a0;
- (void)_loadAdditionalLeadingView;
- (void)_loadAdditionalTrailingView;
- (long long)_maxVisibleViewsPerSide;
- (double)_offsetFromIndexAndOffset:(double)a0;
- (void)_removeLeadingView;
- (void)_removeTrailingView;
- (void)_validateDisplayProperties;
- (long long)firstVisibleIndex;
- (double)indexAndOffsetOfPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)initViews;
- (long long)lastVisibleIndex;
- (void)loadAdditionalViewsIfNeeded;
- (id)viewAtIndex:(long long)a0;
- (void)viewFrameDidChange:(id)a0;
- (id)viewOverlayAtIndex:(long long)a0;

@end
