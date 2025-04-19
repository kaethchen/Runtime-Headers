@class NSCountedSet, NSObject;
@protocol OS_os_log, IMReasonTrackingUpdaterDelegate;

@interface IMReasonTrackingUpdater : NSObject

@property (retain, nonatomic) NSCountedSet *reasonsForNeedsUpdates;
@property (retain, nonatomic) NSCountedSet *reasonsForHoldingUpdates;
@property (nonatomic) BOOL hasPendingDeferredUpdate;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;
@property (weak, nonatomic) id<IMReasonTrackingUpdaterDelegate> delegate;
@property (readonly, nonatomic) BOOL isHoldingUpdates;
@property (readonly, nonatomic) long long activeUpdaterHoldsCount;

- (id)description;
- (void).cxx_destruct;
- (BOOL)needsUpdate;
- (void)cancelAllPendingDeferredUpdates;
- (void)_handleReasonsForHoldingUpdatesChangeForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (void)_scheduleDeferredUpdateFollowingHoldForReason:(id)a0;
- (void)_triggerNeedsUpdateFollowingHoldForReason:(id)a0;
- (void)beginHoldingUpdatesForReason:(id)a0;
- (void)endAllHoldsOnUpdatesForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (void)endHoldingUpdatesForAllReasonsWithPotentialUpdateDeferred:(BOOL)a0;
- (void)endHoldingUpdatesForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (id)initWithLogHandle:(id)a0;
- (id)initWithLogHandle:(id)a0 delegate:(id)a1;
- (BOOL)isHoldingUpdatesForReason:(id)a0;
- (void)setNeedsDeferredUpdateWithReason:(id)a0;
- (void)updateImmediatelyIfNeeded;
- (void)updateImmediatelyWithReason:(id)a0;

@end
