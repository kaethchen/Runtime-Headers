@class TSDMediaStyle, NSString, NSSet, TSPData, TSSStyle, TSUBezierPath;

@interface TSAObject3DInfo : TSDDrawableInfo <TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDStyleOwning, TSSStyleClient, TSDMixing, TSDFileBasedInfo, TSDFittingOnInsertion> {
    TSDMediaStyle *_style;
    TSPData *_objectData;
    TSPData *_thumbnailImageData;
    BOOL _playsAnimations;
    BOOL _hasEmbeddedAnimations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TSPData *objectData;
@property (retain, nonatomic) TSPData *thumbnailImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (nonatomic) void /* unknown type, empty encoding */ pose3D;
@property (nonatomic) BOOL playsAnimations;
@property (nonatomic) BOOL hasEmbeddedAnimations;
@property (retain, nonatomic) TSUBezierPath *tracedPath;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) BOOL isUSDZ;
@property (readonly, nonatomic) BOOL readyForQuicklook;
@property (readonly, nonatomic) BOOL readyToPlayAnimations;
@property (readonly, nonatomic) BOOL canPlayEmbeddedAnimationsInSlideshow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) Class styleClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly, nonatomic) NSString *fileDisplayName;
@property (readonly, nonatomic) NSString *fileType;
@property (readonly, nonatomic) TSPData *fileDataForDragging;

+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;
+ (id)p_defaultStyleWithContext:(id)a0;

- (void).cxx_destruct;
- (unsigned int)elementKind;
- (BOOL)isSelectable;
- (void)acceptVisitor:(id)a0;
- (void)setAspectRatioLocked:(BOOL)a0;
- (BOOL)hasAnimations;
- (BOOL)needsDownload;
- (Class)layoutClass;
- (Class)repClass;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (BOOL)supportsParentRotation;
- (void)saveToArchiver:(id)a0;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)defaultDescriptiveName;
- (void)didInitFromSOS;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)pastedPropertyMapForStyle:(id)a0 tailLineEndInfo:(int)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)takeGeometryFromReplaced3DInfo:(id)a0;
- (BOOL)canCopyData;
- (id)computeInfoGeometryForFittingInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)i_setThumbnailImageData:(id)a0;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1 objectData:(id)a2 thumbnailImageData:(id)a3;
- (id)initWithContext:(id)a0 geometry:(id)a1 objectData:(id)a2 thumbnailImageData:(id)a3 embeddedAnimations:(BOOL)a4 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 tracedPath:(id)a6;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 objectData:(id)a3 thumbnailImageData:(id)a4;
- (BOOL)p_canCopy:(id)a0;
- (id)promisedDataForType:(id)a0;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)takeGeometryFromReplaced3DLayout:(id)a0 info:(id)a1;
- (void)takePropertiesFromReplaced3DInfo:(id)a0;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
- (BOOL)wantsStandardTypesInAdditionToTypesToPromiseWhenCopyingSingleDrawable;

@end
