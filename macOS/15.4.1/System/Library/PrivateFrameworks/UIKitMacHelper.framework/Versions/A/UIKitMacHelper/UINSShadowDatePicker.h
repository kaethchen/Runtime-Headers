@class NSTimeZone, NSDatePicker, NSCalendar, NSLocale, NSDate;
@protocol UINSShadowDatePickerDelegate;

@interface UINSShadowDatePicker : NSObject <UINSShadowDatePicker>

@property (retain, nonatomic) NSDatePicker *backingDatePicker;
@property (nonatomic) BOOL isSettingDate;
@property (weak, nonatomic) id<UINSShadowDatePickerDelegate> delegate;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSDate *minDate;
@property (copy, nonatomic) NSDate *maxDate;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *backingDatePickerDateValue;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backingDatePickerSubfieldsFrame;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)a0;
- (id)backingDatePickerHighlightedTextColor;
- (id)calendarValues;
- (void)createBackingDatePickerIfNecessary;
- (void)datePreferencesDidChange:(id)a0;
- (void)decrememntElement:(long long)a0;
- (void)finishPendingEdit;
- (void)incrememntElement:(long long)a0;
- (BOOL)processInputString:(id)a0 forElement:(long long)a1;
- (void)reloadCalendarValues;
- (void)setBackingDatePickerMode:(unsigned long long)a0;

@end
