@interface EXSGraphSyncUtils : NSObject

+ (void)applyRecurrence:(id)a0 toProperties:(id)a1;
+ (void)applyRecurrencePattern:(id)a0 toProperties:(id)a1;
+ (void)applyRecurrenceRange:(id)a0 toProperties:(id)a1;
+ (id)buildGraphRecurrenceFromProperties:(id)a0;
+ (id)dateTimeDictionaryFromComponents:(id)a0;
+ (id)deriveRecurrencePatternFromProperties:(id)a0;
+ (id)deriveRecurrenceRangeFromProperties:(id)a0;
+ (unsigned long long)firstDayOfWeekFromEXSDay:(long long)a0;
+ (long long)firstDayOfWeekFromGraphDay:(unsigned long long)a0;
+ (unsigned long long)recurrencePatternTypeFromEXSType:(long long)a0;
+ (long long)recurrencePatternTypeFromGraphType:(unsigned long long)a0;
+ (unsigned long long)recurrenceRangeTypeFromEXSDuration:(long long)a0;
+ (long long)recurrenceRangeTypeFromGraphDuration:(unsigned long long)a0;

@end
