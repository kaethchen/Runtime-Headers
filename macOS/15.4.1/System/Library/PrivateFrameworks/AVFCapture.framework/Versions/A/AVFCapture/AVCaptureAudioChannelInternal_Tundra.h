@class AVCaptureConnection_Tundra;

@interface AVCaptureAudioChannelInternal_Tundra : NSObject {
    AVCaptureConnection_Tundra *connection;
    BOOL enabled;
    float volume;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

@end
