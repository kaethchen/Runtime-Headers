@class MTPAFKit, MTMetricsData;
@protocol MTMediaPlaylistItem;

@interface MTMediaActivity : NSObject

@property (weak) MTPAFKit *pafKit;
@property long long type;
@property (retain) MTMetricsData *startMetricsData;
@property (retain) MTMetricsData *stopMetricsData;
@property (retain) id<MTMediaPlaylistItem> playlistItem;

+ (unsigned long long)startOverallPositionForItem:(id)a0;

- (void).cxx_destruct;
- (BOOL)isStopped;
- (id)eventDataForTransitioningEvents;
- (id)initWithType:(long long)a0 playlistItem:(id)a1 pafKit:(id)a2;
- (unsigned long long)positionFromOverallPosition:(unsigned long long)a0;
- (id)startEventHandler;
- (void)startedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (id)stopEventHandler;
- (void)stoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;

@end
