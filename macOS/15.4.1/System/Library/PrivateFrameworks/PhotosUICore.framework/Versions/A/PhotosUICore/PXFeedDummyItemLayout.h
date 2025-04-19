@class NSString;

@interface PXFeedDummyItemLayout : PXGLayout <PXGSolidColorSource, PXGStringSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _backgroundSpriteIndex;
    unsigned int _textSpriteIndex;
    unsigned short _contentVersion;
}

@property (retain, nonatomic) id representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (id)axSpriteIndexes;
- (void)_invalidateContent;
- (void)_invalidateContentVersion;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)displayScaleDidChange;
- (void)referenceSizeDidChange;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
