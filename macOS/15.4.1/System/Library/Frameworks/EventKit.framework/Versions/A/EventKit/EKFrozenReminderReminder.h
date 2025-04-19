@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)calendar;
- (id)timeZone;
- (id)UUID;
- (id)uniqueIdentifier;
- (id)unlocalizedTitle;
- (unsigned long long)priority;
- (id)uniqueID;
- (id)creationDate;
- (id)clientLocation;
- (id)completionDate;
- (id)notes;
- (id)structuredLocation;
- (id)actionString;
- (id)URLString;
- (id)lastModifiedDate;
- (id)alarms;
- (id)startDateComponents;
- (id)organizer;
- (id)originalItem;
- (id)dueDateComponents;
- (BOOL)hasAttendees;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_copyToNewList:(id)a0 error:(id *)a1;
- (void)_fixAlarmUUIDsForClone:(id)a0 from:(id)a1;
- (id)_reminder;
- (id)allAlarmsSet;
- (id)appLinkData;
- (id)attachmentsSet;
- (id)attendeesRaw;
- (id)calendarItemExternalIdentifier;
- (id)calendarItemIdentifier;
- (BOOL)defaultAlarmRemoved;
- (BOOL)defaultAlarmWasDeleted;
- (id)detachedItems;
- (id)ekExceptionDates;
- (BOOL)hasNotes;
- (BOOL)hasRecurrenceRules;
- (id)initNewReminderInStore:(id)a0;
- (id)recurrenceRulesSet;
- (id)remObjectID;
- (id)selfAttendee;
- (id)structuredLocationWithoutPrediction;
- (id)syncError;
- (id)travelStartLocation;

@end
