@class NSString, NSTimer;

@interface SOAudioQueueRecorder : NSObject <SOMicrophoneViewMeterLevelProvider> {
    struct OpaqueAudioQueue { } *_queue;
    struct AudioQueueBuffer *_buffers[40];
    NSTimer *_meterLevelTimer;
    float _lastMeterLevel;
    BOOL _didUnmuteMicrophone;
    float _gainAtUnmute;
}

@property (retain) NSString *deviceIdentifier;
@property (readonly) struct OpaqueExtAudioFile { } *audioFileRef;
@property (readonly) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } recordingASBD;
@property struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioFileASBD;
@property (retain) NSString *audioFilePath;
@property unsigned int audioFileType;
@property float highestPeakPower;
@property BOOL preventDictationModeWhileListening;
@property (retain) id meterLevelTarget;
@property SEL meterLevelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)isRecording;
- (int)stopRecording;
- (void)_setDeviceMute:(BOOL)a0;
- (id)_audioDevice;
- (float)_currentDeviceGain;
- (BOOL)_deviceIsMuted;
- (void)_updateMeterLevels;
- (BOOL)didRecordingShowActivity;
- (id)initWithRecordingFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (float)meterLevel;
- (id)microphoneID;
- (int)startRecordingDeviceIdentifier:(id)a0 toFile:(id)a1;

@end
