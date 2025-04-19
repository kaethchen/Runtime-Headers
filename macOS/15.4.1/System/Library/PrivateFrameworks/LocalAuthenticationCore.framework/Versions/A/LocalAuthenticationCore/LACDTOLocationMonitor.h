@class NSString, LACTimer, NSObject;
@protocol LACDTOLocationProvider, LACDTOLocationMonitorDelegate, OS_dispatch_queue;

@interface LACDTOLocationMonitor : NSObject <LACDTOLocationMonitor> {
    id<LACDTOLocationProvider> _locationProvider;
    NSObject<OS_dispatch_queue> *_workQueue;
    LACTimer *_timer;
}

@property (weak, nonatomic) id<LACDTOLocationMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
