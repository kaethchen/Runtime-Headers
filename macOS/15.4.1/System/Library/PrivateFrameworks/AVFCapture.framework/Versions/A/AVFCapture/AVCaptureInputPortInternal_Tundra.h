@class NSString, AVWeakReference;

@interface AVCaptureInputPortInternal_Tundra : NSObject {
    AVWeakReference *inputWeakReference;
    NSString *mediaType;
    struct opaqueCMFormatDescription { } *formatDescription;
    BOOL enabled;
    NSString *sourceDeviceType;
    long long sourceDevicePosition;
    struct OpaqueCMIOGraph { } *graph;
    int node;
    unsigned int element;
    unsigned int scope;
    int mixerNode;
    unsigned int mixerElement;
    unsigned int mixerScope;
    BOOL mixerIsReadOnly;
    struct OpaqueCMClock { } *clock;
    void *callbackContextToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

@end
