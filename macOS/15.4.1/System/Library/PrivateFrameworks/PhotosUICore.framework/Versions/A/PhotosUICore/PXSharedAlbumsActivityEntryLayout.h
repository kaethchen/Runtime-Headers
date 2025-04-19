@class NSString, PXSharedAlbumsActivityEntryItem;

@interface PXSharedAlbumsActivityEntryLayout : PXGLayout <PXGDisplayAssetSource, PXGStringSource, PXGSolidColorSource> {
    PXSharedAlbumsActivityEntryItem *_item;
    unsigned int _assetSpriteIndex;
    unsigned int _backgroundSpriteIndex;
    unsigned int _countsBackgroundSpriteIndex;
    unsigned int _countsSpriteIndex;
    unsigned int _contributorSpriteIndex;
    unsigned int _messageSpriteIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)update;
- (id)axSpriteIndexes;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned int)decorationOverlayAnchorSpriteIndex;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void)displayScaleDidChange;
- (void)referenceSizeDidChange;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
