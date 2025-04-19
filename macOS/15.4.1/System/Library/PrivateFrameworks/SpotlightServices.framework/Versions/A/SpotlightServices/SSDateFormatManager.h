@class NSDateFormatter, CNDateComponentsFormatter, NSDateIntervalFormatter, NSLocale, NSDateComponentsFormatter;

@interface SSDateFormatManager : NSObject

@property (retain) NSLocale *overrideLocale;
@property (retain, nonatomic) CNDateComponentsFormatter *birthdayDateComponentsFormatter;
@property (retain, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter;
@property (retain, nonatomic) NSDateFormatter *shortRelativeDateFormatter;
@property (retain, nonatomic) NSDateFormatter *mediumRelativeDateFormatter;
@property (retain, nonatomic) NSDateFormatter *longRelativeDateFormatter;
@property (retain, nonatomic) NSDateFormatter *dayOfWeekFormatter;
@property (retain, nonatomic) NSDateFormatter *shortDayOfWeekFormatter;
@property (retain, nonatomic) NSDateFormatter *shortDateTimeFormatter;
@property (retain, nonatomic) NSDateFormatter *shortTimeFormatter;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *shortDateTimeIntervalFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *mediumDayOfWeekDateTimeIntervalFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *shortDateIntervalFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *mediumDayOfWeekDateIntervalFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *allDayDateFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;

+ (void)initialize;
+ (id)calendar;
+ (id)stringFromTimeInterval:(double)a0;
+ (id)dateFormatter;
+ (id)tomorrow;
+ (id)dateIntervalFormatter;
+ (id)dynamicDateTimeStringsFromDate:(id)a0;
+ (void)overrideLocale:(id)a0;
+ (id)allDayDateFormatter;
+ (id)allFormatters;
+ (BOOL)date:(id)a0 isBetweenDate:(id)a1 andDate:(id)a2;
+ (id)dateCompletedStringFormat;
+ (id)dateCreatedStringFormat;
+ (id)dateDueStringFormat;
+ (id)dateLastCalledStringFormat;
+ (id)dateLastOpenedStringFormat;
+ (id)dateLastPlayedStringFormat;
+ (id)dateModifiedStringFormat;
+ (id)dyanmicStringFromDate:(id)a0;
+ (id)dynamicCompactStringFromDate:(id)a0;
+ (id)dynamicMediumStringFromDate:(id)a0;
+ (id)dynamicStringFromDate:(id)a0 isCompact:(BOOL)a1;
+ (id)fullDateTimeStringsFromDate:(id)a0;
+ (BOOL)hasRelativeFormatForDate:(id)a0;
+ (id)icalConformingStringFromDate:(id)a0;
+ (BOOL)isDate:(id)a0 withinTimeInterval:(double)a1 includePast:(BOOL)a2;
+ (BOOL)isDateWithinMonthsTime:(id)a0;
+ (BOOL)isDateWithinWeeksTime:(id)a0;
+ (id)mediumDayOfWeekDateTimeIntervalFormatter;
+ (id)nextUpcomingDateForDateComponents:(id)a0 fromDate:(id)a1;
+ (void)purgeMemory;
+ (id)shortDateTimeFormatter;
+ (id)shortDateTimeStringFromDate:(id)a0 isAllDay:(BOOL)a1;
+ (id)shortDateTimeStringFromDate:(id)a0 isAllDay:(BOOL)a1 showAllDayString:(BOOL)a2;
+ (id)stringFromBirthdayComponents:(id)a0;
+ (id)stringsFromDate:(id)a0 toDate:(id)a1 isAllDay:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)calendar;
- (id)currentLocale;
- (id)allFormatters;
- (void)purgeMemory;

@end
