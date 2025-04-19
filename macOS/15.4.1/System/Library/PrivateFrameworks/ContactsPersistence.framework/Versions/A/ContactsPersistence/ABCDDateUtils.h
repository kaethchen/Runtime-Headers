@interface ABCDDateUtils : NSObject

+ (id)componentsFromDate:(id)a0;
+ (id)gregorianCalendar;
+ (id)calendarWithOffsetFromGMT:(long long)a0;
+ (id)dateAtNoonGMTFromGregorianDateComponents:(id)a0;
+ (id)dateByNormalizingToGMT:(id)a0;
+ (id)dateComponentsFromGMTDate:(id)a0;
+ (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)a0;
+ (BOOL)isDateComponentsEmpty:(id)a0;
+ (id)localCalendar;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)a0 inTimeZoneSecondsFromGMT:(long long)a1;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)a0;
+ (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)a0;
+ (id)localDateWithHour:(unsigned long long)a0 occurringOnSameCalendarDayAsDate:(id)a1 inTimeZoneSecondsFromGMT:(long long)a2;
+ (id)localDateWithHour:(unsigned long long)a0 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)a1;
+ (id)makeCalendarWithOffsetFromGMT:(long long)a0;

- (id)localDateWithHour:(unsigned long long)a0 occurringOnSameCalendarDayAsDate:(id)a1 inTimeZoneSecondsFromGMT:(long long)a2;

@end
