@interface KHDBUsage : NSObject

@property (nonatomic) unsigned long long occurrences;
@property (nonatomic) double maxTime;
@property (nonatomic) double totalTime;

- (void)addUsage:(double)a0;
- (double)averageTime;
- (void)showUsageNamed:(id)a0 forDBFilename:(id)a1;

@end
