@class TNPageController, NSArray, NSMapTable, NSMutableArray, TNPdfHyperlinkController, TNAnnotationPrintingHelper;

@interface TNRenderingExporter : TSARenderingExporter <TNAnnotationPrintingHelperDataSource> {
    unsigned long long mSheetIndex;
    unsigned long long mPageIndex;
    NSMapTable *mPageCountCache;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } mSheetPageCountArray;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } mSheetPageStartArray;
    TNPageController *mPageController;
    TNPdfHyperlinkController *mHyperlinkController;
    NSMutableArray *mCanvasBasedSheets;
}

@property (readonly, nonatomic) TNAnnotationPrintingHelper *annotationPrintingHelper;
@property (readonly, nonatomic) NSArray *addendumContentProvidersForCurrentSheet;
@property (retain, nonatomic) NSArray *overlayContentProvidersForCurrentSheet;
@property (nonatomic) unsigned long long addendumPageIndex;
@property (nonatomic) unsigned long long exportState;
@property (nonatomic) unsigned long long addendumPageCount;
@property (nonatomic) BOOL shouldGenerateTemporaryLayouts;
@property (nonatomic) BOOL hasCompletedSetup;
@property (nonatomic, getter=isRenderingAllSheets) BOOL renderingAllSheets;
@property (nonatomic) unsigned long long renderingComments;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)teardown;
- (unsigned long long)pageCount;
- (void)setup;
- (id)pageController;
- (id)initWithDocumentRoot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unscaledClipRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRect;
- (BOOL)incrementPage;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (id)currentInfos;
- (BOOL)exportToURL:(id)a0 pageNumber:(unsigned long long)a1 delegate:(id)a2 error:(id *)a3;
- (BOOL)preparePage:(unsigned long long)a0;
- (double)progressForCurrentPage;
- (id)_pageCountCache;
- (id)_printableInfos;
- (id)quickLookSheets;
- (unsigned long long)_addendumPageCountForCurrentSheet;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_printMargins;
- (id)_printProperties;
- (void)_resetSheetDependentObjects;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unpaginatedBoundsRect;
- (void)_updateExportState;
- (id)addendumPageTitleOfAnnotationPrintingHelper:(id)a0;
- (void)annotationPrintingHelper:(id)a0 enumerateLayoutsByPageWithBlock:(id /* block */)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })annotationPrintingHelper:(id)a0 inversePureTransformInRootForContentAtPageIndex:(unsigned long long)a1;
- (id)annotationPrintingHelper:(id)a0 layoutsForPageIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableRectForAddendumContentOfAnnotationPrintingHelper:(id)a0;
- (double)contentScaleOfAnnotationPrintingHelper:(id)a0;
- (void)drawCurrentPageWithContext:(struct CGContext { } *)a0 returnSuccess:(BOOL *)a1;
- (Class)imagerClass;
- (unsigned long long)inSheetPageIndexForPage:(unsigned long long)a0;
- (BOOL)isPageInPortraitOrientation:(unsigned long long)a0;
- (unsigned long long)numberOfCanvasBasedSheets;
- (id)p_activeSheet;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_boundsRectForFirstPage;
- (id)p_canvasBasedSheets;
- (long long)p_indexOfActiveSheet;
- (BOOL)p_isActiveSheetForm;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })p_pageCountArray;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })p_pageStartArray;
- (long long)pageIndexFromQuickLookSheet:(id)a0;
- (void)processHyperlinksForCanvas:(id)a0 withContext:(struct CGContext { } *)a1 andImager:(id)a2 isFitToSheet:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForAddendumContentOfAnnotationPrintingHelper:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFlagContentOfAnnotationPrintingHelper:(id)a0;
- (void)setSheetIndex:(unsigned long long)a0 andPageIndex:(unsigned long long)a1;
- (void)setSheetIndex:(unsigned long long)a0 pageIndex:(unsigned long long)a1 addendumPageIndex:(unsigned long long)a2;
- (unsigned long long)sheetIndexForPage:(unsigned long long)a0;
- (BOOL)shouldPrintComments;
- (BOOL)shouldPrintCommentsOfAnnotationPrintingHelper:(id)a0;
- (BOOL)shouldSuppressBackgroundsForCurrentPage;
- (double)totalProgess;

@end
