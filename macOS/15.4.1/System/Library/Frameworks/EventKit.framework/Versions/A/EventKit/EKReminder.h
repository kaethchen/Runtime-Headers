@class NSTimeZone, NSDateComponents, NSDate, EKObjectID;

@interface EKReminder : EKCalendarItem

@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (id)reminderWithEventStore:(id)a0;
+ (void)_removeSnoozedAlarmsFromReminder:(id)a0 usingDueDate:(id)a1;
+ (Class)frozenClass;
+ (id)generateUniqueIDWithReminder:(id)a0 calendar:(id)a1;
+ (id)knownSingleValueKeysForComparison;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setTimeZone:(id)a0;
- (id)timeZone;
- (void)reset;
- (BOOL)_reset;
- (id)title;
- (void)rollback;
- (id)constraints;
- (BOOL)save:(id *)a0;
- (BOOL)validate:(id *)a0;
- (BOOL)refresh;
- (id)dueDate;
- (void)setAllDay:(BOOL)a0;
- (void)setDueDate:(id)a0;
- (void)setStartDateTimeZone:(id)a0;
- (id)startDateTimeZone;
- (BOOL)isAllDay;
- (id)externalURI;
- (unsigned long long)entityType;
- (void)setStartDateComponents:(id)a0;
- (id)startDateComponents;
- (unsigned long long)displayOrder;
- (void)setDisplayOrder:(unsigned long long)a0;
- (id)dueDateComponents;
- (void)setStartTimeZone:(id)a0;
- (id)startTimeZone;
- (BOOL)startDateAllDay;
- (void)_adjustAfterMovingOrCopyingFromOldCalendar:(id)a0 toNewCalendar:(id)a1 cachedConstraintsForOldCalendar:(id)a2 savingItem:(id)a3;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)a0;
- (id)_generateNewUniqueID;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (id)committedConstraints;
- (BOOL)dueDateAllDay;
- (id)firstAlertDate;
- (void)forceUpdateFrozenCalendar:(id)a0;
- (id)initWithPersistentObject:(id)a0;
- (id)reminderIdentifier;
- (void)setDueDateComponents:(id)a0;
- (void)setFirstAlertDate:(id)a0;
- (void)setStartDateAllDay:(BOOL)a0;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1 pinsTriggerToStartDate:(BOOL)a2;
- (id)startDateComponentsRaw;
- (id)startDateForRecurrence;

@end
