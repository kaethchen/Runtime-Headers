@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (id)annotation;
- (void)removeFromSuperlayer;
- (void)update;
- (void)_updateNoteLayer;

@end
