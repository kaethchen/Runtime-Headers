@interface LPLinkRendererSizeClassParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) BOOL preserveIconAspectRatioAndAlignmentWhenScaling;
@property (nonatomic) BOOL onlyShowIcon;
@property (nonatomic) BOOL neverShowIcon;
@property (nonatomic) BOOL neverShowText;
@property (nonatomic) BOOL disableTextWrapping;
@property (nonatomic) BOOL useDominantColorForText;
@property (nonatomic) double minimumMediaCornerRadius;
@property (nonatomic) double minimumIconCornerRadius;
@property (nonatomic) BOOL alignTextAndMediaHorizontalEdges;
@property (nonatomic) double mediaFixedAspectRatio;
@property (nonatomic) BOOL needsSpaceAffordanceForDeleteButton;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_cacheKey;

@end
