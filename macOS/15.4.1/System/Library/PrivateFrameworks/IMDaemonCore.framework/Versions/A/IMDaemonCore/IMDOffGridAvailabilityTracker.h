@class NSTimer, NSMutableDictionary;

@interface IMDOffGridAvailabilityTracker : NSObject

@property (class, readonly, nonatomic) IMDOffGridAvailabilityTracker *sharedTracker;

@property (readonly, nonatomic) NSMutableDictionary *trackedHandles;
@property (retain, nonatomic) NSTimer *updateTimer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_startTimer;
- (void)_clearTimer;
- (void)_updateTracker;
- (void)startTrackingHandle:(id)a0;
- (void)stopTrackingHandle:(id)a0;

@end
