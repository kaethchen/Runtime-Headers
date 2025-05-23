@class NSView, NSTouchBarRangeBackdropView, NSLayoutGuide, NSTouchBarRangeView, NSCalendar, CalUIAccordionViewController, NSDate, NSString, NSLayoutConstraint, NSEvent;
@protocol CalUIEventTimeViewControllerDelegate;

@interface CalUIEventTimeViewController : NSViewController <CalUIAccordionViewControllerDelegate>

@property (retain) CalUIAccordionViewController *accordionViewController;
@property (retain) NSView *leadingScrollHandle;
@property (retain) NSView *trailingScrollHandle;
@property (retain) NSTouchBarRangeView *rangeView;
@property (retain) NSTouchBarRangeBackdropView *rangeBackdropView;
@property unsigned long long currentTouchType;
@property (retain) NSEvent *currentTouchEvent;
@property double distanceOfInitialTouchFromStartPosition;
@property (nonatomic) double startIndexAndOffset;
@property (nonatomic) double endIndexAndOffset;
@property (retain) NSLayoutConstraint *startIndexConstraint;
@property (retain) NSLayoutConstraint *endIndexConstraint;
@property (retain) NSLayoutGuide *startIndexOffsetGuide;
@property (retain) NSLayoutGuide *endIndexOffsetGuide;
@property (retain) NSLayoutConstraint *selectorWidthConstraint;
@property (retain) NSCalendar *calendar;
@property (retain) NSDate *zeroIndexDate;
@property (retain) id eventMontitor;
@property (weak) id<CalUIEventTimeViewControllerDelegate> delegate;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property BOOL allDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleBackgroundColor;
+ (id)imageWithStripeColor:(id)a0 secondaryColor:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)majorTimeMarkStripeColor;
+ (id)minorTimeMarkStripeColor;
+ (id)segmentBackgroundImage;
+ (id)segmentFirstBackgroundImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)loadView;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)updateView;
- (id)_touchForEvent:(id)a0;
- (id)_colorAtIndex:(long long)a0 level:(long long)a1;
- (id)_createScrollHandle;
- (id)_dateAtIndexAndOffset:(double)a0 level:(long long)a1;
- (id)_fontAtIndex:(long long)a0 level:(long long)a1;
- (void)_handleTouchMovedEvent:(id)a0;
- (long long)_hoursInDay:(id)a0;
- (double)_indexAndOffsetAtDate:(id)a0 level:(long long)a1;
- (double)_indexAndOffsetOfTouch:(id)a0;
- (long long)_indexFromIndexAndOffset:(double)a0;
- (BOOL)_isSelectorTouchingLeadingHandle;
- (BOOL)_isSelectorTouchingTrailingHandle;
- (BOOL)_isTouch:(id)a0 inView:(id)a1;
- (BOOL)_isTouchNearRangeHandle:(id)a0;
- (double)_offsetFromIndexAndOffset:(double)a0;
- (double)_roundedIndexAndOffset:(double)a0;
- (long long)_segmentsForLevel:(long long)a0;
- (BOOL)_shouldDoDSTHackForDate:(id)a0 level:(long long)a1;
- (double)_timeIntervalForLevel:(long long)a0;
- (id)_titleAtIndex:(long long)a0 level:(long long)a1;
- (void)_updateVisibleRange;
- (void)dateTimeFormatChanged;
- (void)initTouches;
- (void)initViews;
- (long long)maxLevel;
- (double)maxViewSizeForLevel:(long long)a0;
- (long long)minLevel;
- (double)minViewSizeForLevel:(long long)a0;
- (double)positionMultiplierFromLevel:(long long)a0 toLevel:(long long)a1;
- (void)updateSelector;
- (id)viewAtIndex:(long long)a0 level:(long long)a1;
- (void)viewFrameDidChange:(id)a0;
- (id)viewOverlayAtIndex:(long long)a0 level:(long long)a1;

@end
