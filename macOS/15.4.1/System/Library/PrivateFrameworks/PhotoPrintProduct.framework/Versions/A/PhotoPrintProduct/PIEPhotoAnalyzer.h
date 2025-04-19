@class NSArray, NSDate, NSLock, PIEImageAnalyzer;
@protocol KHPhotoInfoProtocol, MapPointOfInterestProtocol;

@interface PIEPhotoAnalyzer : NSObject {
    NSLock *_cacheLock;
    NSArray *_cachedFaceInfos;
    id<MapPointOfInterestProtocol> _cachedLocationInfo;
    NSDate *_cachedPhotoDate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedRegionOfInterest;
}

@property (readonly) id<KHPhotoInfoProtocol> photoInfo;
@property (readonly) PIEImageAnalyzer *imageAnalyzer;
@property int pyrSegmentationLevels;
@property double pyrSegmentationNeighborThreshold;
@property double pyrSegmentationClusterThreshold;

- (void)dealloc;
- (id)keywords;
- (id)locationInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterest;
- (id)faceInfos;
- (BOOL)anyFaceRectIntersectsUnitRects:(id)a0 minIntersectRectSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)createEnergyImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })facesUnitBoundingRect;
- (id)initWithPhotoInfo:(id)a0;
- (id)photoDate;
- (struct CGImage { } *)predominantColors;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterest:(int)a0;
- (struct CGPoint { double x0; double x1; })regionOfInterestNominalCenter;
- (id)unitFaceRects;

@end
