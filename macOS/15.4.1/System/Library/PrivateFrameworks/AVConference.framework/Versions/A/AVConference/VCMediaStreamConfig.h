@class NSData, NSString, VCMediaStreamMultiwayConfig, VCNetworkAddress, VCNetworkFeedbackController, NSDictionary, NSMutableDictionary, VCMediaStreamRateControlConfig;

@interface VCMediaStreamConfig : NSObject {
    struct tagVCJBTargetEstimatorSynchronizer { } *_jbTargetEstimatorSynchronizer;
}

@property (readonly, nonatomic) NSDictionary *allTxPayloadMap;
@property (readonly, nonatomic) NSDictionary *allRxPayloadMap;
@property (nonatomic) long long direction;
@property (retain, nonatomic) VCNetworkAddress *localAddress;
@property (copy, nonatomic) NSString *cName;
@property (retain, nonatomic) VCNetworkAddress *remoteAddress;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) struct tagVCJBTargetEstimatorSynchronizer { } *jbTargetEstimatorSynchronizer;
@property (retain, nonatomic) NSData *sendMediaKey;
@property (retain, nonatomic) NSData *receiveMediaKey;
@property (readonly, nonatomic) NSMutableDictionary *txPayloadMap;
@property (readonly, nonatomic) NSMutableDictionary *rxPayloadMap;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) unsigned int rtpTimestampRate;
@property (nonatomic, getter=isDecryptionTimeOutEnabled) BOOL decryptionTimeOutEnabled;
@property (nonatomic) double decryptionTimeOutInterval;
@property (nonatomic) double decryptionMKMRecoveryInterval;
@property (nonatomic) unsigned int cellularUniqueTag;
@property (nonatomic) long long SRTCPCipherSuite;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTCPXREnabled) BOOL rtcpXREnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTCPReceiveCallbackEnabled) BOOL rtcpReceiveCallbackEnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (readonly, nonatomic) long long primaryTxCodecType;
@property (nonatomic, getter=isRateAdaptationEnabled) BOOL rateAdaptationEnabled;
@property (nonatomic) BOOL isRTCPForLossFeedbackEnabled;
@property (nonatomic) BOOL rtcpPSFB_LTRAckEnabled;
@property (nonatomic) struct tagVCSecurityKeyHolder { } *securityKeyHolder;
@property (nonatomic) int sframeCipherSuite;
@property (retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig;
@property (nonatomic) int captureSource;
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController;
@property (nonatomic) BOOL isServerPacketRetransmissionEnabled;
@property (nonatomic) unsigned int nackGeneratorStorebagConfigVersion;
@property (nonatomic) BOOL isExtraDelayForPacketRetransmissionsEnabled;
@property (nonatomic) BOOL isUplinkRetransmissionEnabled;
@property (retain, nonatomic) VCMediaStreamRateControlConfig *rateControlConfig;
@property (nonatomic) long long streamInputID;
@property (nonatomic) unsigned long long networkClockID;
@property (nonatomic) BOOL isRedundancyControlEnabled;
@property (nonatomic) unsigned int maxRedundancyPercentage;
@property (nonatomic) unsigned int redundancyControllerMode;
@property (nonatomic) unsigned char redundancyControllerFECVersion;
@property (nonatomic) long long overlayToken;
@property (nonatomic) int jitterBufferMode;
@property (nonatomic) BOOL isEnhancedJBAdaptationsEnabled;
@property (nonatomic) BOOL outOfProcessCodecsEnabled;
@property (nonatomic) unsigned long long fixedJitterBufferSize;
@property (nonatomic) int accessNetworkType;
@property (nonatomic) unsigned char dscpTag;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)addRxPayloadType:(int)a0;
- (void)addRxPayloadType:(int)a0 networkPayload:(unsigned int)a1;
- (void)addTxPayloadType:(int)a0;
- (void)addTxPayloadType:(int)a0 networkPayload:(unsigned int)a1;
- (void)applyMediaStreamClientDictionary:(id)a0;
- (id)initWithClientDictionary:(id)a0;
- (int)jitterBufferModeFromAVCJitterBufferMode:(unsigned int)a0;
- (void)setupMediaStreamConfig;

@end
