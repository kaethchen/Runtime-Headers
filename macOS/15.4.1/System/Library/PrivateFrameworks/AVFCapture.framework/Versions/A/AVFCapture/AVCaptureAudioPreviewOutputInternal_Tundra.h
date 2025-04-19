@class NSString;

@interface AVCaptureAudioPreviewOutputInternal_Tundra : NSObject {
    struct __CFDictionary { } *splitterUnits;
    struct __CFDictionary { } *audioPreviewSynchronizerUnits;
    struct __CFDictionary { } *audioPreviewOutputUnits;
    struct __CFDictionary { } *callbackContextTokens;
    float volume;
    NSString *outputDeviceUniqueID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

@end
