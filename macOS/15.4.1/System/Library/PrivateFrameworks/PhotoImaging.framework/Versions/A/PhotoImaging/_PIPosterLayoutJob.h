@class PFPosterLayout, NSString, PIPosterLayoutRequest, CIImage, PFWallpaperCompoundDeviceConfiguration;
@protocol PFParallaxAssetRegions;

@interface _PIPosterLayoutJob : NURenderJob <PIPosterLayoutProvider>

@property (readonly, nonatomic) PIPosterLayoutRequest *layoutRequest;
@property (retain, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (retain, nonatomic) id<PFParallaxAssetRegions> layoutRegions;
@property (retain, nonatomic) CIImage *segmentationMatteImage;
@property (retain, nonatomic) CIImage *segmentationConfidenceMapImage;
@property (nonatomic) unsigned long long segmentationClassification;
@property (retain, nonatomic) PFPosterLayout *layout;
@property (nonatomic) float cropScore;
@property (nonatomic) float landscapeCropScore;
@property (nonatomic) float layoutScore;
@property (nonatomic) float landscapeLayoutScore;
@property (nonatomic) float nFaces;
@property (nonatomic) float segmentationScore;
@property (nonatomic) float localConfidenceScore;
@property (nonatomic) float groundedScore;
@property (nonatomic) float confidenceMapScore;
@property (nonatomic) float parallaxScore;
@property (nonatomic) float mattePureBackground;
@property (nonatomic) float mattePureForeground;
@property (nonatomic) float confidencePureBackground;
@property (nonatomic) float confidencePureForeground;
@property (nonatomic) BOOL clockOverlapAcceptable;
@property (nonatomic) float resolutionRatio;
@property (nonatomic) float faceSize;
@property (nonatomic) float faceLocalConfidence;
@property (nonatomic) BOOL facePositionAcceptable;
@property (nonatomic) BOOL metadataClockOverlapAcceptable;
@property (nonatomic) BOOL headroomIsFeasible;
@property (nonatomic) BOOL usingHeadroom;
@property (nonatomic) BOOL usingLandscapeHeadroom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;
- (id)generateOrientedLayoutsForFullExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutConfiguration:(id)a1 layoutRegions:(id)a2 segmentationMatteImage:(id)a3 segmentationClassification:(unsigned long long)a4 error:(id *)a5;
- (float)_headroomPenaltyForIntermediateLayout:(id)a0 originalFullExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 layoutConfiguration:(id)a2;
- (id)_layoutFromIntermediateLayouts:(id)a0 layoutConfiguration:(id)a1 fullExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithPosterLayoutRequest:(id)a0;

@end
