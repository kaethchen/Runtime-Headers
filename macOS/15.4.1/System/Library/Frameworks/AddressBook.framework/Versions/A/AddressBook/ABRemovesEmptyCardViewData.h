@class ABCardViewPropertyProvider;

@interface ABRemovesEmptyCardViewData : NSObject {
    ABCardViewPropertyProvider *_propertyProvider;
}

- (void).cxx_destruct;
- (void)removeEmptyItemsFromDataSource:(id)a0;
- (id)_removeEmptyItemsFromMultiValue:(id)a0 key:(id)a1 itemsRemoved:(BOOL *)a2;

@end
