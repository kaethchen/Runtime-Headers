@interface IASDailyGarbageCollectionStateMachineAnalyzer : IASDailyGarbageCollectionAnalyzer

@property (nonatomic) unsigned long long state;

+ (id)stringForState:(unsigned long long)a0;

- (id)stringForState:(unsigned long long)a0;

@end
