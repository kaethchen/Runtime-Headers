@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject

@property (readonly, nonatomic) NSString *recordRoute;
@property (readonly) BOOL isRemoteDevice;
@property (readonly, nonatomic) NSString *remoteProductIdentifier;
@property (readonly, nonatomic) NSUUID *remoteDeviceUID;
@property (readonly, nonatomic) unsigned int remoteDeviceCategory;
@property (readonly, nonatomic) BOOL isUpsamplingSourceAudio;
@property (readonly, nonatomic) NSString *remoteDeviceUIDString;
@property (readonly, nonatomic) NSString *halDeviceUID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRecordingEngine:(struct shared_ptr<AVVCRecordingEngine> { struct AVVCRecordingEngine *x0; struct __shared_weak_count *x1; })a0;

@end
