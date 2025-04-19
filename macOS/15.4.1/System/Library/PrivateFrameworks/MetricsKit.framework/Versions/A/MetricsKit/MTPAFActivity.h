@class NSString, NSArray, MTMediaTimeTracker;

@interface MTPAFActivity : NSObject

@property long long activityType;
@property unsigned long long startPosition;
@property unsigned long long lastPosition;
@property BOOL stopped;
@property (retain) NSString *startTriggerType;
@property (retain) NSString *startReason;
@property (retain) NSArray *startEventData;
@property (retain) NSString *stopTriggerType;
@property (retain) NSString *stopReason;
@property (retain) NSArray *stopEventData;
@property (copy) NSArray *itemActivities;
@property (retain) MTMediaTimeTracker *timeTracker;

- (void).cxx_destruct;
- (void)addItemsFromPlaylist:(id)a0 pafKit:(id)a1;
- (id)initWithType:(long long)a0 playbackRate:(float)a1 atMilliseconds:(unsigned long long)a2 triggerType:(id)a3 reason:(id)a4 eventData:(id)a5;
- (void)startItemActivityIfPossible:(id)a0;
- (void)stopItemActivityIfPossible:(id)a0;
- (void)stoppedAtMilliseconds:(unsigned long long)a0 triggerType:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)synchronizeAtMilliseconds:(unsigned long long)a0;
- (void)updateItemActivities:(id)a0;

@end
