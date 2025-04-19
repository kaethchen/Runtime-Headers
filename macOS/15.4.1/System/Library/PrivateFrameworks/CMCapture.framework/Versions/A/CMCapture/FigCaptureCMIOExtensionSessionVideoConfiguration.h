@interface FigCaptureCMIOExtensionSessionVideoConfiguration : NSObject

@property (nonatomic) struct { int width; int height; } dimensions;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) BOOL cinematicFramingEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } centerStageRectOfInterest;
@property (nonatomic) int centerStageFramingMode;
@property (nonatomic) double manualFramingPanningAngleX;
@property (nonatomic) double manualFramingPanningAngleY;
@property (nonatomic) double manualFramingZoomFactor;

@end
