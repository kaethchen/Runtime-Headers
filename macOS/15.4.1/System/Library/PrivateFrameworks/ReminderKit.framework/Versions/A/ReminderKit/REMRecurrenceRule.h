@class NSString, NSArray, REMRecurrenceEnd, REMObjectID;

@interface REMRecurrenceRule : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *reminderID;
@property (readonly, copy, nonatomic) REMRecurrenceEnd *recurrenceEnd;
@property (readonly, nonatomic) long long frequency;
@property (readonly, nonatomic) long long interval;
@property (readonly, nonatomic) long long firstDayOfTheWeek;
@property (readonly, nonatomic) NSArray *daysOfTheWeek;
@property (readonly, nonatomic) NSArray *daysOfTheMonth;
@property (readonly, nonatomic) NSArray *daysOfTheYear;
@property (readonly, nonatomic) NSArray *weeksOfTheYear;
@property (readonly, nonatomic) NSArray *monthsOfTheYear;
@property (readonly, nonatomic) NSArray *setPositions;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)iCalendarValueFromDate:(id)a0 isDateOnly:(BOOL)a1 isFloating:(BOOL)a2;
+ (id)iCalendarValueFromRecurrenceType:(long long)a0;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)hourlyRecurrentDueDateToward:(id)a0 dueDate:(id)a1 interval:(long long)a2 adjustingStepsBy:(id /* block */)a3;
+ (int)_convertREMRecurrenceFrequencyToCalRecurrenceFrequency:(long long)a0;
+ (id)hourlyRecurrentDueDateAfter:(id)a0 dueDate:(id)a1 interval:(long long)a2;
+ (id)hourlyRecurrentDueDateBefore:(id)a0 dueDate:(id)a1 interval:(long long)a2;
+ (id)iCalendarValueFromWeekday:(long long)a0;
+ (id)nextRecurrentDueDateAfter:(id)a0 dueDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3 recurrenceRules:(id)a4;
+ (id)previousRecurrentDueDateBefore:(id)a0 dueDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3 recurrenceRules:(id)a4;
+ (id)recurrenceGeneratorConfiguredForDueDate:(id)a0 timeZone:(id)a1 allDay:(BOOL)a2 recurrenceRule:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValueAsDateOnly:(BOOL)a0 isFloating:(BOOL)a1;
- (id)iCalendarDescription;
- (id)initRecurrenceRuleWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 frequency:(long long)a3 interval:(long long)a4 firstDayOfTheWeek:(long long)a5 daysOfTheWeek:(id)a6 daysOfTheMonth:(id)a7 monthsOfTheYear:(id)a8 weeksOfTheYear:(id)a9 daysOfTheYear:(id)a10 setPositions:(id)a11 end:(id)a12;
- (BOOL)isEqualToRecurrenceRule:(id)a0;
- (id)initRecurrenceRuleWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 frequency:(long long)a3 interval:(long long)a4 end:(id)a5;
- (id)initWithRecurrenceRule:(id)a0 objectID:(id)a1 accountID:(id)a2 reminderID:(id)a3;
- (id)initWithRecurrenceRule:(id)a0 objectID:(id)a1 end:(id)a2;

@end
