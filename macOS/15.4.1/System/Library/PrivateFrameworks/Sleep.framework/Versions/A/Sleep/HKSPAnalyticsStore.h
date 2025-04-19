@protocol HKSPUserDefaults;

@interface HKSPAnalyticsStore : NSObject

@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;
@property (copy, nonatomic) id /* block */ diagnosticsOptInStatusProvider;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (id)windDownActionsForMorningIndex:(long long)a0;
- (void)_setWindDownActions:(id)a0 forMorningIndex:(long long)a1 overwriteExisting:(BOOL)a2;
- (id)initWithUserDefaults:(id)a0 diagnosticsOptInStatusProvider:(id /* block */)a1;
- (void)markAllActionsAsCollected;
- (id)readAllWindDownActions;
- (void)removeAllWindDownActionsBeforeMorningIndex:(long long)a0;
- (void)setBaselineForWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (id)uncollectedWindDownActions;
- (void)updateWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (id)windDownActionsAfterMorningIndex:(long long)a0;
- (void)writeWindDownActions:(id)a0;

@end
