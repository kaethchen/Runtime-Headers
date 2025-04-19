@interface AVCMediaStreamNegotiatorSettingsRemoteDesktopSystemAudio : AVCMediaStreamNegotiatorSettings {
    int _preferredAudioPayload;
}

- (unsigned long long)audioChannelCount;
- (unsigned long long)ptime;
- (double)rtcpTimeOutInterval;
- (long long)audioStreamMode;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;
- (double)rtcpSendInterval;
- (BOOL)rtcpTimeOutEnabled;

@end
