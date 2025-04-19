@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) double horizontalMargin;
@property (readonly, nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } bodyCornerRadius;
@property (readonly, nonatomic) BOOL allowsVideoPlaybackAtAnySize;
@property (readonly, nonatomic) BOOL useHorizontalContentGuideInsets;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
