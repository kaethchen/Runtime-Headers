@class SCRElement;

@interface SCRSelectionChangeHelper : NSObject {
    struct { unsigned char registeredSelectedCellsChangedNotification : 1; unsigned char registeredSelectedChildrenChangedNotification : 1; unsigned char registeredLayoutChangedNotification : 1; unsigned char supportsSelectedCells : 1; unsigned char supportsSelectedChildren : 1; } _flags;
}

@property (retain, nonatomic) SCRElement *_element;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver;
- (void)removeObserver;
- (id)initWithElement:(id)a0;
- (void)_layoutChanged:(id)a0;
- (void)_echoChangesWithPreviousSelectedUIElements:(id)a0 updatedSelectedUIElements:(id)a1 outputRequest:(id)a2 singleElementOutputHandler:(id /* block */)a3;
- (void)_selectedElementsDidChange:(id)a0;
- (void)_selectedElementsDidChangeForElement:(id)a0;
- (BOOL)_toggleSelection:(id)a0 multiple:(BOOL)a1 canSetSelector:(SEL)a2 getterSelector:(SEL)a3 setterSelector:(SEL)a4 outputRequest:(id)a5;
- (BOOL)canActAsObserverTarget;
- (BOOL)toggleMultipleSelectionWithOutputRequest:(id)a0;
- (BOOL)toggleSingleSelectionWithOutputRequest:(id)a0;

@end
