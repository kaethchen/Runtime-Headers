@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators;

+ (void)registerOperator:(Class)a0;
+ (id)registeredOperators;
+ (id)registeredOperatorsOfSuperClassType:(Class)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)startOperatorsOfSuperClassType:(Class)a0;
- (id)allOperators;
- (void)initOperatorDependancies;
- (void)initOperatorDependanciesWithBlock:(id /* block */)a0;
- (void)initTaskOperatorDependancies;
- (void)setupEntryObjectsAndStorage:(id)a0;
- (void)startServicesForPreUnlockTelemetry;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;

@end
