@class NSString, VCMediaRecorder;

@interface VCMomentsCollector : NSObject <VCMomentsCollectorDelegate> {
    long long _streamToken;
    VCMediaRecorder *_mediaRecorder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cleanUpActiveRequests;
- (id)initWithStreamToken:(long long)a0;
- (void)stream:(id)a0 addAudioSampleBuffer:(struct opaqueVCAudioBufferList { } *)a1 timestamp:(unsigned int)a2;
- (void)stream:(id)a0 addVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 cameraStatusBits:(unsigned char)a2 timestamp:(unsigned int)a3;

@end
