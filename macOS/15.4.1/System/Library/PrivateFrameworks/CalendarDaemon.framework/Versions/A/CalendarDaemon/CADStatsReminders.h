@class CalDateRange, NSMutableArray, NSDate;

@interface CADStatsReminders : CADStatCollector {
    NSMutableArray *_reminderInfos;
    NSDate *_now;
    CalDateRange *_desiredReminderRange;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)desiredReminderRange;
- (void)prepareWithContext:(id)a0;
- (void)processReminders:(id)a0;
- (id)reminderDictionaries;
- (BOOL)wantsReminders;

@end
