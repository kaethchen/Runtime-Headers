@class NSIndexSet;

@interface PhotosUICore.CarouselContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider, PXGViewSource> {
    void /* unknown type, empty encoding */ scrollPosition;
    void /* unknown type, empty encoding */ maskingInsetsFraction;
    void /* unknown type, empty encoding */ pageControllerAlpha;
    void /* unknown type, empty encoding */ numberOfPages;
    void /* unknown type, empty encoding */ layoutSpec;
    void /* unknown type, empty encoding */ fullsizeFrameRectsStore;
    void /* unknown type, empty encoding */ pageControlSpriteIndex;
    void /* unknown type, empty encoding */ pageControlConfiguration;
    void /* unknown type, empty encoding */ pageControlVersion;
    void /* unknown type, empty encoding */ displayedPageRange;
    void /* unknown type, empty encoding */ displayedPageInfos;
    void /* unknown type, empty encoding */ mostFocusedPageIndex;
    void /* unknown type, empty encoding */ pageInfoFetcher;
    void /* unknown type, empty encoding */ mostFocusedPageChangeHandler;
    void /* unknown type, empty encoding */ updater;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)updateContent;
- (id)initWithComposition:(id)a0;
- (void)alphaDidChange;
- (void)handlePageControl;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)layout:(id)a0 navigationObjectReferenceForSublayoutAtIndex:(long long)a1;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)updateDisplayedPageRange;
- (void)updateDisplayedPages;
- (void)updatePageControl;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
