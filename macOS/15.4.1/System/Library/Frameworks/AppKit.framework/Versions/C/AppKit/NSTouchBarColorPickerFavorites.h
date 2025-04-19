@class NSCollectionView, NSArray, NSString, NSColor;

@interface NSTouchBarColorPickerFavorites : NSControl <NSCollectionViewDelegate, NSCollectionViewDataSource, NSTouchBarColorPickerView> {
    NSCollectionView *_collectionView;
    NSArray *_savedColors;
    NSArray *_allowedColorSpaces;
}

@property (readonly) NSArray *presentedColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSColor *currentColor;
@property BOOL allowsAlpha;
@property (copy) NSArray *allowedColorSpaces;
@property (weak) id target;
@property SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)clipsToBounds;
+ (long long)preferredColorSwatchType;

- (void)dealloc;
- (void)setSavedColors:(id)a0;
- (void)_favoritesDidChange:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)savedColors;
- (void)showMostRecentSavedColor;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
