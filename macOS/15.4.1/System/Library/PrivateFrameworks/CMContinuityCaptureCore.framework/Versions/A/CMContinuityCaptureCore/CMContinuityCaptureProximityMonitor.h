@class NSString, NSMutableSet, NIRegionPredicate, NISession, NSObject;
@protocol OS_dispatch_queue, CMContinuityCaptureProximityMonitorDelegate;

@interface CMContinuityCaptureProximityMonitor : NSObject <NIInternalSessionDelegate> {
    BOOL _havePendingUpdates;
    id<CMContinuityCaptureProximityMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NISession *_niSession;
    NIRegionPredicate *_innerPredicate;
    NIRegionPredicate *_outerPredicate;
    NSMutableSet *_tracking;
    NSMutableSet *_nearby;
    NSMutableSet *_knownDevices;
    int _errorCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)session:(id)a0 didInvalidateWithError:(id)a1;
- (void)sessionSuspensionEnded:(id)a0;
- (void)sessionWasSuspended:(id)a0;
- (void)endTracking:(id)a0;
- (BOOL)isDeviceNearby:(id)a0;
- (void)session:(id)a0 object:(id)a1 didUpdateRegion:(id)a2 previousRegion:(id)a3;
- (void)_startNearbyInteractionSession;
- (void)beginTracking:(id)a0;
- (BOOL)isDeviceKnown:(id)a0;

@end
