@class PXSharedAlbumsActivityEntryItemList, PXGStackLayout, PXMediaProvider;

@interface PXSharedAlbumsActivityEntryViewController : NSViewController <PXGSublayoutProvider> {
    PXSharedAlbumsActivityEntryItemList *_itemList;
    PXGStackLayout *_layout;
    PXMediaProvider *_mediaProvider;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)_itemListManagerDidChange:(id)a0;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)layout:(id)a0 navigationObjectReferenceForSublayoutAtIndex:(long long)a1;

@end
