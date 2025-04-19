@class NSData, NSPDFImageRep;

@interface NSEPSImageRep : NSImageRep {
    struct CGPoint { double x; double y; } _bBoxOrigin;
    NSData *_epsData;
    NSPDFImageRep *_pdfImageRep;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, copy) NSData *EPSRepresentation;

+ (void)initialize;
+ (BOOL)canInitWithData:(id)a0;
+ (id)imageRepWithData:(id)a0;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredTypes;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)draw;
- (void)prepareGState;

@end
