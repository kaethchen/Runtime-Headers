@class AVCaptureAudioSettings, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureAudioDataOutputInternal_Tundra : NSObject {
    AVWeakReference *weakReferenceDelegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    struct __CFDictionary { } *splitterUnits;
    struct __CFDictionary { } *mixerUnits;
    struct __CFDictionary { } *audioConverterUnits;
    struct __CFDictionary { } *audioToProcsUnits;
    struct __CFDictionary { } *callbackData;
    AVCaptureAudioSettings *audioSettings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

- (void)dealloc;
- (id)init;

@end
