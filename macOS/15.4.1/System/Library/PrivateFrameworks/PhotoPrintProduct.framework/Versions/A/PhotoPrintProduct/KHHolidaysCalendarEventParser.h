@class KHCalendarUtility, NSString, NSDictionary, NSMutableDictionary, NSDate, NSMutableArray;

@interface KHHolidaysCalendarEventParser : NSOperation

@property (copy, nonatomic) NSString *eventString;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *typeListForCountry;
@property (copy, nonatomic) NSString *delimiter;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL currentRecordIsValid;
@property (copy, nonatomic) NSString *currentRecord;
@property (copy, nonatomic) NSDate *currentStartDate;
@property (copy, nonatomic) NSDate *currentEndDate;
@property (copy, nonatomic) NSString *currentRecurrenceRule;
@property (retain, nonatomic) NSMutableArray *recurrenceExceptions;
@property (retain, nonatomic) NSMutableDictionary *currentLocalizations;
@property (copy, nonatomic) NSDate *maxCalendarDate;
@property (copy, nonatomic) NSDate *latestCalendarDate;
@property (retain, nonatomic) KHCalendarUtility *calendarUtility;

- (void).cxx_destruct;
- (void)main;
- (id)_calendar;
- (id)_adjustRecurrenceDate:(id)a0 byDay:(id)a1;
- (id)_createLocalizedEventName;
- (id)_createMaxCalendarDateWithNumberOfYears:(unsigned long long)a0;
- (id)_createRecordDates;
- (unsigned long long)_dayOfWeekFromTwoCharDayAtEndOfString:(id)a0;
- (BOOL)_holidayWithNameIsValid:(id)a0;
- (BOOL)_isDateAnException:(id)a0;
- (id)_parseDateString:(id)a0;
- (void)_parseLine:(id)a0;
- (id)_parseRecurrenceRule;
- (id)_photoDateFromDaySpec:(id)a0 andStartingDate:(id)a1;
- (id)_unescapeString:(id)a0;
- (id)initWithEventString:(id)a0 type:(unsigned long long)a1 typeListForCountry:(id)a2 delimiter:(id)a3 completion:(id /* block */)a4;

@end
