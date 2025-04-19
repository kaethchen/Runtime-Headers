@class _PASLazyPurgeableResult;

@interface ATXComplicationSuggestionHeuristics : NSObject {
    _PASLazyPurgeableResult *_cache;
}

+ (unsigned long long)getClimateCountGivenHomeCounts:(id)a0;
+ (id)_countedHomeAccessoryEvents;
+ (unsigned long long)_fetchNumberOfCalendarEventsForStartDate:(id)a0 endDate:(id)a1;
+ (unsigned long long)_numBluetoothConnectionsOverLastWeek;
+ (unsigned long long)_numCalendarEventsOverLastAndNextWeek;
+ (unsigned long long)_numRemindersOverLastWeek;
+ (unsigned long long)getLightCountGivenHomeCounts:(id)a0;
+ (unsigned long long)getSecurityCountGivenHomeCounts:(id)a0;
+ (unsigned long long)numberOfRemindersSinceDate:(id)a0;
+ (long long)scoreFromConfidence:(unsigned char)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)flushCache;
- (id)_homeHeuristics;
- (unsigned char)_batteryHeuristic;
- (unsigned char)_calendarHeuristic;
- (BOOL)_confidenceIsValidForPrediction:(unsigned char)a0;
- (unsigned char)_reminderHeuristic;
- (id)complicationHeuristicsDictionary;

@end
