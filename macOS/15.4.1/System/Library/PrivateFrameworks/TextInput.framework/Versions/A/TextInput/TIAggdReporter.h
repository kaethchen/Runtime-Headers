@class NSString;

@interface TIAggdReporter : NSObject <TIAggdReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDefaultSoftwareLayout;
+ (void)setSharedAggdReporter:(id)a0;
+ (id)sharedAggdReporter;
+ (id)singletonInstance;

- (int)commit;
- (void)clearScalarKey:(id)a0;
- (void)addValue:(long long)a0 forKey:(id)a1;
- (void)clearDistributionKey:(id)a0;
- (void)decrementKey:(id)a0;
- (void)incrementKey:(id)a0;
- (void)pushValue:(double)a0 forKey:(id)a1;
- (void)setValue:(double)a0 forDistributionKey:(id)a1;
- (void)setValue:(long long)a0 forScalarKey:(id)a1;
- (void)significantTimeChanged;
- (void)subtractValue:(long long)a0 forKey:(id)a1;

@end
