@class NSArray, NSString, NSAppearance, NSCollectionView;

@interface NSColorPanelFavoritesList : NSView <NSUserInterfaceValidations, NSCollectionViewDelegate, NSCollectionViewDataSource> {
    NSCollectionView *_collectionView;
    NSArray *_savedColors;
    NSArray *_savedColorsStoreIndexes;
    NSAppearance *_appearanceForRenderingColor;
}

@property (readonly) NSArray *presentedColors;
@property (copy) id /* block */ colorSelectionHandler;
@property (retain) NSAppearance *appearanceForRenderingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)delete:(id)a0;
- (void)deleteCurrentColorAndSelectNext;
- (void)setSavedColors:(id)a0;
- (void)deleteBackward:(id)a0;
- (void)_activateSelectedColor;
- (void)_commonInit;
- (void)_favoritesDidChange:(id)a0;
- (void)_selectColorSwatch:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)collectionView:(id)a0 acceptDrop:(id)a1 indexPath:(id)a2 dropOperation:(long long)a3;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (unsigned long long)collectionView:(id)a0 validateDrop:(id)a1 proposedIndexPath:(id *)a2 dropOperation:(long long *)a3;
- (BOOL)collectionView:(id)a0 writeItemsAtIndexPaths:(id)a1 toPasteboard:(id)a2;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)a0;
- (void)deleteCurrentColorAndSelectPrevious;
- (void)deleteForward:(id)a0;
- (void)deleteToBeginningOfLine:(id)a0;
- (void)deleteToBeginningOfParagraph:(id)a0;
- (void)deleteToEndOfLine:(id)a0;
- (void)deleteToEndOfParagraph:(id)a0;
- (void)deleteWordBackward:(id)a0;
- (void)deleteWordForward:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertNewline:(id)a0;
- (void)insertNewlineIgnoringFieldEditor:(id)a0;
- (void)insertText:(id)a0;
- (void)paste:(id)a0;
- (void)performClick:(id)a0;
- (id)savedColors;
- (long long)storeIndexForColorIndex:(long long)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
