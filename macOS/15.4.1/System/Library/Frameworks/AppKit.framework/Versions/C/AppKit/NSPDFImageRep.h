@class NSData, _NSPDFDocument;

@interface NSPDFImageRep : NSImageRep {
    NSData *_pdfData;
    _NSPDFDocument *_private;
}

@property (readonly) NSData *PDFRepresentation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property long long currentPage;
@property (readonly) long long pageCount;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (BOOL)canInitWithData:(id)a0;
+ (id)imageRepWithData:(id)a0;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredTypes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (struct CGPattern { } *)_createPatternForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (BOOL)_isValid;
- (long long)_pixelsHighOrResolutionIndependent;
- (long long)_pixelsWideOrResolutionIndependent;
- (long long)_uncachedSize;
- (BOOL)draw;

@end
