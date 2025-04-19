@class NSObject, PTPCameraDeviceManager, NSMutableArray, MSCameraDeviceManager;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ICCameraDeviceBrowser : NSObject {
    NSMutableArray *_suspendedBrowsers;
    long long _numberOfBrowsingBrowsers;
}

@property (readonly) NSMutableArray *devices;
@property (readonly) NSMutableArray *browsers;
@property (retain, nonatomic) PTPCameraDeviceManager *ptpDevManager;
@property (retain, nonatomic) MSCameraDeviceManager *msDevManager;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *suspensionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *suspensionTimerQueue;

+ (BOOL)exists;
+ (id)defaultBrowser;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start:(id)a0;
- (void)stop:(id)a0;
- (void)addBrowser:(id)a0;
- (id)deviceWithDelegate:(id)a0;
- (void)handleCommandCompletionNotification:(id)a0;
- (void)handleImageCaptureEventNotification:(id)a0;
- (void)removeBrowser:(id)a0;
- (BOOL)startMSCameraBrowser;
- (BOOL)startPTPCameraBrowser;
- (BOOL)startPXCameraBrowser;

@end
