@class NSColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject

@property (retain, nonatomic) NSColor *disabledColor;
@property (retain, nonatomic) NSColor *currentPositionMarkerColor;
@property (retain, nonatomic) NSColor *originalPositionMarkerColor;
@property (retain, nonatomic) NSColor *suggestedMarkerColor;
@property (nonatomic) BOOL alwaysShowKeyTime;
@property (nonatomic) BOOL showDefaultKeyTime;
@property (nonatomic) BOOL livePortraitStyle;

- (id)init;
- (void).cxx_destruct;

@end
