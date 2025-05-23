@class NSTimeZone, NSString, NSArray, NSLocale;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>

@property (class, nonatomic, readonly) NSCalendar *_autoupdatingCurrent;
@property (class, nonatomic, readonly) NSCalendar *_current;
@property (class, readonly, copy) NSCalendar *currentCalendar;
@property (class, readonly) NSCalendar *autoupdatingCurrentCalendar;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *calendarIdentifier;
@property (copy) NSLocale *locale;
@property (copy) NSTimeZone *timeZone;
@property unsigned long long firstWeekday;
@property unsigned long long minimumDaysInFirstWeek;
@property (readonly, copy) NSArray *eraSymbols;
@property (readonly, copy) NSArray *longEraSymbols;
@property (readonly, copy) NSArray *monthSymbols;
@property (readonly, copy) NSArray *shortMonthSymbols;
@property (readonly, copy) NSArray *veryShortMonthSymbols;
@property (readonly, copy) NSArray *standaloneMonthSymbols;
@property (readonly, copy) NSArray *shortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *veryShortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *weekdaySymbols;
@property (readonly, copy) NSArray *shortWeekdaySymbols;
@property (readonly, copy) NSArray *veryShortWeekdaySymbols;
@property (readonly, copy) NSArray *standaloneWeekdaySymbols;
@property (readonly, copy) NSArray *shortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *quarterSymbols;
@property (readonly, copy) NSArray *shortQuarterSymbols;
@property (readonly, copy) NSArray *standaloneQuarterSymbols;
@property (readonly, copy) NSArray *shortStandaloneQuarterSymbols;
@property (readonly, copy) NSString *AMSymbol;
@property (readonly, copy) NSString *PMSymbol;

+ (id)_newCalendarWithIdentifier:(const struct __CFString { } *)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)calendarWithIdentifier:(id)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)bs_dayPeriodForDate:(id)a0 inLocale:(id)a1;
- (BOOL)date:(id)a0 isSameDayAsDate:(id)a1;
- (BOOL)date:(id)a0 isSameYearAsDate:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)getEra:(out long long *)a0 year:(out long long *)a1 month:(out long long *)a2 day:(out long long *)a3 fromDate:(id)a4;
- (unsigned long long)_cfTypeID;
- (long long)compareDate:(id)a0 toDate:(id)a1 toUnitGranularity:(unsigned long long)a2;
- (long long)component:(unsigned long long)a0 fromDate:(id)a1;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)components:(unsigned long long)a0 fromDateComponents:(id)a1 toDateComponents:(id)a2 options:(unsigned long long)a3;
- (id)componentsInTimeZone:(id)a0 fromDate:(id)a1;
- (BOOL)date:(id)a0 matchesComponents:(id)a1;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)dateByAddingUnit:(unsigned long long)a0 value:(long long)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)dateBySettingHour:(long long)a0 minute:(long long)a1 second:(long long)a2 ofDate:(id)a3 options:(unsigned long long)a4;
- (id)dateBySettingUnit:(unsigned long long)a0 value:(long long)a1 ofDate:(id)a2 options:(unsigned long long)a3;
- (id)dateFromComponents:(id)a0;
- (id)dateWithEra:(long long)a0 year:(long long)a1 month:(long long)a2 day:(long long)a3 hour:(long long)a4 minute:(long long)a5 second:(long long)a6 nanosecond:(long long)a7;
- (id)dateWithEra:(long long)a0 yearForWeekOfYear:(long long)a1 weekOfYear:(long long)a2 weekday:(long long)a3 hour:(long long)a4 minute:(long long)a5 second:(long long)a6 nanosecond:(long long)a7;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)getEra:(out long long *)a0 yearForWeekOfYear:(out long long *)a1 weekOfYear:(out long long *)a2 weekday:(out long long *)a3 fromDate:(id)a4;
- (void)getHour:(out long long *)a0 minute:(out long long *)a1 second:(out long long *)a2 nanosecond:(out long long *)a3 fromDate:(id)a4;
- (id)gregorianStartDate;
- (id)initWithCalendarIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDate:(id)a0 equalToDate:(id)a1 toUnitGranularity:(unsigned long long)a2;
- (BOOL)isDate:(id)a0 inSameDayAsDate:(id)a1;
- (BOOL)isDateInToday:(id)a0;
- (BOOL)isDateInTomorrow:(id)a0;
- (BOOL)isDateInWeekend:(id)a0;
- (BOOL)isDateInYesterday:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maximumRangeOfUnit:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })minimumRangeOfUnit:(unsigned long long)a0;
- (id)nextDateAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2;
- (id)nextDateAfterDate:(id)a0 matchingHour:(long long)a1 minute:(long long)a2 second:(long long)a3 options:(unsigned long long)a4;
- (id)nextDateAfterDate:(id)a0 matchingUnit:(unsigned long long)a1 value:(long long)a2 options:(unsigned long long)a3;
- (BOOL)nextWeekendStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (BOOL)rangeOfUnit:(unsigned long long)a0 startDate:(id *)a1 interval:(double *)a2 forDate:(id)a3;
- (BOOL)rangeOfWeekendStartDate:(out id *)a0 interval:(out double *)a1 containingDate:(id)a2;
- (void)setGregorianStartDate:(id)a0;
- (id)startOfDayForDate:(id)a0;

@end
