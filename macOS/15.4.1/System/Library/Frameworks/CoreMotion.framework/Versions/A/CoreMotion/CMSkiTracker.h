@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject

@property (readonly, nonatomic) CMSkiTrackerInternal *_internal;

+ (BOOL)isAvailable;

- (void)dealloc;
- (id)init;
- (void)stopUpdates;
- (void)stopLiveUpdates;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)querySkiUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)startLiveUpdatesWithHandler:(id /* block */)a0;

@end
