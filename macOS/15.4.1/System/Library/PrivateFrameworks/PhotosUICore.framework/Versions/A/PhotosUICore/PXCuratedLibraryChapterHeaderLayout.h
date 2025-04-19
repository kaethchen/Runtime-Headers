@class PXAssetCollectionReference, NSString, PXCuratedLibraryChapterHeaderLayoutSpec, NSArray, NSAttributedString, NSDictionary, PXNumberAnimator, NSObject, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PXCuratedLibraryChapterHeaderLayout : PXGLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned short _titleVersion;
    struct CGSize { double width; double height; } _chevronSize;
    unsigned short _chevronVersion;
    long long _alternateAppearanceFadeDirection;
    double _alternateAppearanceFadeStartThresholdDistance;
    NSArray *_itemIdentifierBySpriteIndex;
    NSMutableIndexSet *_axSpriteIndexes;
    long long _asyncDateGeneration;
    NSObject<OS_dispatch_queue> *_asyncDateQueue;
}

@property (copy, nonatomic) NSString *rawTitle;
@property (copy, nonatomic) NSDictionary *titleEmphasizedAttributes;
@property (copy, nonatomic) NSDictionary *floatingTitleEmphasizedAttributes;
@property (copy, nonatomic) NSDictionary *titleDeemphasizedAttributes;
@property (copy, nonatomic) NSDictionary *floatingTitleDeemphasizedAttributes;
@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) NSAttributedString *floatingAttributedTitle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } attributedTitleSize;
@property (readonly, nonatomic) PXNumberAnimator *alternateAppearanceMixAnimator;
@property (nonatomic) BOOL presentedAlternateAppearance;
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (retain, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *spec;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)update;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)axSpriteIndexes;
- (id)_createAttributedTitleWithEmphasizedAttributes:(id)a0 deemphasizedAttributes:(id)a1;
- (void)_handleAsyncRawTitle:(id)a0 generation:(long long)a1;
- (void)_invalidateAttributedTitle;
- (void)_invalidateChevron;
- (void)_updateSprites;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayScaleDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })paddingForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceOptionsDidChange;
- (void)referenceSizeDidChange;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;

@end
