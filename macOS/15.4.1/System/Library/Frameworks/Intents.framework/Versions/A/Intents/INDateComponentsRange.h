@class INRecurrenceRule, NSString, NSDateInterval, NSDate, NSNumber, NSDateComponents;

@interface INDateComponentsRange : NSObject <INDateComponentsRangeExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;
@property (readonly, copy) NSString *userInput;
@property (readonly, copy) NSNumber *allDay;
@property (readonly, copy) NSDateComponents *startDateComponents;
@property (readonly, copy) NSDateComponents *endDateComponents;
@property (readonly, copy) INRecurrenceRule *recurrenceRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithEKRecurrenceRule:(id)a0;
- (id)EKRecurrenceRule;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)_userInput;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithDate:(id)a0 onCalendar:(id)a1 inTimeZone:(id)a2;
- (id)initWithDateInterval:(id)a0 onCalendar:(id)a1 inTimeZone:(id)a2;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 onCalendar:(id)a2 inTimeZone:(id)a3;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1 recurrenceRule:(id)a2;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1 recurrenceRule:(id)a2 userInput:(id)a3 allDay:(id)a4;

@end
