@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject

+ (int)convertFromReminderKitFrequency:(long long)a0;
+ (int)convertFromReminderKitWeekday:(long long)a0;
+ (long long)convertToReminderKitFrequency:(int)a0;
+ (long long)convertToReminderKitWeekday:(int)a0;
+ (Class)meltedClass;

- (unsigned long long)count;
- (id)uuid;
- (id)uniqueIdentifier;
- (id)endDate;
- (long long)interval;
- (id)specifier;
- (id)_recurrenceRule;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)addUpdatedRecurrenceRule:(id)a0;
- (id)daysOfTheWeekFromREMRecurrenceRule;
- (long long)ekWeekdayToREMWeekday:(long long)a0;
- (int)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (void)loadSpecifierDaysOfTheWeek:(id *)a0 daysOfTheMonth:(id *)a1 monthsOfTheYear:(id *)a2 weeksOfTheYear:(id *)a3 daysOfTheYear:(id *)a4 setPositions:(id *)a5;
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)a0;
- (id)remObjectID;
- (long long)remWeekdayToEKWeekday:(long long)a0;

@end
