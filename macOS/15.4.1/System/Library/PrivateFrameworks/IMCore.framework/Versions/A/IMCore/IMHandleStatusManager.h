@class NSMapTable;

@interface IMHandleStatusManager : NSObject

@property (readonly, nonatomic) NSMapTable *observers;
@property (readonly, nonatomic) NSMapTable *handlesForObserver;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)adjustObservingStatusForHandles;
- (id)acquireObservationAssertionForHandle:(id)a0;
- (void)beginObservingAvailabilityForHandle:(id)a0;
- (void)beginObservingOffGridStateForHandle:(id)a0;
- (void)beginObservingStatusUpdatesForHandle:(id)a0;
- (void)endObservingAvailabilityForHandle:(id)a0;
- (void)endObservingOffGridStateForHandle:(id)a0;
- (void)endObservingStatusUpdatesForHandle:(id)a0;
- (void)invalidateObserver:(id)a0;

@end
