@class NSDateFormatter, NSCalendar, NSRecursiveLock;

@interface KHCalendarUtility : NSObject {
    NSRecursiveLock *_formattingLock;
    NSRecursiveLock *_calendarLock;
    NSDateFormatter *_dateValueFormatter;
    NSDateFormatter *_datetimeValueFormatter;
    NSDateFormatter *_weekdayIndexFormatter;
    NSDateFormatter *_singleCharacterWeekdayFormatter;
    NSDateFormatter *_shortWeekdayFormatter;
    NSDateFormatter *_longWeekdayFormatter;
    NSDateFormatter *_longMonthNameFormatter;
    NSDateFormatter *_shortMonthNameFormatter;
    NSDateFormatter *_longMonthAndYearFormatter;
    NSDateFormatter *_dayOfMonthFormatter;
    NSDateFormatter *_dayOfYearFormatter;
}

@property (readonly, nonatomic) NSCalendar *calendar;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)firstWeekday;
- (id)stringFromDate:(id)a0;
- (id)dateFromString:(id)a0;
- (id)dateByAddingDays:(long long)a0 toDate:(id)a1;
- (id)dateByAddingMonths:(long long)a0 toDate:(id)a1;
- (id)dateByAddingYears:(long long)a0 toDate:(id)a1;
- (id)_dateByAddingDay:(long long)a0 month:(long long)a1 year:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 forDate:(id)a6;
- (id)_dateWithDayOfWeek:(unsigned long long)a0 weekOfMonth:(long long)a1 forDate:(id)a2;
- (BOOL)_dayForDate:(id)a0 isEarlierThanDate:(id)a1;
- (BOOL)_dayForDate:(id)a0 isEqualToDate:(id)a1;
- (id)_dayOfWeekFormatter;
- (unsigned long long)_dayOfWeekIndexForDateSUZero:(id)a0;
- (id)abbrevMonthStringForDate:(id)a0;
- (id)calendarComponents:(unsigned long long)a0 fromDate:(id)a1;
- (id)calendarComponents:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)dateByAddingCalendarComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)dateFromCalendarComponents:(id)a0;
- (id)dateFromDeprecatedPhotoDate:(double)a0;
- (id)dateWithDay:(long long)a0 month:(long long)a1 year:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5;
- (id)dayOfMonthForDate:(id)a0;
- (unsigned long long)dayOfWeekIndexForDate:(id)a0;
- (unsigned long long)dayOfYearIndexForDate:(id)a0;
- (unsigned long long)daysInMonthForDate:(id)a0;
- (long long)defaultStartingMonthIndex;
- (long long)defaultStartingYearIndex;
- (id)firstDateOfMonthForDate:(id)a0;
- (id)lastDateOfMonthForDate:(id)a0;
- (id)monthAndYearStringForDate:(id)a0;
- (id)monthStringForDate:(id)a0;
- (id)shortWeekdayStringForDate:(id)a0;
- (id)singleCharacterWeekdayStringForDate:(id)a0;
- (id)startingMonthValues;
- (id)startingYearValues;
- (id)weekdayStringForDate:(id)a0;

@end
