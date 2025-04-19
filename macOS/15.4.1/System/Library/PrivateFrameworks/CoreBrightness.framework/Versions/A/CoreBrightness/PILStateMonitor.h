@class STMediaStatusDomain, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PILStateMonitor : NSObject {
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    unsigned int _ioServiceArrivalIterator;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logHandle;
    STMediaStatusDomain *_sharedMediaDomain;
}

@property BOOL PILCameraState;
@property BOOL PILMicState;

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (void)cameraStateChanged:(unsigned int)a0;
- (void)handleCameraServiceArrival:(unsigned int)a0;
- (void)registerForAllCameraNotifications;
- (void)registerForAllMicNotifications;
- (void)startCameraServiceLookup;
- (void)unregisterForAllCameraNotifications;
- (void)unregisterForAllMicNotifications;
- (void)unregisterForCameraStateNotifications;
- (void)updateMicStateWithMediaData:(id)a0;

@end
