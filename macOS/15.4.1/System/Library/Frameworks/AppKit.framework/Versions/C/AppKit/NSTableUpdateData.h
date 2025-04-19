@class NSTableRowHeightData, NSMutableIndexSet, NSTableBannerRowData, NSArray, NSMutableArray;

@interface NSTableUpdateData : NSObject {
    NSMutableIndexSet *_rowViewsIndexes;
    NSMutableArray *_rowViews;
    NSMutableArray *_insertionItems;
    BOOL _selectionChanged;
    NSMutableArray *_deletionItems;
    BOOL _containsSlideDeletes;
    NSMutableIndexSet *_deletionRowIndexes;
    NSMutableIndexSet *_insertionRowIndexes;
    BOOL _containsDeletes;
    BOOL _containsInserts;
    BOOL _containsMoves;
    BOOL _rowHeightsChanged;
    BOOL _containsSwipe;
    long long _updateCount;
    NSTableRowHeightData *_priorRowHeightData;
    NSTableBannerRowData *_priorGroupRowData;
    NSArray *_priorColumnWidths;
    BOOL _needsFrameUpdate;
    BOOL _containsAnimations;
    NSTableBannerRowData *_priorFooterRowData;
}

- (void)dealloc;

@end
