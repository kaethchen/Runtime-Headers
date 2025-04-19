@interface CUIKDateStrings : NSObject

+ (id)stylizedTimelineHourStringForHourDate:(id)a0 baseFontSize:(double)a1;
+ (id)summaryStringForEventDateWithOptions:(int)a0 withEvent:(id)a1 withWideSpacing:(BOOL)a2 inTimeZone:(id)a3;
+ (id)mediumStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)_cachedDateFormatterForDomain:(id)a0 calendar:(id)a1 formatterKey:(id)a2 creationBlock:(id /* block */)a3;
+ (id)_languageIDfromLocalID:(id)a0;
+ (id)_newDateFormatterForDateStyle:(unsigned long long)a0 timeStyle:(unsigned long long)a1 calendar:(id)a2;
+ (id)_newDateFormatterForFormat:(id)a0 calendar:(id)a1;
+ (id)_newDateFormatterForTemplate:(id)a0 calendar:(id)a1;
+ (id)_significantLocaleComponents:(id)a0;
+ (id)_summaryStringForEventDate:(id)a0 startTimeZone:(id)a1 endDate:(id)a2 endTimeZone:(id)a3 isAllDay:(BOOL)a4 inTimeZone:(id)a5 options:(int)a6 withWideSpacing:(BOOL)a7;
+ (id)_zodiacSymbolForDate:(id)a0 inCalendar:(id)a1;
+ (id)cachedDateFormatterForDateStyle:(unsigned long long)a0 timeStyle:(unsigned long long)a1 calendar:(id)a2;
+ (id)cachedDateFormatterForFormat:(id)a0 calendar:(id)a1;
+ (id)cachedDateFormatterForTemplate:(id)a0 calendar:(id)a1;
+ (id)longStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)monthDayStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)monthStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)overlayCalendarPickerDisplayNameForCalendarWithIdentifier:(id)a0;
+ (unsigned long long)overlayCalendarTypeForCalendarIdentifier:(id)a0;
+ (id)overlayDayNumberStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)overlayFirstDayOfLunarMonthLocalizedStringInCalendar:(id)a0;
+ (id)overlayLocalizedStringForKey:(id)a0 calendar:(id)a1;
+ (id)overlayMediumStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)overlayShortStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)overlayYearStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)summaryStringForEventDate:(id)a0 startTimeZone:(id)a1 endDate:(id)a2 endTimeZone:(id)a3 isAllDay:(BOOL)a4 inTimeZone:(id)a5;
+ (BOOL)supportsOverlayCalendarWithIdentifier:(id)a0;
+ (id)yearMonthDayStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)yearMonthStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)yearStringForDate:(id)a0 inCalendar:(id)a1;

@end
