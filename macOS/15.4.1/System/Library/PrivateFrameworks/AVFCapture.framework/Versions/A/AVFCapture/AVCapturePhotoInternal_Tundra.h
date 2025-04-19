@class AVCapturePhotoSettings_Tundra, AVCaptureResolvedPhotoSettings_Tundra;

@interface AVCapturePhotoInternal_Tundra : NSObject {
    struct opaqueCMSampleBuffer { } *sampleBuffer;
    AVCaptureResolvedPhotoSettings_Tundra *resolvedSettings;
    AVCapturePhotoSettings_Tundra *unresolvedSettings;
}

@end
