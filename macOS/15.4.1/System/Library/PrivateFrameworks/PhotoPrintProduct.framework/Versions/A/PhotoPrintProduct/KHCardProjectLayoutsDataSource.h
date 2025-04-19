@class NSString, NSMutableArray, NSArray;

@interface KHCardProjectLayoutsDataSource : KHProjectLayoutsDataSource <KHEditorDataSource> {
    NSMutableArray *_collectionLayouts;
    NSArray *_displayFilters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)undoManager;
- (id)accessibilityValues;
- (id)accessibilityValuesForLayout:(id)a0;
- (BOOL)adjustEditorPageCount:(unsigned long long)a0;
- (double)bestFitScaleForLayout:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)canMoveEditorLayoutAtIndex:(long long)a0;
- (void)clearEditorPlacedPhotos;
- (void)clearEditorPlacedPhotosForLayouts:(id)a0;
- (id)collectionLayouts;
- (id)editorDisplayFilterForPageIndex:(unsigned long long)a0;
- (id)editorDisplayFilters;
- (id)editorDisplayFiltersAccessibilityLabel;
- (id)editorIndexSetForSelectAll;
- (id)editorIndexSetForSelectAllLeading;
- (id)editorIndexSetForSelectAllTrailing;
- (id)editorLayoutAtIndex:(long long)a0;
- (BOOL)editorLayoutAtIndexIsHidden:(long long)a0;
- (id)editorLayoutForSelection:(id)a0;
- (id)editorLayoutsForPageAtIndex:(long long)a0;
- (double)editorScaleForReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)editorTitle;
- (id)editorTitleForLayoutsAtPageIndex:(long long)a0;
- (void)exchangeEditorLayoutAtIndex:(long long)a0 withEditorLayoutAtIndex:(long long)a1;
- (long long)indexOfEditorLayout:(id)a0;
- (void)moveEditorLayoutAtIndex:(long long)a0 toIndex:(long long)a1;
- (long long)numberOfEditorLayouts;
- (long long)numberOfEditorPages;
- (long long)numberOfSpreadEditorLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)numberOfVisibleEditorPagesPerPage;
- (unsigned long long)pageIndexForDisplayFilter:(id)a0;
- (long long)pageIndexForEditorLayout:(id)a0;
- (void)resetCollectionLayouts;
- (id)selectionIndicesForProposedSelectionIndex:(long long)a0;
- (BOOL)shouldSelectEditorLayoutAtIndex:(long long)a0;

@end
