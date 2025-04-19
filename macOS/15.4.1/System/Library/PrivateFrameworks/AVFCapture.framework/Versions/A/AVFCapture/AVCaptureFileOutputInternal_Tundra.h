@class AVWeakReference;

@interface AVCaptureFileOutputInternal_Tundra : NSObject {
    struct __CFDictionary { } *outputSettings;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } maxRecordedDuration;
    long long maxRecordedFileSize;
    long long minFreeDiskSpaceLimit;
    AVWeakReference *weakReferenceDelegate;
    BOOL delegateRequiresFrameAccurateStart;
    int compressorNodesMode;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
    BOOL didChangeFileOutputDelegate;
    BOOL didUsePauseResumeRecording;
}

@end
