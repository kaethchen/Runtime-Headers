@class UXCollectionViewLayout, NSMapTable, NSMutableDictionary, UXCollectionView, NSMutableArray;

@interface UXCollectionViewData : NSObject {
    UXCollectionView *_collectionView;
    UXCollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    id *_globalItems;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryViews;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validLayoutRect;
    long long _numItems;
    long long _numSections;
    long long *_sectionItemCounts;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct CGSize { double width; double height; } _contentSize;
    struct { unsigned char contentSizeIsValid : 1; unsigned char itemCountsAreValid : 1; unsigned char layoutIsPrepared : 1; unsigned char layoutLocked : 1; } _collectionViewDataFlags;
}

@property (readonly, nonatomic) BOOL layoutIsPrepared;
@property (nonatomic, getter=isLayoutLocked) BOOL layoutLocked;
@property (readonly, nonatomic) NSMutableArray *clonedLayoutAttributes;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (long long)numberOfItems;
- (void)_loadEverything;
- (void)_prepareToLoadData;
- (id)_screenPageForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setLayoutAttributes:(id)a0 atGlobalItemIndex:(long long)a1;
- (void)_updateItemCounts;
- (void)_validateContentSize;
- (void)_validateItemCounts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewContentRect;
- (id)existingSupplementaryLayoutAttributes;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)a0;
- (long long)globalIndexForItemAtIndexPath:(id)a0;
- (id)indexPathForItemAtGlobalIndex:(long long)a0;
- (id)initWithCollectionView:(id)a0 layout:(id)a1;
- (void)invalidate:(BOOL)a0;
- (id)knownDecorationElementKinds;
- (id)knownSupplementaryElementKinds;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInSection:(long long)a0;
- (id)layoutAttributesForGlobalItemIndex:(long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)numberOfItemsBeforeSection:(long long)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForGlobalItemIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItemAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)validateLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)validateSupplementaryViews;
- (void)_setupMutableIndexPath:(id *)a0 forGlobalItemIndex:(long long)a1;
- (id)existingSupplementaryLayoutAttributesWithMinimalIndexPathLength:(unsigned long long)a0;
- (void)invalidateSupplementaryViews:(id)a0;

@end
