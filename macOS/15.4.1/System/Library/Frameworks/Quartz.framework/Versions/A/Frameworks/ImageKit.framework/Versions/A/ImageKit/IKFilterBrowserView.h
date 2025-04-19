@class NSDictionary, NSMutableArray;

@interface IKFilterBrowserView : NSView {
    id _actionButton;
    id _addCollectionButton;
    id _browser;
    id _descriptionField;
    id _previewView;
    id _removeCollectionButton;
    id _searchField;
    id _OKButton;
    id _CancelButton;
    NSMutableArray *_foundFilters;
    NSDictionary *_options;
    BOOL _showPreviewView;
    BOOL _useNarrowLayout;
    id _modalDelegate;
    void *_priv[8];
}

- (void)dealloc;
- (void)finish:(id)a0;
- (void)awakeFromNib;
- (BOOL)browser:(id)a0 acceptDrop:(id)a1 atRow:(long long)a2 column:(long long)a3 dropOperation:(unsigned long long)a4;
- (BOOL)browser:(id)a0 canDragRowsWithIndexes:(id)a1 inColumn:(long long)a2 withEvent:(id)a3;
- (int)browser:(id)a0 numberOfRowsInColumn:(int)a1;
- (unsigned long long)browser:(id)a0 validateDrop:(id)a1 proposedRow:(long long *)a2 column:(long long *)a3 dropOperation:(unsigned long long *)a4;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(int)a2 column:(int)a3;
- (BOOL)browser:(id)a0 writeRowsWithIndexes:(id)a1 inColumn:(long long)a2 toPasteboard:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeCollection:(id)a0;
- (void)addCollection:(id)a0;
- (void)removeFromCollection:(id)a0;
- (void)setDefaultImage:(id)a0;
- (id)_categories;
- (id)_distillFilterList:(id)a0;
- (void)_filterAddedNotificationHandler:(id)a0;
- (void)_makeAllCollectionsNonEditable;
- (void)addToCollection:(id)a0;
- (void)browserDoubleClick:(id)a0;
- (void)browserSingleClick:(id)a0;
- (void)doSearch:(id)a0;
- (id)filterName;
- (void)setModalDelegate:(id)a0;
- (void)setPreviewState:(BOOL)a0;
- (void)setupViewWithOptions:(id)a0 modal:(BOOL)a1;
- (void)togglePreview:(id)a0;

@end
