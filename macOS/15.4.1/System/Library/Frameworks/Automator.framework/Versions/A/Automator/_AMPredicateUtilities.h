@class NSCalendar, NSDate;

@interface _AMPredicateUtilities : NSObject

@property (retain) NSCalendar *calendar;
@property (retain) NSDate *currentDate;

+ (id)predicateUtilities;
+ (unsigned long long)_typeByInspectionForPredicate:(id)a0;
+ (id)byteCountForPredicate:(id)a0;
+ (unsigned long long)byteUnitForPredicate:(id)a0;
+ (unsigned long long)calendarUnitForPredicate:(id)a0;
+ (unsigned long long)countForPredicate:(id)a0;
+ (id)keyPathForPredicate:(id)a0;
+ (unsigned long long)typeForPredicate:(id)a0;
+ (id)valueForPredicate:(id)a0;

- (void).cxx_destruct;
- (id)isThisWeekPredicateWithKeyPath:(id)a0;
- (id)predicateWithKeyPath:(id)a0 isWithinCount:(unsigned long long)a1 calendarUnits:(unsigned long long)a2 isForPastDate:(BOOL)a3;
- (id)_getDateAtMidnightBeginningTheDayForPredicate:(id)a0;
- (BOOL)_getDatesForPredicate:(id)a0 startDate:(id *)a1 endDate:(id *)a2;
- (id)convertPredicateToScriptingBridgeCompatiblePredicate:(id)a0;
- (id)convertPredicateToYearlessSearchElement:(id)a0 withProperty:(id)a1 withLabel:(id)a2 withKey:(id)a3;
- (id)isTodayPredicateWithKeyPath:(id)a0;
- (id)predicateForBytesWithKeyPath:(id)a0 type:(unsigned long long)a1 count:(long long)a2 unit:(unsigned long long)a3;
- (id)predicateForTimeIntervalWithKeyPath:(id)a0 type:(unsigned long long)a1 count:(unsigned long long)a2;
- (id)predicateWithKeyPath:(id)a0 isAfterDate:(id)a1;
- (id)predicateWithKeyPath:(id)a0 isBeforeDate:(id)a1;
- (id)predicateWithKeyPath:(id)a0 isNotWithinCount:(unsigned long long)a1 calendarUnits:(unsigned long long)a2 isForPastDate:(BOOL)a3;
- (id)predicateWithKeyPath:(id)a0 isOnDate:(id)a1;
- (id)predicateWithKeyPath:(id)a0 isOnDayOffsetByCount:(unsigned long long)a1 calendarUnits:(unsigned long long)a2 isForPastDate:(BOOL)a3;
- (id)predicateWithKeyPath:(id)a0 type:(unsigned long long)a1 value:(id)a2;
- (long long)searchComparisonForPredicate:(id)a0;

@end
