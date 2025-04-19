@interface PDFAnnotationElement : PDFAtomicElement

@property (readonly) struct CGPDFAnnotation { } *annotation;

- (id)initWithAnnotation:(struct CGPDFAnnotation { } *)a0 boundingBox:(id)a1;

@end
