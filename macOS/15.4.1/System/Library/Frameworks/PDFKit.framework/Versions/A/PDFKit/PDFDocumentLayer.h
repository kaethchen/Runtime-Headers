@class PDFDocumentLayerPrivate;

@interface PDFDocumentLayer : CALayer <PDFPageBackgroundManagerDelegate> {
    PDFDocumentLayerPrivate *_private;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)layout;
- (id)document;
- (void)setDisplayMode:(long long)a0;
- (long long)displayMode;
- (void)setSelection:(id)a0;
- (long long)displayBox;
- (void)_updateLayout;
- (void)_updateTiles;
- (void)_setupPageLayerSearchSelection:(id)a0;
- (BOOL)_isPageVisible:(id)a0;
- (id)_createPDFPageLayerForPage:(id)a0;
- (BOOL)_isPageLayerEffectVisible:(id)a0 forPageLayer:(id)a1;
- (void)_releasePDFPageLayer:(id)a0;
- (void)_setBackgroundImage:(id)a0 onPDFPageLayer:(id)a1;
- (void)_setupAnnotationsForPage:(id)a0 withLayer:(id)a1;
- (void)_setupPageLayerBackground:(id)a0;
- (void)_setupPageLayerSelection:(id)a0;
- (void)_updateAnnotations;
- (void)_updateVisiblePages;
- (void)addCoachMarkForSelection:(id)a0;
- (id)backgroundImageForPage:(id)a0 withQuality:(int *)a1;
- (long long)displayDirection;
- (BOOL)displaysAsBook;
- (BOOL)displaysRTL;
- (id)getPDFPageLayerEffectForAnnotation:(id)a0;
- (id)getPageLayerForPageIndex:(long long)a0;
- (id)initWithDocument:(id)a0 geometryInterface:(id)a1 andRenderingProperties:(id)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })pageBreakMargins;
- (void)recieveBackgroundImage:(id)a0 atBackgroundQuality:(int)a1 forPage:(id)a2;
- (void)setNeedsTilesUpdate;
- (void)setSearchSelection:(id)a0;
- (void)updatePDFScannerResultHighlightOnPage:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)visiblePageLayers;

@end
