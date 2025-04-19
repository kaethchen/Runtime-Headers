@class NSString;

@interface AVCaptureAudioPreviewOutputInternal : NSObject {
    float volume;
    NSString *outputDeviceUniqueID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

@end
