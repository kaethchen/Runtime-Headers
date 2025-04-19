@class NSString, CSAudioPowerMeter, CSAudioProvider, CSAudioStream, NSObject;
@protocol OS_dispatch_queue, CSVTUIAudioSessionRecorderDelegate, CSVTUIAudioSessionDelegate;

@interface CSVTUIAudioSessionRecorder : NSObject <CSAudioProviderDelegate, CSAudioStreamProvidingDelegate, CSVTUIAudioSession> {
    CSAudioProvider *_audioProvider;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CSAudioPowerMeter *powerMeter;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (weak, nonatomic) id<CSVTUIAudioSessionRecorderDelegate> audioSessionRecorderDelegate;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)isRecording;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 didHardwareConfigurationChange:(long long)a1;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectedly:(long long)a1;
- (void)audioStreamProvider:(id)a0 numSamplesAvailableInExclave:(unsigned long long)a1 hostTime:(unsigned long long)a2 arrivalHostTimeToAudioRecorder:(unsigned long long)a3 exclaveSampleCount:(unsigned long long)a4;
- (unsigned int)getAudioSessionID;
- (void)releaseAudioSession;
- (void)setEndpointerDelegate:(id)a0;
- (BOOL)startRecording;
- (void)stopRecording;
- (void)updateMeters;
- (unsigned long long)audioSource;
- (BOOL)hasAudioRoute;
- (float)averagePower;
- (void)resetEndPointer;
- (id)_forceFetchAudioProvider:(BOOL)a0 recordContext:(id)a1;
- (void)_handleDidStopWithReason:(long long)a0;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectInputAudioRouteFromHardwareConfiguration:(long long)a0;
- (BOOL)_hasCorrectOutputAudioRoute;
- (long long)convertStopReason:(long long)a0;
- (BOOL)hasCorrectAudioRoute;
- (BOOL)prepareRecord;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)a0 deviceUUIDs:(id)a1;

@end
