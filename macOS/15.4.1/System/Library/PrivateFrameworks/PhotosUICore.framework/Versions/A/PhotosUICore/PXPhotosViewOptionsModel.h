@class NSString, NSArray, PXSortOrderState, NSMenu, PXPhotoLibraryLocalDefaults;
@protocol PXPhotosLensControlItem;

@interface PXPhotosViewOptionsModel : PXObservable <PXChangeObserver, PXMutablePhotosViewOptionsModel> {
    PXPhotoLibraryLocalDefaults *_localDefaults;
    NSString *_sortOrderTitle;
    NSMenu *_sortOrderMenu;
}

@property (readonly, nonatomic) PXSortOrderState *sortOrderState;
@property (readonly, nonatomic) NSString *sortOrderTitle;
@property (readonly, nonatomic) NSMenu *sortOrderMenu;
@property (readonly, nonatomic) BOOL hidesSortOrderMenu;
@property (readonly, nonatomic) id<PXPhotosLensControlItem> selectedLensControlItem;
@property (readonly, nonatomic) NSArray *lensControlItems;
@property (readonly, nonatomic) unsigned long long browserDateType;
@property (readonly, nonatomic) long long centralizedFeedbackMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *additionalLensControlItems;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateLensControlItems;
- (id)_makeSortOrderMenu;
- (id)_makeSortOrderTitle;
- (id)_makeStandardLensControlItems;
- (void)_updateLensControlItems;
- (id)browserDateIntervalStringForDateIntervalString:(id)a0;
- (id)browserTitleForProposedTitle:(id)a0;
- (void)setHidesSortOrderMenu:(BOOL)a0;
- (void)setLensControlItems:(id)a0;
- (void)setSelectedLensControlItem:(id)a0;
- (void)setSortOrderMenu:(id)a0;
- (void)setSortOrderTitle:(id)a0;

@end
