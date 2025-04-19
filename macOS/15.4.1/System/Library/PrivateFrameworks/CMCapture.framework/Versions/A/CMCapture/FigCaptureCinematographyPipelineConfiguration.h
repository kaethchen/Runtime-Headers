@class NSArray, FigCaptureSmartStyle, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    NSArray *_objectMetadataIdentifiers;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    BOOL _smartStyleLearningEnabled;
    FigCaptureSmartStyle *_smartStyle;
    BOOL _preLTMThumbnailEnabled;
    BOOL _postColorProcessingThumbnailEnabled;
    int _depthType;
}

- (void)dealloc;

@end
