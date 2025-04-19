@class PKImage;

@interface _PKPassImageConstruction_ImageRepresentation : NSObject {
    struct CGPDFDocument { } *_documentRef;
}

@property (readonly, nonatomic) PKImage *image;
@property (readonly, nonatomic) struct CGPDFPage { } *pageRef;

+ (id)representationFromDocument:(struct CGPDFDocument { } *)a0 page:(struct CGPDFPage { } *)a1;
+ (id)representationFromImage:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;

@end
