@class RMConnectionClient, NSOperationQueue, CMAttitude, NSObject, CMDeviceMotion;
@protocol OS_dispatch_queue;

@interface CMHeadphoneMotionManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    RMConnectionClient *_connectionClient;
    NSOperationQueue *_callbackQueue;
    id /* block */ _callbackHandler;
    BOOL _deviceMotionActive;
    BOOL _deviceMotionStreaming;
    BOOL _deviceConnected;
    double _deviceConnectionTimestamp;
    double _firstValidDeviceMotionTimestamp;
    RMConnectionClient *_statusConnectionClient;
    BOOL _statusActive;
    BOOL _statusStreaming;
}

@property (retain) CMDeviceMotion *deviceMotion;
@property (retain, nonatomic) CMAttitude *initialReferenceAttitude;

- (void)dealloc;
- (id)init;
- (void)disconnect;
- (void)connect;
- (void)connectStatus;
- (void)disconnectStatus;

@end
