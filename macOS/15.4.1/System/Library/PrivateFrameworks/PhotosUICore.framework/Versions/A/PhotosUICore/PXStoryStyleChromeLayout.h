@class NSString, PXStoryViewModel, NSIndexSet, NSAttributedString;
@protocol PXStoryColorGradingRepository, PXStoryViewLayoutSpec, PXStoryStyleDescriptor;

@interface PXStoryStyleChromeLayout : PXGLayout <PXGStringSource, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _songArtworkSpriteIndex;
    unsigned int _songTitleSpriteIndex;
    unsigned int _songTitleAccessorySpriteIndex;
    unsigned int _songSubtitleSpriteIndex;
    unsigned int _colorGradeNameSpriteIndex;
    unsigned int _filterButtonSpriteIndex;
    unsigned int _musicButtonSpriteIndex;
    unsigned int _customLabelSpriteIndex;
    unsigned int _spriteCount;
    NSIndexSet *_axSpriteIndexes;
}

@property (nonatomic) unsigned short mediaVersion;
@property (readonly, nonatomic) NSAttributedString *titleAttributedString;
@property (readonly, nonatomic) NSAttributedString *titleAccessoryAttributedString;
@property (readonly, nonatomic) NSAttributedString *subtitleAttributedString;
@property (readonly, nonatomic) NSAttributedString *colorGradeNameAttributedString;
@property (readonly, nonatomic) id musicFeedbackContextMenuDelegate;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) id<PXStoryStyleDescriptor> styleInfo;
@property (retain, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;
@property (retain, nonatomic) id<PXStoryColorGradingRepository> colorGradingRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startCachingResourcesForStyleInfo:(id)a0 viewLayoutSpec:(id)a1 displayScale:(double)a2;
+ (void)stopCachingResourcesForStyleInfo:(id)a0 viewLayoutSpec:(id)a1 displayScale:(double)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (id)initWithViewModel:(id)a0;
- (void)didUpdate;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)a0;
- (id)axSpriteIndexes;
- (id)_styleSongAsset;
- (id)_actionPerformer;
- (long long)_backgroundCircleStyle;
- (void)_handleFilterButton:(id)a0;
- (void)_handleMusicButton:(id)a0;
- (void)_invalidateContent;
- (void)_invalidateStrings;
- (void)alphaDidChange;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)axVisibleSpriteIndexes;
- (BOOL)canHandleVisibleRectRejection;
- (void)displayScaleDidChange;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)willUpdate;

@end
