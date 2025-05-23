@class NSArray, NSMutableArray, NSString;

@interface MTHLSVideoPlaylist : NSObject <MTMediaPlaylist>

@property unsigned long long startPosition;
@property (retain) NSMutableArray *rollItems;
@property (retain) NSArray *mainFeatureMetricsData;
@property (readonly) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMainFeatureMetricsData:(id)a0;
- (void)addItemStartAtMilliseconds:(unsigned long long)a0 durationMilliseconds:(unsigned long long)a1 metricsData:(id)a2;
- (void)addItemStartAtMilliseconds:(unsigned long long)a0 endAtMilliseconds:(unsigned long long)a1 metricsData:(id)a2;
- (void)addItemStartAtSeconds:(double)a0 durationSeconds:(double)a1 metricsData:(id)a2;
- (void)addRollInfoItem:(id)a0;
- (void)addRollInfoItems:(id)a0;
- (void)addRollItem:(id)a0;
- (long long)indexOfLastRollItemWithStartBeforePosition:(unsigned long long)a0;
- (id)initWithStartPosition:(unsigned long long)a0 mainFeatureMetricsData:(id)a1;
- (id)itemAtOverallPosition:(unsigned long long)a0 rangeOptions:(long long)a1;
- (id)itemsBetweenStartOverallPosition:(unsigned long long)a0 endOverallPosition:(unsigned long long)a1;
- (id)mainFeatureItemWithStartOverallPosition:(unsigned long long)a0;
- (void)addRollItemWithStartOverallPosition:(unsigned long long)a0 duration:(unsigned long long)a1 metricsData:(id)a2;

@end
