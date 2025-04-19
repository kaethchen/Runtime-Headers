@class NSArray, NSXPCConnection, NSMutableSet, NSDate, NSObject, NSSet;
@protocol STMServiceProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface STMTelemetryController : NSObject <STMServiceMainReplyHandler> {
    double _telemetryDelay;
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<STMServiceProtocol> *proxy;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSMutableSet *completionBlocks;
@property (retain) NSDate *lastReceivedDataDate;
@property (retain) NSDate *startCalculatingDate;
@property (retain) NSArray *disks;
@property (retain) NSArray *opticalDisks;
@property (retain) NSArray *categories;
@property (retain) NSSet *sidebarItems;

- (id)init;
- (void).cxx_destruct;
- (void)presentError:(id)a0;
- (id)telemetry;
- (void)_callCompletionWithResults:(BOOL)a0 error:(id)a1;
- (void)_resetReceivedData;
- (void)_resetTimer;
- (void)_startServiceWithCompletionHandler:(id /* block */)a0;
- (void)_startTimerIfNeeded;
- (void)_startTimerIfNeededWithDelay:(double)a0;
- (void)_stopService;
- (void)getTelemetryAfterQuiesceDelay:(double)a0 completionHandler:(id /* block */)a1;
- (void)getTelemetryWithCompletionHandler:(id /* block */)a0;
- (void)presentAlert:(id)a0 confirmationHandler:(id /* block */)a1;
- (void)retrieveTelemetryAfterQuiesceDelay:(double)a0 completionHandler:(id /* block */)a1;
- (void)retrieveTelemetryWithCompletionHandler:(id /* block */)a0;
- (void)sendDisksList:(id)a0;
- (void)sendExcludedURLs:(id)a0;
- (void)sendOpticalDisksList:(id)a0;
- (void)sendSidebarItems:(id)a0;
- (void)sendVolumeCategories:(id)a0 forVolumeMountPath:(id)a1;
- (void)stopService;

@end
