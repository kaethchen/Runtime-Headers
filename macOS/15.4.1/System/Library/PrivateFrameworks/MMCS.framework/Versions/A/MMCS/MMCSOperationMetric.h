@class NSMutableDictionary, NSArray, NSMutableSet, NSDate, NSMutableArray, NSString;

@interface MMCSOperationMetric : NSObject <MMCSOperationMetric>

@property (retain, nonatomic) NSDate *startDate;
@property double duration;
@property (retain, nonatomic) NSMutableArray *ranges;
@property double queueing;
@property double executing;
@property unsigned long long bytesUploaded;
@property unsigned long long bytesDownloaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property unsigned long long bytesFulfilledByPeers;
@property unsigned long long bytesFulfilledLocally;
@property unsigned long long bytesResumed;
@property (readonly) NSMutableDictionary *totalBytesByChunkProfile;
@property (readonly) NSMutableDictionary *chunkCountByChunkProfile;
@property (readonly) NSMutableDictionary *fileCountByChunkProfile;
@property (readonly) NSMutableSet *requestUUIDs;
@property (readonly) NSArray *rangesCopy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (void)addRange:(id)a0;
- (double)other;
- (void)rangesCompleted;
- (double)absoluteStart;
- (double)absoluteStop;
- (long long)compareExecutingStartTime:(id)a0;
- (long long)compareStartTime:(id)a0;
- (id)describeRanges;
- (id)newRangeWithOperationState:(unsigned long long)a0 startDate:(id)a1 duration:(double)a2;

@end
