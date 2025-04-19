@class NSIndexSet;

@interface PXPhotosDynamicHeaderLayout : PXGLayout <PXGSingleViewLayoutDelegate, PXPhotosGlobalHeader, PXGViewSource> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ spec;
    void /* unknown type, empty encoding */ isInSelectMode;
    void /* unknown type, empty encoding */ selectionSnapshot;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ viewModelObservation;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ postUpdateFlags;
    void /* unknown type, empty encoding */ contentMediaVersion;
    void /* unknown type, empty encoding */ insets;
}

@property (nonatomic, readonly) BOOL canHandleVisibleRectRejection;
@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

+ (double)headerMinimumHeightForReferenceSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)contentSizeDidChange;
- (void)didUpdate;
- (void)safeAreaInsetsDidChange;
- (void)entityManagerDidChange;
- (void)referenceSizeDidChange;
- (struct CGSize { double x0; double x1; })singleViewLayout:(id)a0 desiredSizeForReferenceSize:(struct CGSize { double x0; double x1; })a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)visibleRectDidChange;
- (void)willUpdate;

@end
