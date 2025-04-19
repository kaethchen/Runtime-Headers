@class AVCaptureSession, AVCaptureDeviceInput, NSURL, OFAudioRecorder;
@protocol OFAudioCaptureManagerDelegate;

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate>

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDeviceInput *audioInput;
@property (retain, nonatomic) OFAudioRecorder *recorder;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (nonatomic) id deviceConnectedObserver;
@property (nonatomic) id deviceDisconnectedObserver;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) id<OFAudioCaptureManagerDelegate> delegate;

- (void)dealloc;
- (BOOL)isRecording;
- (void)startRecording;
- (void)stopRecording;
- (BOOL)openSession;
- (id)_audioDevice;
- (void)cancelRecording;
- (void)_removeFile:(id)a0;
- (id)_tempFileURL;
- (id)initWithOutputFileURL:(id)a0;
- (float)meanAudioLevel;
- (unsigned long long)micCount;
- (void)recorder:(id)a0 recordingDidFinishToOutputFileURL:(id)a1 error:(id)a2;
- (void)recorderRecordingDidBegin:(id)a0;

@end
