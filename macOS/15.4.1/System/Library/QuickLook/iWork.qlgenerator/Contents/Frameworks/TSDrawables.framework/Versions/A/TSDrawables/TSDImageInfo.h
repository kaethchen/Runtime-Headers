@class TSDImageDataHelper, NSString, NSArray, TSUBezierPath, NSSet, TSDMediaStyle, TSDMaskInfo, TSDInfoGeometry, TSDImageAdjustments, TSPData, NSObject, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSDImageInfo : TSDMediaInfo <TSDReducibleImageContainer, TSDContainerInfo, TSDMixing, TSSPresetSource, TSKTransformableObject, TSDCompatibilityAwareMediaContainer, TSDAttachmentAwareContainerInfo> {
    TSUBezierPath *mInstantAlphaPath;
    struct CGSize { double width; double height; } mNaturalSize;
    TSDImageDataHelper *mImageDataHelper;
    TSPData *mThumbnailImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSDImageDataHelper *mAdjustedImageDataHelper;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSUBezierPath *mTracedPath;
    BOOL mShouldTracePDFData;
    BOOL mBackgroundRemoved;
    BOOL mCurrentlyInDocument;
    double mDescentForInlineLayout;
    BOOL mDescentForInlineLayoutValid;
}

@property (class, readonly, nonatomic) NSSet *presetKinds;

@property (readonly, retain, nonatomic) TSPData *imageData;
@property (retain, nonatomic) TSPData *imageDataNonnull;
@property (retain, nonatomic) TSPData *thumbnailImageData;
@property (retain, nonatomic) TSPData *originalImageData;
@property (readonly, nonatomic) TSPData *imageDataForExport;
@property (readonly, nonatomic) TSDMediaStyle *imageStyle;
@property (retain, nonatomic) TSDMaskInfo *maskInfo;
@property (retain, nonatomic) TSUBezierPath *instantAlphaPath;
@property (readonly, nonatomic) BOOL canBeMasked;
@property (readonly, nonatomic) TSUBezierPath *instantAlphaPathIgnoringNaturalSize;
@property (copy, nonatomic) TSDImageAdjustments *imageAdjustments;
@property (retain, nonatomic) TSPData *adjustedImageData;
@property (retain, nonatomic) TSPData *thumbnailAdjustedImageData;
@property (retain, nonatomic) TSPData *enhancedImageData;
@property (readonly, nonatomic) BOOL canAdjustImage;
@property (readonly, nonatomic) unsigned long long estimatedDataSizeForNewAdjustmentSentToServer;
@property (readonly, nonatomic) TSUBezierPath *tracedPath;
@property (nonatomic) BOOL shouldTracePDFData;
@property (nonatomic) BOOL backgroundRemoved;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) BOOL shouldGenerateThumbnails;
@property (readonly, nonatomic) double descentForInlineLayout;
@property (readonly, nonatomic) BOOL canBeDividedIntoCompoundShape;
@property (retain, nonatomic) TSPData *SVGData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) NSSet *infosToObserveForAttachedInfo;

+ (void)adjustIncomingImageGeometry:(id)a0 maskGeometry:(id)a1 forImageData:(id)a2 maskedWithInstantAlphaPath:(id)a3 withNaturalSize:(struct CGSize { double x0; double x1; })a4 forTargetImageGeometry:(id)a5 withTargetMaskGeometry:(id)a6;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2 reservedCount:(unsigned long long)a3;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)style;
- (id)fileType;
- (void)setStyle:(id)a0;
- (struct CGSize { double x0; double x1; })originalSize;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (BOOL)isPDF;
- (BOOL)needsDownload;
- (id)objectForProperty:(int)a0;
- (Class)layoutClass;
- (Class)repClass;
- (void)setExteriorTextWrap:(id)a0;
- (id)defaultMaskInfo;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canResetMediaSize;
- (struct CGPoint { double x0; double x1; })centerForReplacingWithNewMedia;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeFullTransform;
- (id)defaultMaskInfoWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })defaultOriginalSize;
- (id)geometryWithMask;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 imageData:(id)a3 originalImageData:(id)a4;
- (BOOL)isMasked;
- (BOOL)maskCanBeReset;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)presetKind;
- (struct CGSize { double x0; double x1; })rawDataSize;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)updateGeometryToReplaceMediaInfo:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)infoForSelectionPath:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)pastedPropertyMapForStyle:(id)a0 tailLineEndInfo:(int)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)fileDisplayName;
- (BOOL)canCopyData;
- (id)fileDataForDragging;
- (BOOL)p_canCopy:(id)a0;
- (id)promisedDataForType:(id)a0;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (long long)mediaCompatibilityTypeForData:(id)a0 associatedHint:(id)a1;
- (id)SVGData;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (BOOL)hasPDFDataForCopy;
- (void)i_forciblyRegenerateThumbnail;
- (void)i_regenerateThumbnailDataIfMissingButExpected;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 imageData:(id)a3 thumbnailImageData:(id)a4 originalImageData:(id)a5 imageAdjustments:(id)a6 adjustedImageData:(id)a7 thumbnailAdjustedImageData:(id)a8;
- (BOOL)p_aspectRatioUnlockedResizeWouldCauseSkew;
- (void)p_forciblyRegenerateThumbnailWhilePreservingOtherData;
- (id)p_imageDataForFile;
- (void)p_setImageData:(id)a0 thumbnailData:(id)a1;
- (void)p_upgradeImageGeometry;
- (void)p_upgradeImageThumbnail;
- (unsigned short)propertyIdForFlagsCommand;
- (unsigned short)propertyIdForOriginalSizeCommand;
- (id)propertyNameForFlagsCommand;
- (id)propertyNameForOriginalSizeCommand;
- (void)setAdjustedImageData:(id)a0 thumbnailData:(id)a1;
- (void)setImageData:(id)a0 thumbnailData:(id)a1;

@end
