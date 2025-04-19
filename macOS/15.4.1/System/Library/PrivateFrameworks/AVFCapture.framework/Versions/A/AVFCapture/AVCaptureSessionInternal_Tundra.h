@class NSString, AVCaptureSessionInternalState, NSMutableSet, NSError, NSMutableArray, NSDictionary;

@interface AVCaptureSessionInternal_Tundra : NSObject {
    NSString *sessionPreset;
    int beginConfigRefCount;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSMutableArray *connections;
    NSMutableSet *activeConnections;
    NSMutableSet *activeOutputs;
    NSMutableSet *activeInputs;
    struct __CFArray { } *videoPreviewLayers;
    NSError *stopError;
    BOOL running;
    AVCaptureSessionInternalState *state;
    struct OpaqueCMClock { } *synchronizationClock;
    NSDictionary *commonAnalytics;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
    BOOL suppressVideoEffects;
}

@end
