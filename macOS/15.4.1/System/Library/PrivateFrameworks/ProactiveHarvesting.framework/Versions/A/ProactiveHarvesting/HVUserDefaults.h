@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (id)defaults;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (BOOL)harvestBudgetDisabled;
+ (BOOL)harvestBudgetRefillDisabled;
+ (double)harvestBudgetReserve;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetDisabled;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetReserve;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)defaults;

@end
