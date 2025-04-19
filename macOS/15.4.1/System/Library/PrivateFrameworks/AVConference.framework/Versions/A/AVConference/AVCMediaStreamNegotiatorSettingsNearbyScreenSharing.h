@interface AVCMediaStreamNegotiatorSettingsNearbyScreenSharing : AVCMediaStreamNegotiatorSettings

- (double)rtcpTimeOutInterval;
- (long long)videoStreamMode;
- (long long)captureSource;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;
- (unsigned long long)maxBandwidth;
- (int)operatingMode;
- (double)rtcpSendInterval;
- (BOOL)rtcpTimeOutEnabled;

@end
