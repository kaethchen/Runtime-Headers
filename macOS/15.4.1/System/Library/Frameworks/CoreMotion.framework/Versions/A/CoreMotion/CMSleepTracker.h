@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject

@property (readonly, nonatomic) CMSpringTrackerInternal *_internal;

+ (BOOL)isAvailable;

- (void)dealloc;
- (id)init;
- (BOOL)isTracking;
- (void)startWithHandler:(id /* block */)a0;
- (void)querySleepDataFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)stopWithHandler:(id /* block */)a0;

@end
