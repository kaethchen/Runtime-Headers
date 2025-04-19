@class NSString, NSMutableDictionary, NSDate;
@protocol ContinuityCaptureTransportDevice;

@interface CMContinuityCaptureActiveSession : NSObject {
    id<ContinuityCaptureTransportDevice> _device;
    long long _transport;
    NSString *_shieldSessionID;
    NSDate *_shieldSessionIDGeneratedTime;
    long long _deviceModel;
    NSMutableDictionary *_sCameraStreamingPowerEventsByCameraType;
}

@property (retain) NSString *shieldSessionID;
@property (retain) NSDate *shieldSessionIDGeneratedTime;
@property (retain, nonatomic) id<ContinuityCaptureTransportDevice> device;
@property (nonatomic) long long deviceModel;
@property (nonatomic) long long transport;
@property (readonly, getter=isInitiatedOnCommunalDevice) BOOL initiatedOnCommunalDevice;

+ (int)powerLoggingCameraTypeForConfiguration:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 transport:(long long)a1 initiatedOnCommunalDevice:(BOOL)a2;
- (void)launchShieldUI;
- (void)logPowerLoggingEvent:(BOOL)a0 configuration:(id)a1;

@end
