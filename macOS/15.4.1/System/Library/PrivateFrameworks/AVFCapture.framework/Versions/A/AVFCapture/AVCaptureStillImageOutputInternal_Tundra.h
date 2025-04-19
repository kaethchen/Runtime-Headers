@class AVCaptureStillImageOutputUtils, NSDictionary, NSMutableArray, AVCaptureDeviceFormat_Tundra;

@interface AVCaptureStillImageOutputInternal_Tundra : NSObject {
    struct __CFDictionary { } *videoDecompressorUnits;
    struct __CFDictionary { } *videoToProcsUnits;
    AVCaptureStillImageOutputUtils *tranformUtils;
    NSMutableArray *stillImageRequests;
    unsigned int imageDataFormatType;
    NSDictionary *outputSettings;
    AVCaptureDeviceFormat_Tundra *highResModeFormat;
    BOOL isHighResMode;
    BOOL isCapturing;
    BOOL isEnableHighResMode;
    int numberOfPhotoCaptures;
}

- (void)dealloc;
- (id)init;

@end
