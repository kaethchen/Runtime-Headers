@class HMDCameraStreamManager, NSString, HMDStreamingCapabilities, HMDCameraProtocolParameters, HMDCameraStreamSessionID, HMDCameraVideoTierParameters;

@interface HMDCameraStreamSession : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (retain, nonatomic) HMDCameraStreamManager *streamManager;
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities;
@property (retain, nonatomic) HMDCameraProtocolParameters *protocolParameters;
@property (retain, nonatomic) HMDCameraVideoTierParameters *videoTierParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
