@protocol TSDAnimationSession;

@interface TSDTextureDescription : NSObject <NSCopying> {
    BOOL _shouldNotAddShapeAttributes;
}

@property (weak, nonatomic) id<TSDAnimationSession> session;
@property (nonatomic) BOOL isMagicMove;
@property (nonatomic) BOOL includesActionBuilds;
@property (nonatomic) BOOL shouldAddFinal;
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly;
@property (nonatomic) BOOL shouldDistortToFit;
@property (nonatomic) BOOL shouldNotAddContainedReps;
@property (nonatomic) BOOL shouldNotAddShapeAttributes;
@property (nonatomic) BOOL shouldNotAddText;
@property (nonatomic) BOOL shouldSeparateReflection;
@property (nonatomic) BOOL shouldSeparateShadow;
@property (nonatomic) BOOL shouldSeparateStroke;
@property (nonatomic) BOOL shouldAddParameterizedStroke;
@property (nonatomic) BOOL shouldReverseStrokeDrawing;
@property (nonatomic) BOOL shouldSeparateGroupedTextures;
@property (nonatomic) BOOL shouldSeparateText;
@property (nonatomic) BOOL shouldForceTextureGeneration;
@property (nonatomic) BOOL shouldIgnoreScaleInSourceImage;
@property (nonatomic) BOOL shouldAddMasks;
@property (nonatomic) BOOL shouldAddVideoBackgroundFill;
@property (nonatomic) BOOL shouldUseSourceImage;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) unsigned long long deliveryStyle;
@property (nonatomic) int byGlyphStyle;
@property (nonatomic) int childRepByGlyphStyle;

+ (id)descriptionWithSession:(id)a0;
+ (id)descriptionWithTextureDescription:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
