@class NSTimer, NSDate, NSButtonCell, NSNumberFormatter, NSDateComponents, _NSDatePickerArrowCell, NSColor;

@interface _NSDatePickerCellExtraIvars : NSObject {
    _NSDatePickerArrowCell *_arrowLeftCell;
    _NSDatePickerArrowCell *_arrowRightCell;
    NSButtonCell *_returnToHomeMonthButtonCell;
    NSDateComponents *_calendarDisplayedMonthDateComponents;
    NSColor *_disabledTextColor;
    NSNumberFormatter *_numberFormatter;
    NSTimer *_changeMonthTimer;
    NSDate *_lastFireDateForChangeMonthTimer;
}

- (void)dealloc;
- (id)arrowLeftCellForDatePickerCell:(id)a0;
- (id)arrowRightCellForDatePickerCell:(id)a0;
- (id)calendarDisplayedMonthDateComponents;
- (id)disabledTextColor;
- (oneway void)releaseCalendarSpecificResources;
- (id)returnToHomeMonthButtonCellForDatePickerCell:(id)a0;
- (void)setDisabledTextColor:(id)a0;

@end
