@class NSMutableSet;

@interface ParsecTableCellViewReuseManager : NSObject {
    id /* block */ _cellViewFactory;
    NSMutableSet *_reusableCellViews;
    NSMutableSet *_allCellViews;
}

- (void).cxx_destruct;
- (id)_findAndPrepareCellView;
- (id)initWithCellViewFactory:(id /* block */)a0;
- (id)nextCellView;
- (void)prepareForReload;

@end
