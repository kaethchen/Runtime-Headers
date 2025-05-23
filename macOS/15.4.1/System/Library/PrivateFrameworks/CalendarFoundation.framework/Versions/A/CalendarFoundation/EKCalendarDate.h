@class NSCalendar, NSString, NSDateComponents, NSDate;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
    NSCalendar *_calendar;
    NSDate *_date;
    NSDateComponents *_components;
    NSString *_dateCacheKey;
}

+ (void)initialize;
+ (id)calendarDateWithAbsoluteTime:(double)a0 timeZone:(id)a1;
+ (id)calendarDateWithDate:(id)a0 timeZone:(id)a1;
+ (id)calendarDateWithDateComponents:(id)a0 timeZone:(id)a1;
+ (id)calendarDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 timeZone:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)day;
- (long long)era;
- (id)calendar;
- (long long)compare:(id)a0;
- (id)date;
- (unsigned long long)dayOfYear;
- (id)earlierDate:(id)a0;
- (long long)hour;
- (id)laterDate:(id)a0;
- (long long)minute;
- (long long)month;
- (long long)second;
- (long long)secondsFromGMT;
- (id)timeZone;
- (unsigned long long)weekOfMonth;
- (unsigned long long)weekOfYear;
- (long long)year;
- (id)components;
- (long long)dayOfWeek;
- (id)calendarDateByAddingComponents:(id)a0;
- (double)absoluteTime;
- (id)allComponents;
- (id)calendarDateByAddingDays:(long long)a0;
- (id)calendarDateByAddingGregorianUnits:(struct { int x0; int x1; int x2; int x3; int x4; double x5; })a0;
- (id)calendarDateByAddingHours:(long long)a0;
- (id)calendarDateByAddingMinutes:(long long)a0;
- (id)calendarDateByAddingMonths:(long long)a0;
- (id)calendarDateByAddingSeconds:(long long)a0;
- (id)calendarDateByAddingWeeks:(long long)a0;
- (id)calendarDateByAddingYears:(long long)a0;
- (id)calendarDateByComponentwiseAddingComponents:(id)a0;
- (id)calendarDateByComponentwiseAddingSeconds:(long long)a0;
- (id)calendarDateForDay;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(long long)a0;
- (id)calendarDateForEndOfYear;
- (id)calendarDateForMonth;
- (id)calendarDateForWeekWithWeekStart:(long long)a0;
- (id)calendarDateForWeekWithWeekStart:(long long)a0 daysSinceWeekStart:(long long *)a1;
- (id)calendarDateForYear;
- (id)calendarDateInTimeZone:(id)a0;
- (id)calendarDateWithDate:(id)a0;
- (id)componentsWithoutTime;
- (id)dayComponents;
- (id)dayTimeComponents;
- (unsigned long long)daysInMonth;
- (unsigned long long)daysInYear;
- (id)differenceAsDateComponents:(id)a0 units:(unsigned long long)a1;
- (struct { int x0; int x1; int x2; int x3; int x4; double x5; })differenceAsGregorianUnits:(id)a0 flags:(unsigned long long)a1;
- (long long)differenceInDays:(id)a0;
- (long long)differenceInMonths:(id)a0;
- (double)differenceInSeconds:(id)a0;
- (long long)differenceInYears:(id)a0;
- (id)initWithAbsoluteTime:(double)a0 timeZone:(id)a1;
- (id)initWithDate:(id)a0 calendar:(id)a1;
- (id)initWithDate:(id)a0 components:(id)a1 calendar:(id)a2;
- (id)initWithDate:(id)a0 components:(id)a1 timeZone:(id)a2;
- (id)initWithDate:(id)a0 timeZone:(id)a1;
- (id)initWithDateComponents:(id)a0 calendar:(id)a1;
- (id)initWithDateComponents:(id)a0 timeZone:(id)a1;
- (id)timeComponents;
- (id)weekComponents;
- (unsigned long long)weeksInMonth;
- (unsigned long long)weeksInYear;

@end
