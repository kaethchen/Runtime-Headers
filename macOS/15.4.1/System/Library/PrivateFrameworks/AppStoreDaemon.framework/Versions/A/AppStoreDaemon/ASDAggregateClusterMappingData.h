@interface ASDAggregateClusterMappingData : PBCodable <NSCopying>

@property (nonatomic) int encodingVersion;
@property (readonly, nonatomic) unsigned long long clusterIDsCount;
@property (readonly, nonatomic) int *clusterIDs;
@property (readonly, nonatomic) unsigned long long clusterVersionsCount;
@property (readonly, nonatomic) int *clusterVersions;
@property (readonly, nonatomic) unsigned long long clusterAppCountsCount;
@property (readonly, nonatomic) int *clusterAppCounts;
@property (readonly, nonatomic) unsigned long long weightedAppLaunchesCount;
@property (readonly, nonatomic) int *weightedAppLaunches;
@property (readonly, nonatomic) unsigned long long weightedAppForgroundUsagesCount;
@property (readonly, nonatomic) int *weightedAppForgroundUsages;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearWeightedAppForgroundUsages;
- (void)clearClusterIDs;
- (void)addClusterAppCount:(int)a0;
- (void)addClusterID:(int)a0;
- (void)addClusterVersion:(int)a0;
- (void)addWeightedAppForgroundUsage:(int)a0;
- (void)addWeightedAppLaunches:(int)a0;
- (void)clearClusterAppCounts;
- (void)clearClusterVersions;
- (void)clearWeightedAppLaunches;
- (int)clusterAppCountAtIndex:(unsigned long long)a0;
- (int)clusterIDAtIndex:(unsigned long long)a0;
- (int)clusterVersionAtIndex:(unsigned long long)a0;
- (void)setClusterAppCounts:(int *)a0 count:(unsigned long long)a1;
- (void)setClusterIDs:(int *)a0 count:(unsigned long long)a1;
- (void)setClusterVersions:(int *)a0 count:(unsigned long long)a1;
- (void)setWeightedAppForgroundUsages:(int *)a0 count:(unsigned long long)a1;
- (void)setWeightedAppLaunches:(int *)a0 count:(unsigned long long)a1;
- (int)weightedAppForgroundUsageAtIndex:(unsigned long long)a0;
- (int)weightedAppLaunchesAtIndex:(unsigned long long)a0;

@end
