@class NSDate;

@interface _NSDatePickerRange : NSObject {
    NSDate *_date;
    double _timeInterval;
    BOOL _anchorOnLeft;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)date;
- (double)timeInterval;
- (id)endDate;
- (void)setDate:(id)a0;
- (BOOL)isAnchoredRight;
- (BOOL)containsDayGranularityDate:(id)a0 forDatePickerCell:(id)a1;
- (BOOL)containsMonth:(long long)a0 year:(long long)a1 forDatePickerCell:(id)a2;
- (id)dateRangeAnchoredSelectionWithDate:(id)a0;
- (id)dateRangeExtendedWithDate:(id)a0;
- (id)dateRangeTrimmedFromNearestEndWithDate:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })daysInMonth:(long long)a0 year:(long long)a1 forDatePickerCell:(id)a2;
- (id)initWithDate:(id)a0 timeInterval:(double)a1;
- (id)initWithDatePickerRange:(id)a0;
- (BOOL)isAnchoredLeft;
- (void)setAnchorLeft;
- (void)setAnchorRight;
- (void)setTimeInterval:(double)a0;

@end
