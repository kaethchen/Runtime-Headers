@class PXGGradient;

@interface PXCuratedLibraryCardSectionBodyLayoutSpec : PXFeatureSpec

@property (nonatomic) double aspectRatio;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double distanceToNextLayout;
@property (readonly, nonatomic) PXGGradient *skimmingHintGradient;
@property (readonly, nonatomic) BOOL allowsVideoPlaybackAtAnySize;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
