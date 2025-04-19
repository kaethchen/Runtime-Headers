@interface TYHandwritingDimensions : NSObject

@property (nonatomic) double writingOriginOffsetX;
@property (nonatomic) double writingOriginOffsetY;
@property (nonatomic) double totalWidth;
@property (nonatomic) double cumulativeWidth;
@property (nonatomic) double segmentWidth;
@property (nonatomic) double fixedScaleHeight;
@property (nonatomic) double rotationBias;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) double offsetY;
@property (nonatomic) double perLatexScale;
@property (nonatomic) double boundingBoxScale;
@property (nonatomic) unsigned long long primaryWritingDirection;
@property (nonatomic) unsigned long long segmentWritingDirection;
@property (nonatomic) BOOL requiresExtension;

@end
