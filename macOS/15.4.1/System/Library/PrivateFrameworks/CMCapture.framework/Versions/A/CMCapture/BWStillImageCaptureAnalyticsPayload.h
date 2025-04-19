@class NSDictionary, BWStillImageFocusPixelBlurScoreResult;

@interface BWStillImageCaptureAnalyticsPayload : BWStillImageAnalyticsPayloadCommon {
    int _stillImageFusionMode;
}

@property (nonatomic) int deviceType;
@property (nonatomic) unsigned int processingFlags;
@property (nonatomic) float zoom;
@property (nonatomic) float uiZoom;
@property (nonatomic) int shutterLag;
@property (nonatomic) int numberOfFacesWithVisionFaceDetection;
@property (nonatomic) float largestFaceHeight;
@property (nonatomic) float smallestFaceHeight;
@property (nonatomic) int numberOfFacesAtEdge;
@property (nonatomic) int numberOfFacesAtCenter;
@property (retain, nonatomic) NSDictionary *oisRecenteringLoggingData;
@property (nonatomic) int intelligentDistortionCorrectionStatusCode;
@property (nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode;
@property (nonatomic) int intelligentDistortionCorrectionCorrectionType;
@property (nonatomic) int ispMotionHighPassFilterConvergenceFlags;
@property (nonatomic) unsigned int bitDepth;
@property (nonatomic) unsigned int dngFileSize;
@property (nonatomic) unsigned int photoFileSize;
@property (nonatomic) unsigned int thumbnailImageSize;
@property (nonatomic) unsigned int auxiliaryImagesSize;
@property (nonatomic) unsigned int depthFormatDimensionWidth;
@property (nonatomic) unsigned int depthFormatDimensionHeight;
@property (nonatomic) unsigned int depthPixelFormat;
@property (nonatomic) BOOL depthDataFiltered;
@property (retain, nonatomic) BWStillImageFocusPixelBlurScoreResult *focusPixelBlurScoreResult;
@property (nonatomic) int fusionMode;
@property (nonatomic) unsigned int dngCodecType;
@property (nonatomic) float dngCodecQuality;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
