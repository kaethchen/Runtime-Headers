@class KHProjectLayout, NSString, NSMutableArray;

@interface KHCalendarProjectLayoutsDataSource : KHProjectLayoutsDataSource <KHMutableEditorDataSource> {
    NSMutableArray *_collectionLayouts;
    KHProjectLayout *_endSheetLayout;
    unsigned long long _leftEndSheetLayoutIndex;
    unsigned long long _rightEndSheetLayoutIndex;
}

@property (readonly, nonatomic) KHProjectLayout *endSheetLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)title;
- (id)undoManager;
- (id)indexPathForProjectLayoutIndex:(unsigned long long)a0;
- (BOOL)_canMoveLayoutAtIndex:(long long)a0 toIndex:(long long)a1;
- (id)accessibilityValues;
- (id)accessibilityValuesForLayout:(id)a0;
- (void)addEditorLayouts:(unsigned long long)a0;
- (BOOL)addLayoutAtIndexPath:(id)a0;
- (BOOL)adjustEditorPageCount:(unsigned long long)a0;
- (double)bestFitScaleForLayout:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)canMoveEditorLayoutAtIndex:(long long)a0;
- (void)clearEditorPlacedPhotos;
- (void)clearEditorPlacedPhotosForLayouts:(id)a0;
- (id)collectionLayouts;
- (id)editorDisplayFilters;
- (id)editorDisplayFiltersAccessibilityLabel;
- (id)editorIndexSetForSelectAll;
- (id)editorIndexSetForSelectAllLeading;
- (id)editorIndexSetForSelectAllTrailing;
- (id)editorLayoutAtIndex:(long long)a0;
- (BOOL)editorLayoutAtIndexIsHidden:(long long)a0;
- (id)editorLayoutForSelection:(id)a0;
- (id)editorLayoutsForPageAtIndex:(long long)a0;
- (long long)editorRearrangingStyle;
- (double)editorScaleForReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)editorTitle;
- (id)editorTitleForLayoutsAtPageIndex:(long long)a0;
- (void)exchangeEditorLayoutAtIndex:(long long)a0 withEditorLayoutAtIndex:(long long)a1;
- (long long)indexOfEditorLayout:(id)a0;
- (void)insertEditorLayoutAtIndex:(unsigned long long)a0;
- (void)insertEditorSpreadLayoutAtIndex:(unsigned long long)a0;
- (void)moveEditorLayoutAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)moveEditorLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(long long)a1;
- (long long)numberOfEditorLayouts;
- (long long)numberOfEditorPages;
- (long long)numberOfSpreadEditorLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)numberOfVisibleEditorPagesPerPage;
- (long long)pageIndexForEditorLayout:(id)a0;
- (unsigned long long)projectIndexForIndexPath:(id)a0;
- (void)refreshCalendarGrids;
- (void)removeEditorLayoutsInIndexSet:(id)a0;
- (BOOL)removeLayoutAtIndexPath:(id)a0;
- (void)resetCollectionLayouts;
- (id)selectionIndicesForProposedSelectionIndex:(long long)a0;
- (void)setCalendarDuration:(id)a0;
- (void)setCalendarStartDate:(id)a0;
- (BOOL)shouldExchangeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)shouldSelectEditorLayoutAtIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })targetRangeForMoveOfItemsAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })targetRangeToRearrangeFromSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
