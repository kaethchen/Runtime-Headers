@class NSError, NSLock, NSArray, MediaIOGraphNodeDescription, NSTimer, NSURL, AVCaptureOperationDescriptorQueue, NSMutableArray, AVCaptureFileOutputRecordingOperationDescriptor;

@interface AVCaptureMovieFileOutputInternal_Tundra : NSObject {
    struct __CFDictionary { } *splitterUnits;
    struct __CFDictionary { } *mixerUnits;
    struct __CFDictionary { } *decompressorUnits;
    struct __CFDictionary { } *videoFrameRateGovernorUnits;
    struct __CFDictionary { } *compressorUnits;
    struct __CFDictionary { } *compressorRenderCallbackContextTokens;
    struct __CFDictionary { } *fileControlCallbackContextTokens;
    MediaIOGraphNodeDescription *fileWriterOutputUnit;
    unsigned int activeConnectionCount;
    AVCaptureOperationDescriptorQueue *operationDescriptorQueue;
    NSLock *operationDescriptorQueueLock;
    AVCaptureFileOutputRecordingOperationDescriptor *runningRecordingOperationDescriptor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } runningRecordingOperationDescriptorLock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } syncTime;
    void *syncTimeConnection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } timeWritten;
    long long sizeWritten;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
    NSArray *metadata;
    BOOL wasForcedToPause;
    NSError *stopError;
    NSMutableArray *activeConnections;
    NSArray *noDataConnections;
    BOOL fileControlCallbackRanSinceLastCheck;
    BOOL fileControlCallbackTimedOut;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fileControlCallbackTimeoutLock;
    NSTimer *fileControlCallbackTimeoutTimer;
    NSURL *outputFileURL;
    BOOL recordingPaused;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
    int numberOfVideoCaptures;
    BOOL spatialVideoCaptureEnabled;
}

@end
