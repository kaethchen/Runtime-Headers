@class NSTimeZone, NSCalendar, _NSDatePickerCalendarOverlay, NSDate, NSLocale;
@protocol UINSOverlayDatePickerDelegate;

@interface UINSOverlayDatePicker : NSObject <UINSOverlayDatePicker, _NSDatePickerCalendarOverlayDelegate>

@property (retain, nonatomic) _NSDatePickerCalendarOverlay *overlayView;
@property (nonatomic) BOOL isSettingDate;
@property (weak, nonatomic) id<UINSOverlayDatePickerDelegate> delegate;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSDate *minDate;
@property (copy, nonatomic) NSDate *maxDate;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSCalendar *calendar;

- (void).cxx_destruct;
- (void)_calendarOverlayShouldClose:(id)a0;
- (void)_selectNextKeyViewHidingOverlayView:(id)a0;
- (void)_selectPreviousKeyViewHidingOverlayView:(id)a0;
- (void)_selectedDateDidChangeToDate:(id)a0 forOverlayView:(id)a1;
- (void)_calendarOverlayDidResignKeyWindow:(id)a0;
- (void)showOverlayDatePickerWithWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 window:(id)a1 date:(id)a2 font:(id)a3 selectedElement:(long long)a4 mode:(unsigned long long)a5;

@end
