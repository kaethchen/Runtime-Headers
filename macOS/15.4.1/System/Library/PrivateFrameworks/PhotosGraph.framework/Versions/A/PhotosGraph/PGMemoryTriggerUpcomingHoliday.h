@class NSSet;

@interface PGMemoryTriggerUpcomingHoliday : PGHolidayMemoryTrigger {
    NSSet *_validHolidaysNames;
}

- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)initWithLoggingConnection:(id)a0 holidayService:(id)a1;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
