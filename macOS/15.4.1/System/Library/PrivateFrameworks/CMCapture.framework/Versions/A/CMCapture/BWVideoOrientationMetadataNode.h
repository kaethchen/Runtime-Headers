@class BWVideoOrientationTimeMachine, NSObject;
@protocol OS_dispatch_queue;

@interface BWVideoOrientationMetadataNode : BWNode {
    struct OpaqueCMClock { } *_clock;
    struct OpaqueCMClock { } *_masterClock;
    int _videoOrientation;
    BOOL _videoMirrored;
    int _sourcePosition;
    int _sourceDeviceType;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    unsigned int _localIDOfOrientationMetadata;
    BOOL _recordVideoOrientationAndMirroringChanges;
    BOOL _physicalMirroringForMovieRecordingEnabled;
    BOOL _flipMetadataHorizontally;
    BOOL _recording;
    int _exifOrientation;
    struct OpaqueCMBlockBuffer *_bbufCache[8];
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property (readonly, nonatomic) BWVideoOrientationTimeMachine *videoOrientationTimeMachine;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)nodeType;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (struct OpaqueCMClock { } *)masterClock;
- (void)setSourceDeviceType:(int)a0;
- (int)sourceDeviceType;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (BOOL)physicalMirroringForMovieRecordingEnabled;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setSourcePosition:(int)a0;
- (int)sourcePosition;
- (void)updateVideoMirrored:(BOOL)a0;
- (void)updateVideoOrientation:(int)a0;

@end
