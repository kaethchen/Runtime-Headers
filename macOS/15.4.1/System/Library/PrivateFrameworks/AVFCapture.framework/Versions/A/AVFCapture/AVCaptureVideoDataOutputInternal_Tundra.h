@class NSArray, AVCaptureVideoSettings, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureVideoDataOutputInternal_Tundra : NSObject {
    AVWeakReference *weakReferenceDelegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    struct __CFDictionary { } *videoDecompressorUnits;
    struct __CFDictionary { } *videoFrameRateGovernorUnits;
    struct __CFDictionary { } *videoCompressorUnits;
    struct __CFDictionary { } *videoToProcsUnits;
    struct __CFDictionary { } *callbackData;
    AVCaptureVideoSettings *videoSettings;
    BOOL alwaysDiscardsLateVideoFrames;
    NSArray *availableVideoCVPixelFormatTypes;
    BOOL automaticallyConfiguresOutputBufferDimensions;
    BOOL deliversPreviewSizedOutputBuffers;
    BOOL sceneStabilityMetadataEnabled;
    NSArray *requestedBufferAttachments;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

- (void)dealloc;
- (id)init;

@end
