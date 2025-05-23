@class FigStateMachine, FigCaptureAudioFileRecordingSettings, NSObject;
@protocol OS_dispatch_queue;

@interface BWAudioFileSinkNode : BWFileSinkNode {
    FigStateMachine *_stateMachine;
    struct OpaqueFigFormatWriter { } *_formatWriter;
    struct OpaqueCMByteStream { } *_byteStream;
    int _trackID;
    BOOL _didBeginFileWriterSession;
    char *_parentPath;
    FigCaptureAudioFileRecordingSettings *_settings;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _curFileDuration;
    unsigned long long _curFileSize;
    unsigned long long _adjustedMinFreeDiskSpace;
    NSObject<OS_dispatch_queue> *_propertySyncQueue;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithSinkID:(id)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastFileDuration;
- (unsigned long long)lastFileSize;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
