@class NSTimeZone, NSCalendar, _NSDatePickerCalendarOverlay, NSLocale, NSDate, NSColor;
@protocol NSDatePickerCellDelegate;

@interface NSDatePicker : NSControl <_NSDatePickerCalendarOverlayDelegate>

@property (retain) _NSDatePickerCalendarOverlay *_calendarOverlay;
@property BOOL _isShowingCalendarOverlay;
@property BOOL _isInOverlay;
@property unsigned long long datePickerStyle;
@property (getter=isBezeled) BOOL bezeled;
@property (getter=isBordered) BOOL bordered;
@property BOOL drawsBackground;
@property (copy) NSColor *backgroundColor;
@property (copy) NSColor *textColor;
@property unsigned long long datePickerMode;
@property unsigned long long datePickerElements;
@property (copy) NSCalendar *calendar;
@property (copy) NSLocale *locale;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSDate *dateValue;
@property double timeInterval;
@property (copy) NSDate *minDate;
@property (copy) NSDate *maxDate;
@property BOOL presentsCalendarOverlay;
@property (weak) id<NSDatePickerCellDelegate> delegate;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingTimeInterval;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_datePickerCell;
- (void)rightMouseDown:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_calendarOverlayShouldClose:(id)a0;
- (void)_commonAwake;
- (BOOL)_currentConfigurationSupportsCalendarOverlay;
- (id)_disabledTextColor;
- (id)_fieldElementData;
- (BOOL)_forcesLeadingZeroes;
- (void)_hideCalendarOverlay;
- (void)_reloadFieldElementData;
- (void)_removeAllCellMouseTracking;
- (void)_selectNextKeyViewHidingOverlayView:(id)a0;
- (void)_selectPreviousKeyViewHidingOverlayView:(id)a0;
- (void)_selectedDateDidChangeToDate:(id)a0 forOverlayView:(id)a1;
- (void)_setDisabledTextColor:(id)a0;
- (void)_setForcesLeadingZeroes:(BOOL)a0;
- (void)_setMouseTrackingForCell:(id)a0;
- (void)_setWrapsDateComponentArithmetic:(BOOL)a0;
- (BOOL)_shouldShowCalendarOverlayForEvent:(id)a0;
- (BOOL)_shouldShowOverlayForElement:(int)a0;
- (void)_showCalendarOverlay;
- (BOOL)_wrapsDateComponentArithmetic;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)ns_hasCalendar;
- (BOOL)ns_hasClock;
- (BOOL)ns_hasClockAndCalendar;
- (BOOL)ns_isGraphical;
- (id)ns_widgetType;
- (void)removeFromSuperview;
- (BOOL)resignFirstResponder;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;

@end
