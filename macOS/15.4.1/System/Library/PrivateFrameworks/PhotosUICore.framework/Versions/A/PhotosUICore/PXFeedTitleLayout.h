@class NSString, PXFeedViewModel, NSDictionary;

@interface PXFeedTitleLayout : PXGLayout <PXChangeObserver, PXGStringSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _titleSpriteIndex;
    unsigned short _titleMediaVersion;
    NSDictionary *_subtitleAttributes;
}

@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)update;
- (void)_updateAttributes;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)axSpriteIndexes;
- (void)_invalidateAttributes;
- (void)_invalidateTitle;
- (void)_invalidateTitleContentVersion;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)displayScaleDidChange;
- (void)referenceSizeDidChange;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
