@class NSTextField, NSCalendar, NSArray, NSDate, CalUIAXMiniMonthProxy, NSString, CalUIMiniMonthViewFormatter, NSTrackingArea, NSMutableArray, NSButton;
@protocol CalUIMiniMonthViewDelegate;

@interface CalUIDayMiniMonthView : NSView <CalUIAXMiniMonthProxyDelegate> {
    NSDate *_date;
    NSTrackingArea *_trackingArea;
}

@property (retain) NSMutableArray *thisMonthsDayCells;
@property (retain) NSMutableArray *allDayCells;
@property (readonly) NSDate *month;
@property (retain) NSDate *nextMonth;
@property (retain) NSTextField *monthNameField;
@property (retain) NSButton *previousMonthButton;
@property (retain) NSButton *nextMonthButton;
@property unsigned long long daysInWeek;
@property unsigned long long firstDayOfWeek;
@property (retain) NSCalendar *calendar;
@property long long widthPerDay;
@property (retain) NSArray *weekDayTitles;
@property (weak) id<CalUIMiniMonthViewDelegate> delegate;
@property (retain) NSDate *date;
@property (retain) CalUIMiniMonthViewFormatter *formatter;
@property BOOL supportsScrubbing;
@property BOOL supportsHovering;
@property (retain) CalUIAXMiniMonthProxy *axMiniMonthProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedDragTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)effectiveAppearance;
- (void)draggingExited:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)allowsVibrancy;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (unsigned long long)numberOfRows;
- (BOOL)performDragOperation:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })axSize;
- (void)_updateGeometry;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axFrame;
- (void)forwardOneMonth;
- (void)updateWithDate:(id)a0;
- (id)_attributedMonthStringShortened:(BOOL)a0;
- (id)_attributedWeekNumberStringForDate:(id)a0;
- (double)_bottomInsetForTotalRows:(long long)a0 totalHeight:(double)a1;
- (unsigned long long)_columnForDayCell:(id)a0;
- (id)_eventFromDragSource:(id)a0;
- (double)_heightForRow:(long long)a0 totalRows:(long long)a1 totalHeight:(double)a2;
- (id)_miniMonthDayCellForDate:(id)a0 isActive:(BOOL)a1 isPrevMonth:(BOOL)a2 isNextMonth:(BOOL)a3;
- (void)_updateAttributesForDayCell:(id)a0 isPrevNextMonth:(BOOL)a1;
- (void)_updateConstants;
- (void)_updateWeekDayTitles;
- (unsigned long long)_weekRowForDayCell:(id)a0;
- (unsigned long long)_weekRowForDayNumber:(long long)a0 firstWeekdayOfMonth:(long long)a1 firstDayOfWeek:(long long)a2 daysInAWeek:(unsigned long long)a3;
- (double)_widthForColumn:(long long)a0;
- (double)_xOffsetForColumn:(long long)a0;
- (double)_yOffsetForRow:(long long)a0 totalRows:(long long)a1 totalHeight:(double)a2;
- (id)axChildren;
- (long long)axColumnCount;
- (id)axFirstDate;
- (long long)axRowCount;
- (id)axSelectedChildren;
- (void)backOneMonth;
- (void)backOneMonthAndNotify:(BOOL)a0;
- (void)configureDayCells;
- (void)forwardOneMonthAndNotify:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 formatter:(id)a1;
- (unsigned long long)minimumNumberOfRowsNeededForInMonthDays;
- (void)selectDayCell:(id)a0;
- (void)updateWithDate:(id)a0 force:(BOOL)a1;

@end
