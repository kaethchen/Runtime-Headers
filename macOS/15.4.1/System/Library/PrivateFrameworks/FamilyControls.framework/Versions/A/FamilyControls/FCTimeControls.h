@class FCAllowanceTimeControl, FCCurfewTimeControl;

@interface FCTimeControls : NSObject

@property (retain) FCAllowanceTimeControl *weekdayAllowance;
@property (retain) FCAllowanceTimeControl *weekendAllowance;
@property (retain) FCCurfewTimeControl *weekdayCurfew;
@property (retain) FCCurfewTimeControl *weekendCurfew;

+ (int)curfewTimeRemainingWithExtensions:(id)a0 referenceDate:(id)a1;
+ (id)defaultTimeControls;
+ (void)extendSecondsForToday:(long long)a0 logoutDate:(id)a1 user:(id)a2;
+ (int)extendedSecondsWithExtensions:(id)a0 referenceDate:(id)a1;
+ (BOOL)extension:(id)a0 isFromDate:(id)a1;
+ (id)extensionsForUser:(id)a0 date:(id)a1;
+ (id)timeControlsFromDictionary:(id)a0;
+ (id)timeControlsFromV1MCXDictionary:(id)a0;
+ (int)totalExtendedSecondsForExtensions:(id)a0 date:(id)a1;
+ (int)yesterdayRolloverSecondsForExtensions:(id)a0 date:(id)a1 clip:(BOOL)a2;

- (void)dealloc;
- (id)plistRepresentation;
- (id)curfewInEffect:(id)a0;
- (id)_nonWrappingRangesForDate:(id)a0;
- (id)allowanceInEffect:(id)a0;
- (BOOL)allowanceIsInEffect:(id)a0;
- (BOOL)curfewBlocksDate:(id)a0;
- (id)nextCurfewDateAfterDate:(id)a0;
- (id)nextNonCurfewDateAfterDate:(id)a0;
- (int)remainingTimeWithUsageSecs:(int)a0 extensions:(id)a1 result:(int *)a2 date:(id)a3;

@end
