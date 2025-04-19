@class NSArray, NSTouchBarItemTree, NSMutableDictionary;

@interface _NSTouchBarItemTreeBuilder : NSObject {
    NSArray *_touchBars;
    NSArray *_filteredBars;
    long long _maxVisitedResponderBarIndex;
    long long _currentResponderBarIndex;
    NSMutableDictionary *_itemIdentifiersToParentNodes;
}

@property (copy) id /* block */ itemsMap;
@property BOOL requireUniqueItemIdentifiers;
@property (readonly) NSTouchBarItemTree *itemTree;

- (void)dealloc;
- (id)_expandBarChildren:(id)a0 inNode:(id)a1 centeredNode:(id *)a2;
- (id)_expandItem:(id)a0 itemCenteredNode:(id *)a1;
- (id)_expandNextResponderBarWithCenterNode:(id *)a0;
- (id)_expandResponderBarAtIndex:(long long)a0 centerNode:(id *)a1;
- (void)_performWithResponderBarIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithTouchBars:(id)a0;

@end
