@interface ABDateHelper : NSObject

+ (id)dateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 timeZone:(id)a6;
+ (id)componentsFromDate:(id)a0;
+ (long long)currentGregorianYearInGMT;
+ (id)dateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
+ (id)gregorianCalendar;
+ (id)gregorianCalendarInGMT;
+ (long long)gregorianYearFromDate:(id)a0;
+ (long long)gregorianYearInGMTFromDate:(id)a0;
+ (id)calendarWithOffsetFromGMT:(long long)a0;
+ (id)dateByNormalizingToGMT:(id)a0;
+ (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)a0;
+ (id)localCalendar;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)a0 inTimeZoneSecondsFromGMT:(long long)a1;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)a0;
+ (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)a0;
+ (id)localDateWithHour:(unsigned long long)a0 occurringOnSameCalendarDayAsDate:(id)a1 inTimeZoneSecondsFromGMT:(long long)a2;
+ (id)localDateWithHour:(unsigned long long)a0 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)a1;
+ (id)makeCalendarWithOffsetFromGMT:(long long)a0;
+ (id)gmtCalendar;

- (id)dateByNormalizingToGMT:(id)a0;
- (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)a0;
- (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)a0 inTimeZoneSecondsFromGMT:(long long)a1;
- (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)a0;
- (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)a0;
- (id)localDateWithHour:(unsigned long long)a0 occurringOnSameCalendarDayAsDate:(id)a1 inTimeZoneSecondsFromGMT:(long long)a2;
- (id)localDateWithHour:(unsigned long long)a0 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)a1;

@end
