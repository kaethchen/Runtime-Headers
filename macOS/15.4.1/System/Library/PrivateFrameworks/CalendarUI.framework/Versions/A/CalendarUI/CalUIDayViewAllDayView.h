@class NSTextField, NSArray, NSLayoutConstraint, CalUIDayViewGadgetController;
@protocol CalUIDayViewGadgetDataSource, CalUIBoxOccurrenceContentViewDelegate, CalUIDayViewGadgetAppearanceDelegate;

@interface CalUIDayViewAllDayView : CalUILayerBackedView

@property (retain, nonatomic) NSArray *occurrenceViews;
@property (readonly) NSTextField *allDayLabel;
@property (retain) NSLayoutConstraint *noEventsConstraint;
@property BOOL hasNewOccurrenceViews;
@property (weak, nonatomic) id<CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) NSLayoutConstraint *labelVerticalAlignmentConstraint;
@property (weak, nonatomic) id<CalUIDayViewGadgetDataSource> dataSource;
@property (weak, nonatomic) CalUIDayViewGadgetController *controller;
@property (weak, nonatomic) id<CalUIBoxOccurrenceContentViewDelegate> boxOccurrenceContentDelegate;

+ (BOOL)clipsToBounds;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)dataChanged;
- (double)bottomInset;
- (double)topInset;
- (double)horizontalInset;
- (void)alignAllDayLabelToFirstOccurrence;
- (double)eventHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearanceDelegate:(id)a1;
- (double)insetBetweenEvents;

@end
