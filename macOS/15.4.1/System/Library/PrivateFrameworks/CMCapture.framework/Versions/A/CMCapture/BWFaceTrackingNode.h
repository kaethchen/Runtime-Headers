@class NSString, BWVideoFormat, BWPixelBufferPool, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BWFaceTrackingNode : BWNode {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processingLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    BOOL _processing;
    struct opaqueCMSimpleQueue { } *_nextSbufQueue;
    BOOL _setupDone;
    BOOL _structuredLightOccluded;
    BOOL _passthroughInputs;
    NSString *_depthAttachedMediaKey;
    int _faceTrackingMachThreadPriority;
    int _pearlModuleType;
    int _faceTrackingMaxFaces;
    BOOL _faceTrackingUsesFaceRecognition;
    float _faceTrackingNetworkFailureThresholdMultiplier;
    float _faceTrackingFailureFieldOfViewModifier;
    BOOL _skipProcessing;
    BWVideoFormat *_uncompressedVideoFormat;
    BWPixelBufferPool *_uncompressedVideoBufferPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decompressionLock;
    BOOL _addMesh;
    BOOL _addDebugInfo;
}

@property (nonatomic) BOOL frontCamera;
@property (nonatomic) BOOL mirrored;
@property (nonatomic) int orientation;
@property (nonatomic) int maxFaces;
@property (nonatomic) BOOL usesFaceRecognition;
@property (nonatomic) BOOL faceTrackingPlusEnabled;
@property (nonatomic) float networkFailureThresholdMultiplier;
@property (nonatomic) float trackingFailureFieldOfViewModifier;
@property (nonatomic) BOOL skipProcessing;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithFigThreadPriority:(unsigned int)a0 pearlModuleType:(int)a1 useUnfilteredDepth:(BOOL)a2 queueDepth:(unsigned int)a3 passthroughInputs:(BOOL)a4 allowPixelTransfer:(BOOL)a5;
- (id)nodeSubType;

@end
