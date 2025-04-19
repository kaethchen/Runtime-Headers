@class NSArray, NSMutableArray;

@interface BWSlaveFrameSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct opaqueCMSimpleQueue **_inputSampleBufferQueues;
    int _numBufferedFrames;
    BOOL _slaveStreamHasStarted;
    int _numSlaveFramesReceived;
    int _numSlaveFramesToSkip;
    BOOL _startEmittingMasterFramesBeforeSlaveStreamStarts;
    NSMutableArray *_droppedFramePTSs;
    int _mostRecentMasterInputIndex;
    NSArray *_syncSlaveForMasterPortTypes;
    BOOL _differentInputFormatsSupported;
}

@property (nonatomic) BOOL emitsUnsynchronizedFramesWhileStopping;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)initWithDepthEnabled:(BOOL)a0 numberOfInputs:(int)a1 syncSlaveForMasterPortTypes:(id)a2 separateDepthComponentsEnabled:(BOOL)a3 preLTMThumbnailEnabled:(BOOL)a4 postColorProcessingThumbnailEnabled:(BOOL)a5 numberOfSecondaryFramesToSkip:(int)a6;
- (id)initWithDepthEnabled:(BOOL)a0 numberOfInputs:(int)a1 syncSlaveForMasterPortTypes:(id)a2 separateDepthComponentsEnabled:(BOOL)a3 preLTMThumbnailEnabledInputs:(id)a4 postColorProcessingThumbnailEnabledInputs:(id)a5 differentInputFormatsSupported:(BOOL)a6 bufferSize:(int)a7 numberOfSlaveFramesToSkip:(int)a8 startEmittingMasterFramesBeforeSlaveStreamStarts:(BOOL)a9;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
