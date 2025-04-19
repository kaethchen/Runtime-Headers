@class NSObject;
@protocol OS_dispatch_queue, VCCoreMotionManagerDelegate;

@interface VCCoreMotionManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VCCoreMotionManagerDelegate> _coreMotionManagerDelegate;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)coreMotionManagerDelegate;
- (void)setCoreMotionManagerDelegate:(id)a0;
- (void)startMonitoringMotionActivity;
- (void)stopMonitoringMotionActivity;

@end
