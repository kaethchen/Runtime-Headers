@class AVCaptureStillImageOutputUtils, NSMutableArray, NSArray;

@interface AVCapturePhotoOutputInternal_Tundra : NSObject {
    struct __CFDictionary { } *videoDecompressorUnits;
    struct __CFDictionary { } *videoToProcsUnits;
    AVCaptureStillImageOutputUtils *tranformUtils;
    NSMutableArray *requests;
    BOOL isConsumerLive;
    BOOL highResolutionCaptureEnabled;
    long long maxPhotoQualityPrioritization;
    long long lastSettingsUniqueID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
    int numberOfPhotoCaptures;
    struct { int width; int height; } maxPhotoDimensions;
    NSArray *supportedFlashModes;
    NSArray *availablePhotoCodecTypes;
    NSArray *availablePhotoFileTypes;
}

- (void)dealloc;
- (id)init;

@end
