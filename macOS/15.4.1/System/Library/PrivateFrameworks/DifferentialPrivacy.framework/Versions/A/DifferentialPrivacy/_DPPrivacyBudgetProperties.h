@class NSString, NSNumber;

@interface _DPPrivacyBudgetProperties : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *intervalBudgetValue;
@property (retain, nonatomic) NSNumber *intervalCohortAggregateBudgetValue;
@property (retain, nonatomic) NSNumber *intervalChunksValue;
@property (retain, nonatomic) NSNumber *refillInterval;
@property (retain, nonatomic) NSNumber *refillAmount;

+ (id)allBudgetPropertiesKeys;
+ (id)budgetMaintenanceSchedule;
+ (id)budgetPropertiesForKey:(id)a0;
+ (id)budgetPropertiesFromFile:(id)a0;
+ (id)budgetPropertiesWithName:(id)a0 fromDictionary:(id)a1;
+ (void)initializeAllBudgetProperties;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dictionary:(id)a1;

@end
