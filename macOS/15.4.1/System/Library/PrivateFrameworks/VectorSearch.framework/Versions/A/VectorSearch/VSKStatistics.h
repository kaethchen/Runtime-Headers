@interface VSKStatistics : NSObject

@property (nonatomic) long long deltaStoreCount;
@property (nonatomic) long long storeCount;
@property (nonatomic) int proposedAveragePartitionSize;
@property (nonatomic) double averagePartitionSize;
@property (nonatomic) long long minimumPartitionSize;
@property (nonatomic) long long maximumPartitionSize;

- (id)initWithDeltaStoreCount:(long long)a0 storeCount:(long long)a1 proposedAveragePartitionSize:(int)a2 averagePartitionSize:(double)a3 minimumPartitionSize:(long long)a4 maximumPartitionSize:(long long)a5;

@end
