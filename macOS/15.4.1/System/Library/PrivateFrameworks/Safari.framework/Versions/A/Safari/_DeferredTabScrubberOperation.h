@protocol VisualScrubberItem;

@interface _DeferredTabScrubberOperation : NSObject {
    long long _operationType;
    id<VisualScrubberItem> _insertedItem;
    long long _insertionIndex;
    long long _removalIndex;
    long long _selectionIndex;
    id /* block */ _completionHandler;
    long long _sourceIndex;
    long long _targetIndex;
}

+ (id)moveOperationFromIndex:(long long)a0 toIndex:(long long)a1;
+ (id)insertionOperationForItem:(id)a0 atIndex:(long long)a1;
+ (id)removalOperationForIndex:(long long)a0 selectingItemAtIndex:(long long)a1 completionHandler:(id /* block */)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)applyToVisualScrubberViewController:(id)a0;

@end
