@class NSDictionary, NSString;

@interface AVCapturePhotoSettingsInternal_Tundra : NSObject {
    NSDictionary *format;
    NSString *processedFileType;
    long long uniqueID;
    BOOL highResolutionPhotoEnabled;
    long long photoQualityPrioritization;
    long long flashMode;
    BOOL constantColorEnabled;
    BOOL constantColorFallbackPhotoDeliveryEnabled;
    BOOL shutterSoundSuppressionEnabled;
    struct { int width; int height; } maxPhotoDimensions;
}

@end
