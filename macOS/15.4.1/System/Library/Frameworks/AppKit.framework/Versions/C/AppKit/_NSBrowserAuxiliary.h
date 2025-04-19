@class _NSBrowserDropDestContext, NSMapTable, _NSBrowserDragSourceContext, _NSBrowserScrollView, NSMutableArray, NSClipView, NSImage, NSString, NSMatrix, _NSTypeSelectData, _NSBrowserColumnScrollHelper, NSEvent, NSColor;

@interface _NSBrowserAuxiliary : NSObject {
    _NSBrowserScrollView *_scrollViewForColumns;
    NSClipView *_clipViewForTitles;
    _NSBrowserColumnScrollHelper *_scrollToPointHelper;
    long long _scrollNotificationDisableCount;
    long long _columnAnimationDisabledCount;
    NSMatrix *_handlingViewSingleActionForView;
    NSEvent *_eventBeforeHandlingSingleActionForView;
    double _preferedColumnWidthToArchive;
    NSMutableArray *_visitedColumnContentWidths;
    long long _columnResizingNotificationDisabledCount;
    unsigned long long _columnResizingType;
    NSString *_columnsAutosaveName;
    struct __BrFlags2 { unsigned char delegateShouldSizeColumnToWidth : 1; unsigned char delegateSizeToFitWidtOfColumn : 1; unsigned char shouldAnimateColumnScrolling : 1; unsigned char tilingDisabled : 1; unsigned char setPathOptimizationOn : 1; unsigned char readingSavedColumns : 1; unsigned char recomputeExistingColumnPositions : 1; unsigned char waitingToSendDoubleActionAtEndOfScroll : 1; unsigned char waitingToSendSingleActionAtEndOfScroll : 1; unsigned char waitingToSendConfigChangeNotificationAtEndOfScroll : 1; unsigned char continuousResizeNotifications : 1; unsigned char sendDoubleAction : 1; unsigned char forceSynchronizedScrollingAnimation : 1; unsigned char useCustomBorderType : 1; unsigned char customBorderType : 3; unsigned char addingNewColumn : 1; unsigned char userColumnResizingAutoresizesWindow : 1; unsigned char delegateProvidesItems : 1; unsigned char isAutoExpandingItems : 1; unsigned char delegateProvidesLeafViewController : 1; unsigned char delegateProvidesHeaderViewController : 1; unsigned char delegateDidChangeLastColumn : 1; unsigned char delegateRootItemForBrowser : 1; unsigned char forwardTypeSelectionToNextColumn : 1; unsigned char reloadingColumnZero : 1; unsigned char allowsDelegateSizingForUserResize : 1; unsigned char reserved : 4; } _brFlags2;
    NSMutableArray *_unusedColumns;
    unsigned long long _draggingSourceOperationMaskForLocal;
    unsigned long long _draggingSourceOperationMaskForNonLocal;
    _NSBrowserDropDestContext *_dropContext;
    _NSBrowserDragSourceContext *_dragSourceContext;
    _NSTypeSelectData *_typeSelectData;
    NSColor *_backgroundColor;
    long long _clickedColumn;
    long long _clickedRow;
    NSMutableArray *_autoExpandOriginalSelection;
    NSMutableArray *_autoExpandingLastSelectedItems;
    id _autoExpandDraggingSource;
    NSMutableArray *_columnControllers;
    NSImage *_emptyVerticalSrollerImageCache;
    void *_reserved;
    NSMapTable *_leafItemViewControllerByItem;
    double _rowHeight;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
}

@end
