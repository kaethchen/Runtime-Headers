@class AVVoiceController, NSString, CSVTUIRemoteRecordClient, NSHashTable, NSDictionary, NSObject, CSVTUIAudioRecorderRemoteDeviceContext;
@protocol OS_dispatch_queue;

@interface CSVTUIAudioRecorder : NSObject <CSVTUIRemoteRecordClientDelegate, AVVoiceControllerRecordDelegate, CSAudioSessionEventProviding> {
    AVVoiceController *_voiceController;
    struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } _interleavedABL;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_pNonInterleavedABL;
    CSVTUIRemoteRecordClient *_remoteRecordClient;
    NSDictionary *_latestContext;
    BOOL _waitingForDidStart;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSVTUIAudioRecorderRemoteDeviceContext *remoteDeviceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (id)initWithQueue:(id)a0 error:(id *)a1;
- (void)registerObserver:(id)a0;
- (id)_compensateChannelDataIfNeeded:(id)a0 receivedNumChannels:(unsigned int)a1;
- (BOOL)activateAudioSessionWithReason:(unsigned long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)deactivateAudioSession:(unsigned long long)a0 error:(id *)a1;
- (id)getPlaybackRouteForStreamID:(unsigned long long)a0;
- (void)setAudioSessionEventDelegate:(id)a0;
- (void)voiceControllerAudioCallback:(id)a0 forStream:(unsigned long long)a1 buffer:(id)a2;
- (void)voiceControllerDidStartRecording:(id)a0 forStream:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)voiceControllerDidStopRecording:(id)a0 forStream:(unsigned long long)a1 forReason:(long long)a2;
- (void)_audioRecorderDidStartRecordingSuccessfully:(BOOL)a0 streamHandleID:(unsigned long long)a1 error:(id)a2;
- (void)_audioRecorderDidStopRecordingForReason:(long long)a0 streamHandleID:(unsigned long long)a1;
- (void)_destroyVoiceController;
- (id)_fetchRemoteRecordClientWithDeviceId:(id)a0 audioStreamHandleId:(unsigned long long)a1;
- (id)_getRecordSettingsWithRequest;
- (void)_processAudioBuffer:(id)a0 audioStreamHandleId:(unsigned long long)a1 arrivalTimestampToAudioRecorder:(unsigned long long)a2;
- (void)_processAudioChain:(id)a0 audioStreamHandleId:(unsigned long long)a1 remoteVAD:(id)a2 atTime:(unsigned long long)a3 arrivalTimestampToAudioRecorder:(unsigned long long)a4 numberOfChannels:(int)a5;
- (BOOL)_shouldUseRemoteBuiltInMic:(id)a0;
- (id)_voiceControllerWithError:(id *)a0;
- (BOOL)isRecordingWithStreamHandleId:(unsigned long long)a0;
- (BOOL)prepareAudioStreamRecordWithStreamHandleId:(unsigned long long)a0 error:(id *)a1;
- (id)recordRouteWithStreamHandleId:(unsigned long long)a0;
- (void)remoteRecordConnectionDisconnected:(id)a0;
- (void)remoteRecordDidStartRecordingWithStreamHandleId:(unsigned long long)a0 error:(id)a1;
- (void)remoteRecordDidStopRecordingWithWithStreamHandleId:(unsigned long long)a0 error:(id)a1;
- (void)remoteRecordLPCMBufferAvailable:(id)a0 streamHandleId:(unsigned long long)a1;
- (void)remoteRecordTwoShotDetectedAtTime:(double)a0;
- (unsigned long long)setContext:(id)a0 error:(id *)a1;
- (BOOL)startAudioStreamWithStreamHandleId:(unsigned long long)a0 error:(id *)a1;
- (BOOL)stopAudioStreamWithStreamHandleId:(unsigned long long)a0 error:(id *)a1;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)a0 deviceUUIDs:(id)a1;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)a0 toConfiguration:(int)a1;

@end
