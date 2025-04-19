@class NSDictionary, NSString, PLEntryNotificationOperatorComposition;

@interface PLActivityCriterionEntry : PLActivityCriterion

@property (copy) id /* block */ criterionBlock;
@property (retain) NSDictionary *filter;
@property (retain) PLEntryNotificationOperatorComposition *entryListener;
@property (readonly) NSString *entryKey;

+ (id)audioOffCriterion;
+ (id)displayOffCriterion;
+ (id)pluggedInCriterion;

- (id)description;
- (void).cxx_destruct;
- (void)didDisableActivity:(id)a0;
- (void)didEnableActivity:(id)a0;
- (id)initWithEntryKey:(id)a0 withCriterionBlock:(id /* block */)a1;
- (id)initWithEntryKey:(id)a0 withFilter:(id)a1 withCriterionBlock:(id /* block */)a2;
- (void)scheduleEntryListener;

@end
