@class NSArray;

@interface CSKStreamArchiveStatistics : NSObject

@property (retain, nonatomic) NSArray *sortedEntries;
@property (nonatomic) unsigned long long totalEntityCount;

+ (id)_entityCountsFromEntries:(id)a0 total:(unsigned long long *)a1;
+ (void)_evaluateTopEntries:(unsigned long long)a0 fromCounts:(id)a1 totalCount:(unsigned long long)a2 totalCountThreshold:(unsigned long long)a3 percentageThreshold:(float)a4 withStatistics:(id *)a5;
+ (id)statisticsWithRawData:(id)a0 totalCountThreshold:(unsigned long long)a1 percentageThreshold:(float)a2 entriesMaximumCount:(unsigned long long)a3 type:(unsigned long long)a4;
+ (id)statisticsWithRawData:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)allPaths;

@end
