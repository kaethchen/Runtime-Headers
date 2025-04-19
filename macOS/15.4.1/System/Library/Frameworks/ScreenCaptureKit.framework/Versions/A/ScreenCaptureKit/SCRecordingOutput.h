@class NSString;
@protocol SCRecordingOutputDelegate;

@interface SCRecordingOutput : NSObject <RPScreenRecorderScreenCapureKitRecordingOutputDelegate>

@property (weak, nonatomic) id<SCRecordingOutputDelegate> delegate;
@property (readonly, nonatomic) NSString *outputURLPath;
@property (readonly, nonatomic) NSString *outputFileType;
@property (readonly, nonatomic) NSString *videoCodecType;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } recordedDuration;
@property (readonly, nonatomic) long long recordedFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableOutputFileTypes;
+ (id)availableVideoCodecTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)recordingOutput:(id)a0 didFailWithError:(id)a1;
- (void)recordingOutputDidFinishRecording:(id)a0;
- (void)recordingOutputDidStartRecording:(id)a0;
- (void)recordingOutputTimerDidUpdate:(id)a0;

@end
