@class NSCalendar;

@interface TSCECalendar : NSObject {
    NSCalendar *_calendar;
}

+ (id)gregorianCalendar;
+ (id)ISO8601Calendar;
+ (id)dateWithSerialNumber:(double)a0 dateMode:(int)a1;
+ (double)daysToSeconds:(double)a0;
+ (id)gregorianGMTCalendar;
+ (BOOL)isLeapYear:(long long)a0;
+ (long long)isoWeekNumberForDate:(id)a0;
+ (double)mapDateToDouble:(id)a0;
+ (id)referenceDate1904;
+ (double)secondsToDays:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)dateFromComponents:(id)a0;
- (id)dateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
- (id)dateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5;
- (long long)extractWeekday:(id)a0;
- (id)clearOffTime:(id)a0;
- (id)dateWithIdenticalComponentsInGMTForDate:(id)a0;
- (double)dayCountFromStartDate:(id)a0 endDate:(id)a1 basis:(long long)a2 outError:(id *)a3;
- (void)extractComponentsFromDate:(id)a0 year:(long long *)a1 month:(long long *)a2 day:(long long *)a3;
- (void)extractComponentsFromDate:(id)a0 year:(long long *)a1 month:(long long *)a2 day:(long long *)a3 hour:(long long *)a4 minute:(long long *)a5 second:(long long *)a6;
- (long long)extractDay:(id)a0;
- (long long)extractHour:(id)a0;
- (long long)extractMinute:(id)a0;
- (long long)extractMonth:(id)a0;
- (long long)extractSecond:(id)a0;
- (long long)extractYear:(id)a0;
- (id)initWithCalendarIdentifier:(id)a0 timeZone:(id)a1;
- (double)numDaysInYearWithStartDate:(id)a0 endDate:(id)a1 basis:(long long)a2 outError:(id *)a3;
- (long long)weekNumberForDate:(id)a0 withType:(int)a1;

@end
